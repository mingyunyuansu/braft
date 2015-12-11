// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "raft/local_storage.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace raft {

namespace {

const ::google::protobuf::Descriptor* ConfigurationPBMeta_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ConfigurationPBMeta_reflection_ = NULL;
const ::google::protobuf::Descriptor* LogPBMeta_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  LogPBMeta_reflection_ = NULL;
const ::google::protobuf::Descriptor* StablePBMeta_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  StablePBMeta_reflection_ = NULL;
const ::google::protobuf::Descriptor* SnapshotPBMeta_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SnapshotPBMeta_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_raft_2flocal_5fstorage_2eproto() {
  protobuf_AddDesc_raft_2flocal_5fstorage_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "raft/local_storage.proto");
  GOOGLE_CHECK(file != NULL);
  ConfigurationPBMeta_descriptor_ = file->message_type(0);
  static const int ConfigurationPBMeta_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConfigurationPBMeta, peers_),
  };
  ConfigurationPBMeta_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ConfigurationPBMeta_descriptor_,
      ConfigurationPBMeta::default_instance_,
      ConfigurationPBMeta_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConfigurationPBMeta, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConfigurationPBMeta, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ConfigurationPBMeta));
  LogPBMeta_descriptor_ = file->message_type(1);
  static const int LogPBMeta_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LogPBMeta, first_log_index_),
  };
  LogPBMeta_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      LogPBMeta_descriptor_,
      LogPBMeta::default_instance_,
      LogPBMeta_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LogPBMeta, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LogPBMeta, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(LogPBMeta));
  StablePBMeta_descriptor_ = file->message_type(2);
  static const int StablePBMeta_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StablePBMeta, term_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StablePBMeta, votedfor_),
  };
  StablePBMeta_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      StablePBMeta_descriptor_,
      StablePBMeta::default_instance_,
      StablePBMeta_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StablePBMeta, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StablePBMeta, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(StablePBMeta));
  SnapshotPBMeta_descriptor_ = file->message_type(3);
  static const int SnapshotPBMeta_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SnapshotPBMeta, last_included_term_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SnapshotPBMeta, last_included_index_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SnapshotPBMeta, peers_),
  };
  SnapshotPBMeta_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      SnapshotPBMeta_descriptor_,
      SnapshotPBMeta::default_instance_,
      SnapshotPBMeta_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SnapshotPBMeta, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SnapshotPBMeta, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(SnapshotPBMeta));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_raft_2flocal_5fstorage_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ConfigurationPBMeta_descriptor_, &ConfigurationPBMeta::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    LogPBMeta_descriptor_, &LogPBMeta::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    StablePBMeta_descriptor_, &StablePBMeta::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    SnapshotPBMeta_descriptor_, &SnapshotPBMeta::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_raft_2flocal_5fstorage_2eproto() {
  delete ConfigurationPBMeta::default_instance_;
  delete ConfigurationPBMeta_reflection_;
  delete LogPBMeta::default_instance_;
  delete LogPBMeta_reflection_;
  delete StablePBMeta::default_instance_;
  delete StablePBMeta_reflection_;
  delete SnapshotPBMeta::default_instance_;
  delete SnapshotPBMeta_reflection_;
}

void protobuf_AddDesc_raft_2flocal_5fstorage_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::raft::protobuf_AddDesc_raft_2fraft_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\030raft/local_storage.proto\022\004raft\032\017raft/r"
    "aft.proto\"$\n\023ConfigurationPBMeta\022\r\n\005peer"
    "s\030\001 \003(\t\"$\n\tLogPBMeta\022\027\n\017first_log_index\030"
    "\001 \002(\003\".\n\014StablePBMeta\022\014\n\004term\030\001 \002(\003\022\020\n\010v"
    "otedfor\030\002 \002(\t\"X\n\016SnapshotPBMeta\022\032\n\022last_"
    "included_term\030\001 \002(\003\022\033\n\023last_included_ind"
    "ex\030\002 \002(\003\022\r\n\005peers\030\003 \003(\t", 263);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "raft/local_storage.proto", &protobuf_RegisterTypes);
  ConfigurationPBMeta::default_instance_ = new ConfigurationPBMeta();
  LogPBMeta::default_instance_ = new LogPBMeta();
  StablePBMeta::default_instance_ = new StablePBMeta();
  SnapshotPBMeta::default_instance_ = new SnapshotPBMeta();
  ConfigurationPBMeta::default_instance_->InitAsDefaultInstance();
  LogPBMeta::default_instance_->InitAsDefaultInstance();
  StablePBMeta::default_instance_->InitAsDefaultInstance();
  SnapshotPBMeta::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_raft_2flocal_5fstorage_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_raft_2flocal_5fstorage_2eproto {
  StaticDescriptorInitializer_raft_2flocal_5fstorage_2eproto() {
    protobuf_AddDesc_raft_2flocal_5fstorage_2eproto();
  }
} static_descriptor_initializer_raft_2flocal_5fstorage_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int ConfigurationPBMeta::kPeersFieldNumber;
#endif  // !_MSC_VER

ConfigurationPBMeta::ConfigurationPBMeta()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void ConfigurationPBMeta::InitAsDefaultInstance() {
}

ConfigurationPBMeta::ConfigurationPBMeta(const ConfigurationPBMeta& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void ConfigurationPBMeta::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ConfigurationPBMeta::~ConfigurationPBMeta() {
  SharedDtor();
}

void ConfigurationPBMeta::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ConfigurationPBMeta::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ConfigurationPBMeta::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ConfigurationPBMeta_descriptor_;
}

const ConfigurationPBMeta& ConfigurationPBMeta::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_raft_2flocal_5fstorage_2eproto();  return *default_instance_;
}

ConfigurationPBMeta* ConfigurationPBMeta::default_instance_ = NULL;

ConfigurationPBMeta* ConfigurationPBMeta::New() const {
  return new ConfigurationPBMeta;
}

void ConfigurationPBMeta::Clear() {
  peers_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ConfigurationPBMeta::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated string peers = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_peers:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_peers()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->peers(0).data(), this->peers(0).length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_peers;
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void ConfigurationPBMeta::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated string peers = 1;
  for (int i = 0; i < this->peers_size(); i++) {
  ::google::protobuf::internal::WireFormat::VerifyUTF8String(
    this->peers(i).data(), this->peers(i).length(),
    ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->peers(i), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* ConfigurationPBMeta::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated string peers = 1;
  for (int i = 0; i < this->peers_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->peers(i).data(), this->peers(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(1, this->peers(i), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int ConfigurationPBMeta::ByteSize() const {
  int total_size = 0;
  
  // repeated string peers = 1;
  total_size += 1 * this->peers_size();
  for (int i = 0; i < this->peers_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->peers(i));
  }
  
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ConfigurationPBMeta::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ConfigurationPBMeta* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ConfigurationPBMeta*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ConfigurationPBMeta::MergeFrom(const ConfigurationPBMeta& from) {
  GOOGLE_CHECK_NE(&from, this);
  peers_.MergeFrom(from.peers_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ConfigurationPBMeta::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ConfigurationPBMeta::CopyFrom(const ConfigurationPBMeta& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ConfigurationPBMeta::IsInitialized() const {
  
  return true;
}

void ConfigurationPBMeta::Swap(ConfigurationPBMeta* other) {
  if (other != this) {
    peers_.Swap(&other->peers_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ConfigurationPBMeta::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ConfigurationPBMeta_descriptor_;
  metadata.reflection = ConfigurationPBMeta_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int LogPBMeta::kFirstLogIndexFieldNumber;
#endif  // !_MSC_VER

LogPBMeta::LogPBMeta()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void LogPBMeta::InitAsDefaultInstance() {
}

LogPBMeta::LogPBMeta(const LogPBMeta& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void LogPBMeta::SharedCtor() {
  _cached_size_ = 0;
  first_log_index_ = GOOGLE_LONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

LogPBMeta::~LogPBMeta() {
  SharedDtor();
}

void LogPBMeta::SharedDtor() {
  if (this != default_instance_) {
  }
}

void LogPBMeta::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LogPBMeta::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return LogPBMeta_descriptor_;
}

const LogPBMeta& LogPBMeta::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_raft_2flocal_5fstorage_2eproto();  return *default_instance_;
}

LogPBMeta* LogPBMeta::default_instance_ = NULL;

LogPBMeta* LogPBMeta::New() const {
  return new LogPBMeta;
}

void LogPBMeta::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    first_log_index_ = GOOGLE_LONGLONG(0);
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool LogPBMeta::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int64 first_log_index = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &first_log_index_)));
          set_has_first_log_index();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void LogPBMeta::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int64 first_log_index = 1;
  if (has_first_log_index()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->first_log_index(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* LogPBMeta::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int64 first_log_index = 1;
  if (has_first_log_index()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->first_log_index(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int LogPBMeta::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int64 first_log_index = 1;
    if (has_first_log_index()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->first_log_index());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LogPBMeta::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const LogPBMeta* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const LogPBMeta*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void LogPBMeta::MergeFrom(const LogPBMeta& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_first_log_index()) {
      set_first_log_index(from.first_log_index());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void LogPBMeta::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LogPBMeta::CopyFrom(const LogPBMeta& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LogPBMeta::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  
  return true;
}

void LogPBMeta::Swap(LogPBMeta* other) {
  if (other != this) {
    std::swap(first_log_index_, other->first_log_index_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata LogPBMeta::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = LogPBMeta_descriptor_;
  metadata.reflection = LogPBMeta_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int StablePBMeta::kTermFieldNumber;
const int StablePBMeta::kVotedforFieldNumber;
#endif  // !_MSC_VER

StablePBMeta::StablePBMeta()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void StablePBMeta::InitAsDefaultInstance() {
}

StablePBMeta::StablePBMeta(const StablePBMeta& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void StablePBMeta::SharedCtor() {
  _cached_size_ = 0;
  term_ = GOOGLE_LONGLONG(0);
  votedfor_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

StablePBMeta::~StablePBMeta() {
  SharedDtor();
}

void StablePBMeta::SharedDtor() {
  if (votedfor_ != &::google::protobuf::internal::kEmptyString) {
    delete votedfor_;
  }
  if (this != default_instance_) {
  }
}

void StablePBMeta::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* StablePBMeta::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return StablePBMeta_descriptor_;
}

const StablePBMeta& StablePBMeta::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_raft_2flocal_5fstorage_2eproto();  return *default_instance_;
}

StablePBMeta* StablePBMeta::default_instance_ = NULL;

StablePBMeta* StablePBMeta::New() const {
  return new StablePBMeta;
}

void StablePBMeta::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    term_ = GOOGLE_LONGLONG(0);
    if (has_votedfor()) {
      if (votedfor_ != &::google::protobuf::internal::kEmptyString) {
        votedfor_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool StablePBMeta::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int64 term = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &term_)));
          set_has_term();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_votedfor;
        break;
      }
      
      // required string votedfor = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_votedfor:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_votedfor()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->votedfor().data(), this->votedfor().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void StablePBMeta::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int64 term = 1;
  if (has_term()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->term(), output);
  }
  
  // required string votedfor = 2;
  if (has_votedfor()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->votedfor().data(), this->votedfor().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->votedfor(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* StablePBMeta::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int64 term = 1;
  if (has_term()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->term(), target);
  }
  
  // required string votedfor = 2;
  if (has_votedfor()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->votedfor().data(), this->votedfor().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->votedfor(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int StablePBMeta::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int64 term = 1;
    if (has_term()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->term());
    }
    
    // required string votedfor = 2;
    if (has_votedfor()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->votedfor());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void StablePBMeta::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const StablePBMeta* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const StablePBMeta*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void StablePBMeta::MergeFrom(const StablePBMeta& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_term()) {
      set_term(from.term());
    }
    if (from.has_votedfor()) {
      set_votedfor(from.votedfor());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void StablePBMeta::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void StablePBMeta::CopyFrom(const StablePBMeta& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StablePBMeta::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  
  return true;
}

void StablePBMeta::Swap(StablePBMeta* other) {
  if (other != this) {
    std::swap(term_, other->term_);
    std::swap(votedfor_, other->votedfor_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata StablePBMeta::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = StablePBMeta_descriptor_;
  metadata.reflection = StablePBMeta_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int SnapshotPBMeta::kLastIncludedTermFieldNumber;
const int SnapshotPBMeta::kLastIncludedIndexFieldNumber;
const int SnapshotPBMeta::kPeersFieldNumber;
#endif  // !_MSC_VER

SnapshotPBMeta::SnapshotPBMeta()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void SnapshotPBMeta::InitAsDefaultInstance() {
}

SnapshotPBMeta::SnapshotPBMeta(const SnapshotPBMeta& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void SnapshotPBMeta::SharedCtor() {
  _cached_size_ = 0;
  last_included_term_ = GOOGLE_LONGLONG(0);
  last_included_index_ = GOOGLE_LONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SnapshotPBMeta::~SnapshotPBMeta() {
  SharedDtor();
}

void SnapshotPBMeta::SharedDtor() {
  if (this != default_instance_) {
  }
}

void SnapshotPBMeta::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SnapshotPBMeta::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SnapshotPBMeta_descriptor_;
}

const SnapshotPBMeta& SnapshotPBMeta::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_raft_2flocal_5fstorage_2eproto();  return *default_instance_;
}

SnapshotPBMeta* SnapshotPBMeta::default_instance_ = NULL;

SnapshotPBMeta* SnapshotPBMeta::New() const {
  return new SnapshotPBMeta;
}

void SnapshotPBMeta::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    last_included_term_ = GOOGLE_LONGLONG(0);
    last_included_index_ = GOOGLE_LONGLONG(0);
  }
  peers_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool SnapshotPBMeta::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int64 last_included_term = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &last_included_term_)));
          set_has_last_included_term();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_last_included_index;
        break;
      }
      
      // required int64 last_included_index = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_last_included_index:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &last_included_index_)));
          set_has_last_included_index();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_peers;
        break;
      }
      
      // repeated string peers = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_peers:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_peers()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->peers(0).data(), this->peers(0).length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_peers;
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void SnapshotPBMeta::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int64 last_included_term = 1;
  if (has_last_included_term()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->last_included_term(), output);
  }
  
  // required int64 last_included_index = 2;
  if (has_last_included_index()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->last_included_index(), output);
  }
  
  // repeated string peers = 3;
  for (int i = 0; i < this->peers_size(); i++) {
  ::google::protobuf::internal::WireFormat::VerifyUTF8String(
    this->peers(i).data(), this->peers(i).length(),
    ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->peers(i), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* SnapshotPBMeta::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int64 last_included_term = 1;
  if (has_last_included_term()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->last_included_term(), target);
  }
  
  // required int64 last_included_index = 2;
  if (has_last_included_index()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->last_included_index(), target);
  }
  
  // repeated string peers = 3;
  for (int i = 0; i < this->peers_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->peers(i).data(), this->peers(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(3, this->peers(i), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int SnapshotPBMeta::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int64 last_included_term = 1;
    if (has_last_included_term()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->last_included_term());
    }
    
    // required int64 last_included_index = 2;
    if (has_last_included_index()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->last_included_index());
    }
    
  }
  // repeated string peers = 3;
  total_size += 1 * this->peers_size();
  for (int i = 0; i < this->peers_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->peers(i));
  }
  
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SnapshotPBMeta::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const SnapshotPBMeta* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const SnapshotPBMeta*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void SnapshotPBMeta::MergeFrom(const SnapshotPBMeta& from) {
  GOOGLE_CHECK_NE(&from, this);
  peers_.MergeFrom(from.peers_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_last_included_term()) {
      set_last_included_term(from.last_included_term());
    }
    if (from.has_last_included_index()) {
      set_last_included_index(from.last_included_index());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void SnapshotPBMeta::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SnapshotPBMeta::CopyFrom(const SnapshotPBMeta& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SnapshotPBMeta::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  
  return true;
}

void SnapshotPBMeta::Swap(SnapshotPBMeta* other) {
  if (other != this) {
    std::swap(last_included_term_, other->last_included_term_);
    std::swap(last_included_index_, other->last_included_index_);
    peers_.Swap(&other->peers_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata SnapshotPBMeta::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SnapshotPBMeta_descriptor_;
  metadata.reflection = SnapshotPBMeta_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace raft

// @@protoc_insertion_point(global_scope)
