// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: estafette/ci/manifest/v1/estafette_release_action.proto

#include "estafette/ci/manifest/v1/estafette_release_action.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace estafette {
namespace ci {
namespace manifest {
namespace v1 {
class EstafetteReleaseActionDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<EstafetteReleaseAction> _instance;
} _EstafetteReleaseAction_default_instance_;
}  // namespace v1
}  // namespace manifest
}  // namespace ci
}  // namespace estafette
static void InitDefaultsscc_info_EstafetteReleaseAction_estafette_2fci_2fmanifest_2fv1_2festafette_5frelease_5faction_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::estafette::ci::manifest::v1::_EstafetteReleaseAction_default_instance_;
    new (ptr) ::estafette::ci::manifest::v1::EstafetteReleaseAction();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::estafette::ci::manifest::v1::EstafetteReleaseAction::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_EstafetteReleaseAction_estafette_2fci_2fmanifest_2fv1_2festafette_5frelease_5faction_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsscc_info_EstafetteReleaseAction_estafette_2fci_2fmanifest_2fv1_2festafette_5frelease_5faction_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_estafette_2fci_2fmanifest_2fv1_2festafette_5frelease_5faction_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_estafette_2fci_2fmanifest_2fv1_2festafette_5frelease_5faction_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_estafette_2fci_2fmanifest_2fv1_2festafette_5frelease_5faction_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_estafette_2fci_2fmanifest_2fv1_2festafette_5frelease_5faction_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::estafette::ci::manifest::v1::EstafetteReleaseAction, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::estafette::ci::manifest::v1::EstafetteReleaseAction, name_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::estafette::ci::manifest::v1::EstafetteReleaseAction)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::estafette::ci::manifest::v1::_EstafetteReleaseAction_default_instance_),
};

const char descriptor_table_protodef_estafette_2fci_2fmanifest_2fv1_2festafette_5frelease_5faction_2eproto[] =
  "\n7estafette/ci/manifest/v1/estafette_rel"
  "ease_action.proto\022\030estafette.ci.manifest"
  ".v1\"&\n\026EstafetteReleaseAction\022\014\n\004name\030\001 "
  "\001(\tBx\n\034com.estafette.ci.manifest.v1P\001Z;g"
  "ithub.com/estafette/estafette-ci-protos-"
  "golang/manifest_v1\252\002\030Estafette.Ci.Manife"
  "st.V1b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5frelease_5faction_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5frelease_5faction_2eproto_sccs[1] = {
  &scc_info_EstafetteReleaseAction_estafette_2fci_2fmanifest_2fv1_2festafette_5frelease_5faction_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5frelease_5faction_2eproto_once;
static bool descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5frelease_5faction_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5frelease_5faction_2eproto = {
  &descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5frelease_5faction_2eproto_initialized, descriptor_table_protodef_estafette_2fci_2fmanifest_2fv1_2festafette_5frelease_5faction_2eproto, "estafette/ci/manifest/v1/estafette_release_action.proto", 253,
  &descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5frelease_5faction_2eproto_once, descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5frelease_5faction_2eproto_sccs, descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5frelease_5faction_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_estafette_2fci_2fmanifest_2fv1_2festafette_5frelease_5faction_2eproto::offsets,
  file_level_metadata_estafette_2fci_2fmanifest_2fv1_2festafette_5frelease_5faction_2eproto, 1, file_level_enum_descriptors_estafette_2fci_2fmanifest_2fv1_2festafette_5frelease_5faction_2eproto, file_level_service_descriptors_estafette_2fci_2fmanifest_2fv1_2festafette_5frelease_5faction_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_estafette_2fci_2fmanifest_2fv1_2festafette_5frelease_5faction_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5frelease_5faction_2eproto), true);
namespace estafette {
namespace ci {
namespace manifest {
namespace v1 {

// ===================================================================

void EstafetteReleaseAction::InitAsDefaultInstance() {
}
class EstafetteReleaseAction::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int EstafetteReleaseAction::kNameFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

EstafetteReleaseAction::EstafetteReleaseAction()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:estafette.ci.manifest.v1.EstafetteReleaseAction)
}
EstafetteReleaseAction::EstafetteReleaseAction(const EstafetteReleaseAction& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  // @@protoc_insertion_point(copy_constructor:estafette.ci.manifest.v1.EstafetteReleaseAction)
}

void EstafetteReleaseAction::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_EstafetteReleaseAction_estafette_2fci_2fmanifest_2fv1_2festafette_5frelease_5faction_2eproto.base);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

EstafetteReleaseAction::~EstafetteReleaseAction() {
  // @@protoc_insertion_point(destructor:estafette.ci.manifest.v1.EstafetteReleaseAction)
  SharedDtor();
}

void EstafetteReleaseAction::SharedDtor() {
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void EstafetteReleaseAction::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const EstafetteReleaseAction& EstafetteReleaseAction::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_EstafetteReleaseAction_estafette_2fci_2fmanifest_2fv1_2festafette_5frelease_5faction_2eproto.base);
  return *internal_default_instance();
}


void EstafetteReleaseAction::Clear() {
// @@protoc_insertion_point(message_clear_start:estafette.ci.manifest.v1.EstafetteReleaseAction)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* EstafetteReleaseAction::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(mutable_name(), ptr, ctx, "estafette.ci.manifest.v1.EstafetteReleaseAction.name");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool EstafetteReleaseAction::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:estafette.ci.manifest.v1.EstafetteReleaseAction)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string name = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (10 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), static_cast<int>(this->name().length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE,
            "estafette.ci.manifest.v1.EstafetteReleaseAction.name"));
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
        DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:estafette.ci.manifest.v1.EstafetteReleaseAction)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:estafette.ci.manifest.v1.EstafetteReleaseAction)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void EstafetteReleaseAction::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:estafette.ci.manifest.v1.EstafetteReleaseAction)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "estafette.ci.manifest.v1.EstafetteReleaseAction.name");
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:estafette.ci.manifest.v1.EstafetteReleaseAction)
}

::PROTOBUF_NAMESPACE_ID::uint8* EstafetteReleaseAction::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:estafette.ci.manifest.v1.EstafetteReleaseAction)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "estafette.ci.manifest.v1.EstafetteReleaseAction.name");
    target =
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:estafette.ci.manifest.v1.EstafetteReleaseAction)
  return target;
}

size_t EstafetteReleaseAction::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:estafette.ci.manifest.v1.EstafetteReleaseAction)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->name());
  }

  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void EstafetteReleaseAction::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:estafette.ci.manifest.v1.EstafetteReleaseAction)
  GOOGLE_DCHECK_NE(&from, this);
  const EstafetteReleaseAction* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<EstafetteReleaseAction>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:estafette.ci.manifest.v1.EstafetteReleaseAction)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:estafette.ci.manifest.v1.EstafetteReleaseAction)
    MergeFrom(*source);
  }
}

void EstafetteReleaseAction::MergeFrom(const EstafetteReleaseAction& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:estafette.ci.manifest.v1.EstafetteReleaseAction)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
}

void EstafetteReleaseAction::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:estafette.ci.manifest.v1.EstafetteReleaseAction)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EstafetteReleaseAction::CopyFrom(const EstafetteReleaseAction& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:estafette.ci.manifest.v1.EstafetteReleaseAction)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EstafetteReleaseAction::IsInitialized() const {
  return true;
}

void EstafetteReleaseAction::Swap(EstafetteReleaseAction* other) {
  if (other == this) return;
  InternalSwap(other);
}
void EstafetteReleaseAction::InternalSwap(EstafetteReleaseAction* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  name_.Swap(&other->name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::PROTOBUF_NAMESPACE_ID::Metadata EstafetteReleaseAction::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace manifest
}  // namespace ci
}  // namespace estafette
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::estafette::ci::manifest::v1::EstafetteReleaseAction* Arena::CreateMaybeMessage< ::estafette::ci::manifest::v1::EstafetteReleaseAction >(Arena* arena) {
  return Arena::CreateInternal< ::estafette::ci::manifest::v1::EstafetteReleaseAction >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
