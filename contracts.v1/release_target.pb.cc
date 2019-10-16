// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: contracts.v1/release_target.proto

#include "contracts.v1/release_target.pb.h"

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

namespace protobuf_contracts_2ev1_2frelease_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_contracts_2ev1_2frelease_2eproto ::google::protobuf::internal::SCCInfo<3> scc_info_Release;
}  // namespace protobuf_contracts_2ev1_2frelease_2eproto
namespace protobuf_manifest_2ev1_2festafette_5frelease_5faction_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_manifest_2ev1_2festafette_5frelease_5faction_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_EstafetteReleaseAction;
}  // namespace protobuf_manifest_2ev1_2festafette_5frelease_5faction_2eproto
namespace contracts {
namespace v1 {
class ReleaseTargetDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ReleaseTarget>
      _instance;
} _ReleaseTarget_default_instance_;
}  // namespace v1
}  // namespace contracts
namespace protobuf_contracts_2ev1_2frelease_5ftarget_2eproto {
static void InitDefaultsReleaseTarget() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::contracts::v1::_ReleaseTarget_default_instance_;
    new (ptr) ::contracts::v1::ReleaseTarget();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::contracts::v1::ReleaseTarget::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<2> scc_info_ReleaseTarget =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsReleaseTarget}, {
      &protobuf_manifest_2ev1_2festafette_5frelease_5faction_2eproto::scc_info_EstafetteReleaseAction.base,
      &protobuf_contracts_2ev1_2frelease_2eproto::scc_info_Release.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_ReleaseTarget.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::ReleaseTarget, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::ReleaseTarget, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::ReleaseTarget, actions_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::ReleaseTarget, active_releases_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::contracts::v1::ReleaseTarget)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::contracts::v1::_ReleaseTarget_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "contracts.v1/release_target.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n!contracts.v1/release_target.proto\022\014con"
      "tracts.v1\032*manifest.v1/estafette_release"
      "_action.proto\032\032contracts.v1/release.prot"
      "o\"\203\001\n\rReleaseTarget\022\014\n\004name\030\001 \001(\t\0224\n\007act"
      "ions\030\002 \003(\0132#.manifest.v1.EstafetteReleas"
      "eAction\022.\n\017active_releases\030\003 \003(\0132\025.contr"
      "acts.v1.ReleaseBAZ\?github.com/estafette/"
      "estafette-ci-contracts-golang/contracts_"
      "v1b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 330);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "contracts.v1/release_target.proto", &protobuf_RegisterTypes);
  ::protobuf_manifest_2ev1_2festafette_5frelease_5faction_2eproto::AddDescriptors();
  ::protobuf_contracts_2ev1_2frelease_2eproto::AddDescriptors();
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
}  // namespace protobuf_contracts_2ev1_2frelease_5ftarget_2eproto
namespace contracts {
namespace v1 {

// ===================================================================

void ReleaseTarget::InitAsDefaultInstance() {
}
void ReleaseTarget::clear_actions() {
  actions_.Clear();
}
void ReleaseTarget::clear_active_releases() {
  active_releases_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ReleaseTarget::kNameFieldNumber;
const int ReleaseTarget::kActionsFieldNumber;
const int ReleaseTarget::kActiveReleasesFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ReleaseTarget::ReleaseTarget()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_contracts_2ev1_2frelease_5ftarget_2eproto::scc_info_ReleaseTarget.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:contracts.v1.ReleaseTarget)
}
ReleaseTarget::ReleaseTarget(const ReleaseTarget& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      actions_(from.actions_),
      active_releases_(from.active_releases_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  // @@protoc_insertion_point(copy_constructor:contracts.v1.ReleaseTarget)
}

void ReleaseTarget::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

ReleaseTarget::~ReleaseTarget() {
  // @@protoc_insertion_point(destructor:contracts.v1.ReleaseTarget)
  SharedDtor();
}

void ReleaseTarget::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void ReleaseTarget::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* ReleaseTarget::descriptor() {
  ::protobuf_contracts_2ev1_2frelease_5ftarget_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_contracts_2ev1_2frelease_5ftarget_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ReleaseTarget& ReleaseTarget::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_contracts_2ev1_2frelease_5ftarget_2eproto::scc_info_ReleaseTarget.base);
  return *internal_default_instance();
}


void ReleaseTarget::Clear() {
// @@protoc_insertion_point(message_clear_start:contracts.v1.ReleaseTarget)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  actions_.Clear();
  active_releases_.Clear();
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool ReleaseTarget::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:contracts.v1.ReleaseTarget)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "contracts.v1.ReleaseTarget.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .manifest.v1.EstafetteReleaseAction actions = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_actions()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .contracts.v1.Release active_releases = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_active_releases()));
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
  // @@protoc_insertion_point(parse_success:contracts.v1.ReleaseTarget)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:contracts.v1.ReleaseTarget)
  return false;
#undef DO_
}

void ReleaseTarget::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:contracts.v1.ReleaseTarget)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "contracts.v1.ReleaseTarget.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // repeated .manifest.v1.EstafetteReleaseAction actions = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->actions_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2,
      this->actions(static_cast<int>(i)),
      output);
  }

  // repeated .contracts.v1.Release active_releases = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->active_releases_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3,
      this->active_releases(static_cast<int>(i)),
      output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:contracts.v1.ReleaseTarget)
}

::google::protobuf::uint8* ReleaseTarget::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:contracts.v1.ReleaseTarget)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "contracts.v1.ReleaseTarget.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // repeated .manifest.v1.EstafetteReleaseAction actions = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->actions_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->actions(static_cast<int>(i)), deterministic, target);
  }

  // repeated .contracts.v1.Release active_releases = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->active_releases_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->active_releases(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:contracts.v1.ReleaseTarget)
  return target;
}

size_t ReleaseTarget::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:contracts.v1.ReleaseTarget)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .manifest.v1.EstafetteReleaseAction actions = 2;
  {
    unsigned int count = static_cast<unsigned int>(this->actions_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->actions(static_cast<int>(i)));
    }
  }

  // repeated .contracts.v1.Release active_releases = 3;
  {
    unsigned int count = static_cast<unsigned int>(this->active_releases_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->active_releases(static_cast<int>(i)));
    }
  }

  // string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ReleaseTarget::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:contracts.v1.ReleaseTarget)
  GOOGLE_DCHECK_NE(&from, this);
  const ReleaseTarget* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ReleaseTarget>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:contracts.v1.ReleaseTarget)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:contracts.v1.ReleaseTarget)
    MergeFrom(*source);
  }
}

void ReleaseTarget::MergeFrom(const ReleaseTarget& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:contracts.v1.ReleaseTarget)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  actions_.MergeFrom(from.actions_);
  active_releases_.MergeFrom(from.active_releases_);
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
}

void ReleaseTarget::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:contracts.v1.ReleaseTarget)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ReleaseTarget::CopyFrom(const ReleaseTarget& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:contracts.v1.ReleaseTarget)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ReleaseTarget::IsInitialized() const {
  return true;
}

void ReleaseTarget::Swap(ReleaseTarget* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ReleaseTarget::InternalSwap(ReleaseTarget* other) {
  using std::swap;
  CastToBase(&actions_)->InternalSwap(CastToBase(&other->actions_));
  CastToBase(&active_releases_)->InternalSwap(CastToBase(&other->active_releases_));
  name_.Swap(&other->name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata ReleaseTarget::GetMetadata() const {
  protobuf_contracts_2ev1_2frelease_5ftarget_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_contracts_2ev1_2frelease_5ftarget_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace contracts
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::contracts::v1::ReleaseTarget* Arena::CreateMaybeMessage< ::contracts::v1::ReleaseTarget >(Arena* arena) {
  return Arena::CreateInternal< ::contracts::v1::ReleaseTarget >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)