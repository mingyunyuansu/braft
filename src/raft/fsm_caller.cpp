// Copyright (c) 2015 Baidu.com, Inc. All Rights Reserved

// Author: Zhangyi Chen (chenzhangyi01@baidu.com)
// Date: 2015/10/20 23:45:17

#include <base/logging.h>
#include "raft/raft.h"
#include "raft/log_manager.h"
#include "raft/node.h"
#include "raft/util.h"
#include "raft/raft.pb.h"
#include "raft/log_entry.h"

#include "raft/fsm_caller.h"

namespace raft {

FSMCaller::FSMCaller()
    : _log_manager(NULL)
    , _fsm(NULL)
    , _last_applied_index(0)
    , _last_applied_term(0)
    , _after_shutdown(NULL)
{
}

FSMCaller::~FSMCaller() {
    CHECK(_after_shutdown == NULL);
}

int FSMCaller::run(void* meta, google::protobuf::Closure** const tasks[], size_t tasks_size) {
    FSMCaller* caller = (FSMCaller*)meta;
    if (tasks_size == 0) {
        caller->do_shutdown();
        return 0;
    }
    // run closure
    for (size_t i = 0; i < tasks_size; i++) {
        google::protobuf::Closure* done = *tasks[i];
        if (done) {
            done->Run();
        }
    }
    return 0;
}

int FSMCaller::init(const FSMCallerOptions &options) {
    if (options.log_manager == NULL || options.fsm == NULL) {
        return EINVAL;
    }
    _log_manager = options.log_manager;
    _fsm = options.fsm;
    _after_shutdown = options.after_shutdown;

    bthread::execution_queue_start(&_queue,
                                   NULL, /*queue_options*/
                                   FSMCaller::run,
                                   this);
    // bind lifecycle with node, need AddRef, shutdown is async
    //_node->AddRef();
    return 0;
}

int FSMCaller::shutdown() {
    return bthread::execution_queue_stop(_queue);
}

void FSMCaller::do_shutdown() {
    _fsm->on_shutdown();
    if (_after_shutdown) {
        google::protobuf::Closure* saved_done = _after_shutdown;
        _after_shutdown = NULL;
        // after this point, |this| is likely to be destroyed, don't touch
        // anything
        saved_done->Run();
    }
}

int FSMCaller::on_committed(int64_t committed_index, void *context) {
    google::protobuf::Closure* done =
        google::protobuf::NewCallback(this, &FSMCaller::do_committed,
                                      committed_index, static_cast<Closure*>(context));
    return bthread::execution_queue_execute(_queue, done);
}

void FSMCaller::do_committed(int64_t committed_index, Closure* done) {
    int64_t last_applied_index = _last_applied_index.load(boost::memory_order_relaxed);

    // some uncommitted logs will be committed when follower become leader
    // and append a new log success. done only call when index equal committed_index
    RAFT_VLOG << "do_committed " << committed_index;
    CHECK(committed_index > last_applied_index);

    for (int64_t index = last_applied_index + 1; index <= committed_index; ++index) {
        LogEntry *entry = _log_manager->get_entry(index);
        if (entry == NULL) {
            CHECK(done == NULL);
            break;
        }
        CHECK(index == entry->index);

        switch (entry->type) {
        case ENTRY_TYPE_DATA:
            //TODO: use result instead of done
            if (index == committed_index) {
                _fsm->on_apply(entry->data, index, done);
            } else {
                _fsm->on_apply(entry->data, index, NULL);
            }
            break;
        case ENTRY_TYPE_ADD_PEER:
        case ENTRY_TYPE_REMOVE_PEER:
            // Notify that configuration change is successfully executed
            //_node->on_configuration_change_done(entry->type, *(entry->peers));
            if (done && index == committed_index) {
                done->Run();
            }
            break;
        case ENTRY_TYPE_NO_OP:
            break;
        default:
            CHECK(false) << "Unknown entry type" << entry->type;
        }

        _last_applied_index.store(index, boost::memory_order_release);
        _last_applied_term = entry->term;
        _log_manager->set_applied_index(index);
        entry->Release();
    }
}

int FSMCaller::on_cleared(int64_t log_index, void* context, int error_code) {
    google::protobuf::Closure* done =
        google::protobuf::NewCallback(this, &FSMCaller::do_cleared,
                                      log_index, static_cast<Closure*>(context), error_code);
    int ret = bthread::execution_queue_execute(_queue, done);
    if (0 != ret) {
        delete done;
        Closure* closure = static_cast<Closure*>(context);
        closure->set_error(error_code, "%s", berror(error_code));
        ret = run_closure_in_bthread(closure);
    }
    return ret;
}

void FSMCaller::do_cleared(int64_t log_index, Closure* done, int error_code) {
    RAFT_VLOG << "do_cleared" << log_index << " err: " << error_code;
    CHECK(done);
    done->set_error(error_code, "%s", berror(error_code));
    done->Run();
}

int FSMCaller::on_snapshot_save(SaveSnapshotClosure* done) {
    google::protobuf::Closure* new_done =
        google::protobuf::NewCallback(this, &FSMCaller::do_snapshot_save, done);
    return bthread::execution_queue_execute(_queue, new_done);
}

void FSMCaller::do_snapshot_save(SaveSnapshotClosure* done) {
    CHECK(done);

#if 0
    // no data change between snapshot
    if (_last_applied_index == _log_manager->last_snapshot_index()) {
        LOG(INFO) << "no data change between snapshot, skip snapshot_save";
        done->Run();
        return;
    }
#endif

    int64_t last_applied_index = _last_applied_index.load(boost::memory_order_relaxed);

    SnapshotMeta meta;
    meta.last_included_index = last_applied_index;
    meta.last_included_term = _last_applied_term;
    ConfigurationPair pair = _log_manager->get_configuration(last_applied_index);
    meta.last_configuration = pair.second;

    SnapshotWriter* writer = done->start(meta);
    if (!writer) {
        done->set_error(EINVAL, "snapshot_storage create SnapshotWriter failed");
        done->Run();
        return;
    }

    int ret = _fsm->on_snapshot_save(writer, done);
    if (ret != 0) {
        done->set_error(ret, "StateMachine on_snapshot_save failed");
        done->Run();
        return;
    }

    return;
}

int FSMCaller::on_snapshot_load(LoadSnapshotClosure* done) {
    google::protobuf::Closure* new_done =
        google::protobuf::NewCallback(this, &FSMCaller::do_snapshot_load, done);
    return bthread::execution_queue_execute(_queue, new_done);
}

void FSMCaller::do_snapshot_load(LoadSnapshotClosure* done) {
    //TODO done_guard
    SnapshotReader* reader = done->start();
    if (!reader) {
        done->set_error(EINVAL, "open SnapshotReader failed");
        done->Run();
        return;
    }

    SnapshotMeta meta;
    int ret = reader->load_meta(&meta);
    if (0 != ret) {
        done->set_error(ret, "SnapshotReader load_meta failed.");
        done->Run();
        return;
    }

    ret = _fsm->on_snapshot_load(reader);
    if (ret != 0) {
        done->set_error(ret, "StateMachine on_snapshot_load failed");
        done->Run();
        return;
    }

    _last_applied_index.store(meta.last_included_index, boost::memory_order_release);
    done->Run();
}

class LeaderStartClosure : public Closure {
public:
    LeaderStartClosure(StateMachine* fsm) : _fsm(fsm) {}
    void Run() {
        if (_err_code == 0) {
            _fsm->on_leader_start();
        }
        delete this;
    }
private:
    StateMachine* _fsm;
};

Closure* FSMCaller::on_leader_start() {
    return new LeaderStartClosure(_fsm);
}

int FSMCaller::on_leader_stop() {
    google::protobuf::Closure* done =
        google::protobuf::NewCallback(this, &FSMCaller::do_leader_stop);
    return bthread::execution_queue_execute(_queue, done);
}

void FSMCaller::do_leader_stop() {
    _fsm->on_leader_stop();
}

}  // namespace raft
