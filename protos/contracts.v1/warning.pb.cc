// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/contracts.v1/warning.proto

#include "protos/contracts.v1/warning.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace contracts {
namespace v1 {
class WarningDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Warning>
      _instance;
} _Warning_default_instance_;
}  // namespace v1
}  // namespace contracts
namespace protobuf_protos_2fcontracts_2ev1_2fwarning_2eproto {
static void InitDefaultsWarning() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::contracts::v1::_Warning_default_instance_;
    new (ptr) ::contracts::v1::Warning();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::contracts::v1::Warning::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Warning =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsWarning}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Warning.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::Warning, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::Warning, status_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::Warning, message_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::contracts::v1::Warning)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::contracts::v1::_Warning_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "protos/contracts.v1/warning.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n!protos/contracts.v1/warning.proto\022\014con"
      "tracts.v1\"*\n\007Warning\022\016\n\006status\030\001 \001(\t\022\017\n\007"
      "message\030\002 \001(\tB\177\n#io.estafette.ci.protos."
      "contracts.v1Z<github.com/estafette/estaf"
      "ette-ci-protos-golang/contracts_v1\252\002\031Est"
      "afette.CI.Contracts.V1b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 230);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "protos/contracts.v1/warning.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_protos_2fcontracts_2ev1_2fwarning_2eproto
namespace contracts {
namespace v1 {

// ===================================================================

void Warning::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Warning::kStatusFieldNumber;
const int Warning::kMessageFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Warning::Warning()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_protos_2fcontracts_2ev1_2fwarning_2eproto::scc_info_Warning.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:contracts.v1.Warning)
}
Warning::Warning(const Warning& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  status_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.status().size() > 0) {
    status_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.status_);
  }
  message_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.message().size() > 0) {
    message_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.message_);
  }
  // @@protoc_insertion_point(copy_constructor:contracts.v1.Warning)
}

void Warning::SharedCtor() {
  status_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  message_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

Warning::~Warning() {
  // @@protoc_insertion_point(destructor:contracts.v1.Warning)
  SharedDtor();
}

void Warning::SharedDtor() {
  status_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  message_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Warning::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Warning::descriptor() {
  ::protobuf_protos_2fcontracts_2ev1_2fwarning_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_protos_2fcontracts_2ev1_2fwarning_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Warning& Warning::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_protos_2fcontracts_2ev1_2fwarning_2eproto::scc_info_Warning.base);
  return *internal_default_instance();
}


void Warning::Clear() {
// @@protoc_insertion_point(message_clear_start:contracts.v1.Warning)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  status_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  message_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool Warning::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:contracts.v1.Warning)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string status = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_status()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->status().data(), static_cast<int>(this->status().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "contracts.v1.Warning.status"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string message = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_message()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->message().data(), static_cast<int>(this->message().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "contracts.v1.Warning.message"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:contracts.v1.Warning)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:contracts.v1.Warning)
  return false;
#undef DO_
}

void Warning::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:contracts.v1.Warning)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string status = 1;
  if (this->status().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->status().data(), static_cast<int>(this->status().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "contracts.v1.Warning.status");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->status(), output);
  }

  // string message = 2;
  if (this->message().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->message().data(), static_cast<int>(this->message().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "contracts.v1.Warning.message");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->message(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:contracts.v1.Warning)
}

::google::protobuf::uint8* Warning::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:contracts.v1.Warning)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string status = 1;
  if (this->status().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->status().data(), static_cast<int>(this->status().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "contracts.v1.Warning.status");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->status(), target);
  }

  // string message = 2;
  if (this->message().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->message().data(), static_cast<int>(this->message().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "contracts.v1.Warning.message");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->message(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:contracts.v1.Warning)
  return target;
}

size_t Warning::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:contracts.v1.Warning)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string status = 1;
  if (this->status().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->status());
  }

  // string message = 2;
  if (this->message().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->message());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Warning::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:contracts.v1.Warning)
  GOOGLE_DCHECK_NE(&from, this);
  const Warning* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Warning>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:contracts.v1.Warning)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:contracts.v1.Warning)
    MergeFrom(*source);
  }
}

void Warning::MergeFrom(const Warning& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:contracts.v1.Warning)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.status().size() > 0) {

    status_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.status_);
  }
  if (from.message().size() > 0) {

    message_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.message_);
  }
}

void Warning::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:contracts.v1.Warning)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Warning::CopyFrom(const Warning& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:contracts.v1.Warning)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Warning::IsInitialized() const {
  return true;
}

void Warning::Swap(Warning* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Warning::InternalSwap(Warning* other) {
  using std::swap;
  status_.Swap(&other->status_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  message_.Swap(&other->message_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Warning::GetMetadata() const {
  protobuf_protos_2fcontracts_2ev1_2fwarning_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_protos_2fcontracts_2ev1_2fwarning_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace contracts
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::contracts::v1::Warning* Arena::CreateMaybeMessage< ::contracts::v1::Warning >(Arena* arena) {
  return Arena::CreateInternal< ::contracts::v1::Warning >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)