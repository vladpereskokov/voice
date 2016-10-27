// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AddData.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "AddData.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace Jarvis {

namespace {

const ::google::protobuf::Descriptor* AddData_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  AddData_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_AddData_2eproto() {
  protobuf_AddDesc_AddData_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "AddData.proto");
  GOOGLE_CHECK(file != NULL);
  AddData_descriptor_ = file->message_type(0);
  static const int AddData_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AddData, audiodata_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AddData, lastchunk_),
  };
  AddData_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      AddData_descriptor_,
      AddData::default_instance_,
      AddData_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AddData, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AddData, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(AddData));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_AddData_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    AddData_descriptor_, &AddData::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_AddData_2eproto() {
  delete AddData::default_instance_;
  delete AddData_reflection_;
}

void protobuf_AddDesc_AddData_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\rAddData.proto\022\006Jarvis\"/\n\007AddData\022\021\n\tau"
    "dioData\030\001 \001(\014\022\021\n\tlastChunk\030\002 \002(\010", 72);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "AddData.proto", &protobuf_RegisterTypes);
  AddData::default_instance_ = new AddData();
  AddData::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_AddData_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_AddData_2eproto {
  StaticDescriptorInitializer_AddData_2eproto() {
    protobuf_AddDesc_AddData_2eproto();
  }
} static_descriptor_initializer_AddData_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int AddData::kAudioDataFieldNumber;
const int AddData::kLastChunkFieldNumber;
#endif  // !_MSC_VER

AddData::AddData()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Jarvis.AddData)
}

void AddData::InitAsDefaultInstance() {
}

AddData::AddData(const AddData& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Jarvis.AddData)
}

void AddData::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  audiodata_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  lastchunk_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

AddData::~AddData() {
  // @@protoc_insertion_point(destructor:Jarvis.AddData)
  SharedDtor();
}

void AddData::SharedDtor() {
  if (audiodata_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete audiodata_;
  }
  if (this != default_instance_) {
  }
}

void AddData::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AddData::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return AddData_descriptor_;
}

const AddData& AddData::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_AddData_2eproto();
  return *default_instance_;
}

AddData* AddData::default_instance_ = NULL;

AddData* AddData::New() const {
  return new AddData;
}

void AddData::Clear() {
  if (_has_bits_[0 / 32] & 3) {
    if (has_audiodata()) {
      if (audiodata_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        audiodata_->clear();
      }
    }
    lastchunk_ = false;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool AddData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Jarvis.AddData)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bytes audioData = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_audiodata()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_lastChunk;
        break;
      }

      // required bool lastChunk = 2;
      case 2: {
        if (tag == 16) {
         parse_lastChunk:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &lastchunk_)));
          set_has_lastchunk();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Jarvis.AddData)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Jarvis.AddData)
  return false;
#undef DO_
}

void AddData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Jarvis.AddData)
  // optional bytes audioData = 1;
  if (has_audiodata()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      1, this->audiodata(), output);
  }

  // required bool lastChunk = 2;
  if (has_lastchunk()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->lastchunk(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Jarvis.AddData)
}

::google::protobuf::uint8* AddData::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Jarvis.AddData)
  // optional bytes audioData = 1;
  if (has_audiodata()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->audiodata(), target);
  }

  // required bool lastChunk = 2;
  if (has_lastchunk()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->lastchunk(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Jarvis.AddData)
  return target;
}

int AddData::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional bytes audioData = 1;
    if (has_audiodata()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->audiodata());
    }

    // required bool lastChunk = 2;
    if (has_lastchunk()) {
      total_size += 1 + 1;
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

void AddData::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const AddData* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const AddData*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void AddData::MergeFrom(const AddData& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_audiodata()) {
      set_audiodata(from.audiodata());
    }
    if (from.has_lastchunk()) {
      set_lastchunk(from.lastchunk());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void AddData::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AddData::CopyFrom(const AddData& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AddData::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000002) != 0x00000002) return false;

  return true;
}

void AddData::Swap(AddData* other) {
  if (other != this) {
    std::swap(audiodata_, other->audiodata_);
    std::swap(lastchunk_, other->lastchunk_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata AddData::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = AddData_descriptor_;
  metadata.reflection = AddData_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Jarvis

// @@protoc_insertion_point(global_scope)