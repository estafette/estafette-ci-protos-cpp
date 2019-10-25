// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: contracts.v1/build_log_step_docker_image.proto

#include "contracts.v1/build_log_step_docker_image.pb.h"

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

namespace protobuf_google_2fprotobuf_2fduration_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fprotobuf_2fduration_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Duration;
}  // namespace protobuf_google_2fprotobuf_2fduration_2eproto
namespace contracts {
namespace v1 {
class BuildLogStepDockerImageDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<BuildLogStepDockerImage>
      _instance;
} _BuildLogStepDockerImage_default_instance_;
}  // namespace v1
}  // namespace contracts
namespace protobuf_contracts_2ev1_2fbuild_5flog_5fstep_5fdocker_5fimage_2eproto {
static void InitDefaultsBuildLogStepDockerImage() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::contracts::v1::_BuildLogStepDockerImage_default_instance_;
    new (ptr) ::contracts::v1::BuildLogStepDockerImage();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::contracts::v1::BuildLogStepDockerImage::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_BuildLogStepDockerImage =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsBuildLogStepDockerImage}, {
      &protobuf_google_2fprotobuf_2fduration_2eproto::scc_info_Duration.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_BuildLogStepDockerImage.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::BuildLogStepDockerImage, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::BuildLogStepDockerImage, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::BuildLogStepDockerImage, tag_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::BuildLogStepDockerImage, is_pulled_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::BuildLogStepDockerImage, image_size_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::BuildLogStepDockerImage, pull_duration_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::BuildLogStepDockerImage, error_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::BuildLogStepDockerImage, is_trusted_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::contracts::v1::BuildLogStepDockerImage)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::contracts::v1::_BuildLogStepDockerImage_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "contracts.v1/build_log_step_docker_image.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n.contracts.v1/build_log_step_docker_ima"
      "ge.proto\022\014contracts.v1\032\036google/protobuf/"
      "duration.proto\"\260\001\n\027BuildLogStepDockerIma"
      "ge\022\014\n\004name\030\001 \001(\t\022\013\n\003tag\030\002 \001(\t\022\021\n\tis_pull"
      "ed\030\003 \001(\010\022\022\n\nimage_size\030\004 \001(\003\0220\n\rpull_dur"
      "ation\030\005 \001(\0132\031.google.protobuf.Duration\022\r"
      "\n\005error\030\006 \001(\t\022\022\n\nis_trusted\030\007 \001(\010B\177\n#io."
      "estafette.ci.protos.contracts.v1Z<github"
      ".com/estafette/estafette-ci-protos-golan"
      "g/contracts_v1\252\002\031Estafette.CI.Contracts."
      "V1b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 410);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "contracts.v1/build_log_step_docker_image.proto", &protobuf_RegisterTypes);
  ::protobuf_google_2fprotobuf_2fduration_2eproto::AddDescriptors();
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
}  // namespace protobuf_contracts_2ev1_2fbuild_5flog_5fstep_5fdocker_5fimage_2eproto
namespace contracts {
namespace v1 {

// ===================================================================

void BuildLogStepDockerImage::InitAsDefaultInstance() {
  ::contracts::v1::_BuildLogStepDockerImage_default_instance_._instance.get_mutable()->pull_duration_ = const_cast< ::google::protobuf::Duration*>(
      ::google::protobuf::Duration::internal_default_instance());
}
void BuildLogStepDockerImage::clear_pull_duration() {
  if (GetArenaNoVirtual() == NULL && pull_duration_ != NULL) {
    delete pull_duration_;
  }
  pull_duration_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int BuildLogStepDockerImage::kNameFieldNumber;
const int BuildLogStepDockerImage::kTagFieldNumber;
const int BuildLogStepDockerImage::kIsPulledFieldNumber;
const int BuildLogStepDockerImage::kImageSizeFieldNumber;
const int BuildLogStepDockerImage::kPullDurationFieldNumber;
const int BuildLogStepDockerImage::kErrorFieldNumber;
const int BuildLogStepDockerImage::kIsTrustedFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

BuildLogStepDockerImage::BuildLogStepDockerImage()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_contracts_2ev1_2fbuild_5flog_5fstep_5fdocker_5fimage_2eproto::scc_info_BuildLogStepDockerImage.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:contracts.v1.BuildLogStepDockerImage)
}
BuildLogStepDockerImage::BuildLogStepDockerImage(const BuildLogStepDockerImage& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  tag_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.tag().size() > 0) {
    tag_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.tag_);
  }
  error_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.error().size() > 0) {
    error_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.error_);
  }
  if (from.has_pull_duration()) {
    pull_duration_ = new ::google::protobuf::Duration(*from.pull_duration_);
  } else {
    pull_duration_ = NULL;
  }
  ::memcpy(&image_size_, &from.image_size_,
    static_cast<size_t>(reinterpret_cast<char*>(&is_trusted_) -
    reinterpret_cast<char*>(&image_size_)) + sizeof(is_trusted_));
  // @@protoc_insertion_point(copy_constructor:contracts.v1.BuildLogStepDockerImage)
}

void BuildLogStepDockerImage::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  tag_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  error_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&pull_duration_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&is_trusted_) -
      reinterpret_cast<char*>(&pull_duration_)) + sizeof(is_trusted_));
}

BuildLogStepDockerImage::~BuildLogStepDockerImage() {
  // @@protoc_insertion_point(destructor:contracts.v1.BuildLogStepDockerImage)
  SharedDtor();
}

void BuildLogStepDockerImage::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  tag_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  error_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete pull_duration_;
}

void BuildLogStepDockerImage::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* BuildLogStepDockerImage::descriptor() {
  ::protobuf_contracts_2ev1_2fbuild_5flog_5fstep_5fdocker_5fimage_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_contracts_2ev1_2fbuild_5flog_5fstep_5fdocker_5fimage_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const BuildLogStepDockerImage& BuildLogStepDockerImage::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_contracts_2ev1_2fbuild_5flog_5fstep_5fdocker_5fimage_2eproto::scc_info_BuildLogStepDockerImage.base);
  return *internal_default_instance();
}


void BuildLogStepDockerImage::Clear() {
// @@protoc_insertion_point(message_clear_start:contracts.v1.BuildLogStepDockerImage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  tag_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  error_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && pull_duration_ != NULL) {
    delete pull_duration_;
  }
  pull_duration_ = NULL;
  ::memset(&image_size_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&is_trusted_) -
      reinterpret_cast<char*>(&image_size_)) + sizeof(is_trusted_));
  _internal_metadata_.Clear();
}

bool BuildLogStepDockerImage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:contracts.v1.BuildLogStepDockerImage)
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
            "contracts.v1.BuildLogStepDockerImage.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string tag = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_tag()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->tag().data(), static_cast<int>(this->tag().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "contracts.v1.BuildLogStepDockerImage.tag"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_pulled = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_pulled_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 image_size = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &image_size_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.protobuf.Duration pull_duration = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_pull_duration()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string error = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_error()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->error().data(), static_cast<int>(this->error().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "contracts.v1.BuildLogStepDockerImage.error"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_trusted = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_trusted_)));
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
  // @@protoc_insertion_point(parse_success:contracts.v1.BuildLogStepDockerImage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:contracts.v1.BuildLogStepDockerImage)
  return false;
#undef DO_
}

void BuildLogStepDockerImage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:contracts.v1.BuildLogStepDockerImage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "contracts.v1.BuildLogStepDockerImage.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // string tag = 2;
  if (this->tag().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->tag().data(), static_cast<int>(this->tag().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "contracts.v1.BuildLogStepDockerImage.tag");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->tag(), output);
  }

  // bool is_pulled = 3;
  if (this->is_pulled() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->is_pulled(), output);
  }

  // int64 image_size = 4;
  if (this->image_size() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(4, this->image_size(), output);
  }

  // .google.protobuf.Duration pull_duration = 5;
  if (this->has_pull_duration()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->_internal_pull_duration(), output);
  }

  // string error = 6;
  if (this->error().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->error().data(), static_cast<int>(this->error().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "contracts.v1.BuildLogStepDockerImage.error");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->error(), output);
  }

  // bool is_trusted = 7;
  if (this->is_trusted() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(7, this->is_trusted(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:contracts.v1.BuildLogStepDockerImage)
}

::google::protobuf::uint8* BuildLogStepDockerImage::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:contracts.v1.BuildLogStepDockerImage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "contracts.v1.BuildLogStepDockerImage.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // string tag = 2;
  if (this->tag().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->tag().data(), static_cast<int>(this->tag().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "contracts.v1.BuildLogStepDockerImage.tag");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->tag(), target);
  }

  // bool is_pulled = 3;
  if (this->is_pulled() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->is_pulled(), target);
  }

  // int64 image_size = 4;
  if (this->image_size() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(4, this->image_size(), target);
  }

  // .google.protobuf.Duration pull_duration = 5;
  if (this->has_pull_duration()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        5, this->_internal_pull_duration(), deterministic, target);
  }

  // string error = 6;
  if (this->error().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->error().data(), static_cast<int>(this->error().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "contracts.v1.BuildLogStepDockerImage.error");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->error(), target);
  }

  // bool is_trusted = 7;
  if (this->is_trusted() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(7, this->is_trusted(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:contracts.v1.BuildLogStepDockerImage)
  return target;
}

size_t BuildLogStepDockerImage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:contracts.v1.BuildLogStepDockerImage)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // string tag = 2;
  if (this->tag().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->tag());
  }

  // string error = 6;
  if (this->error().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->error());
  }

  // .google.protobuf.Duration pull_duration = 5;
  if (this->has_pull_duration()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *pull_duration_);
  }

  // int64 image_size = 4;
  if (this->image_size() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->image_size());
  }

  // bool is_pulled = 3;
  if (this->is_pulled() != 0) {
    total_size += 1 + 1;
  }

  // bool is_trusted = 7;
  if (this->is_trusted() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void BuildLogStepDockerImage::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:contracts.v1.BuildLogStepDockerImage)
  GOOGLE_DCHECK_NE(&from, this);
  const BuildLogStepDockerImage* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const BuildLogStepDockerImage>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:contracts.v1.BuildLogStepDockerImage)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:contracts.v1.BuildLogStepDockerImage)
    MergeFrom(*source);
  }
}

void BuildLogStepDockerImage::MergeFrom(const BuildLogStepDockerImage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:contracts.v1.BuildLogStepDockerImage)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.tag().size() > 0) {

    tag_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.tag_);
  }
  if (from.error().size() > 0) {

    error_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.error_);
  }
  if (from.has_pull_duration()) {
    mutable_pull_duration()->::google::protobuf::Duration::MergeFrom(from.pull_duration());
  }
  if (from.image_size() != 0) {
    set_image_size(from.image_size());
  }
  if (from.is_pulled() != 0) {
    set_is_pulled(from.is_pulled());
  }
  if (from.is_trusted() != 0) {
    set_is_trusted(from.is_trusted());
  }
}

void BuildLogStepDockerImage::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:contracts.v1.BuildLogStepDockerImage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BuildLogStepDockerImage::CopyFrom(const BuildLogStepDockerImage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:contracts.v1.BuildLogStepDockerImage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BuildLogStepDockerImage::IsInitialized() const {
  return true;
}

void BuildLogStepDockerImage::Swap(BuildLogStepDockerImage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void BuildLogStepDockerImage::InternalSwap(BuildLogStepDockerImage* other) {
  using std::swap;
  name_.Swap(&other->name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  tag_.Swap(&other->tag_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  error_.Swap(&other->error_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(pull_duration_, other->pull_duration_);
  swap(image_size_, other->image_size_);
  swap(is_pulled_, other->is_pulled_);
  swap(is_trusted_, other->is_trusted_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata BuildLogStepDockerImage::GetMetadata() const {
  protobuf_contracts_2ev1_2fbuild_5flog_5fstep_5fdocker_5fimage_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_contracts_2ev1_2fbuild_5flog_5fstep_5fdocker_5fimage_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace contracts
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::contracts::v1::BuildLogStepDockerImage* Arena::CreateMaybeMessage< ::contracts::v1::BuildLogStepDockerImage >(Arena* arena) {
  return Arena::CreateInternal< ::contracts::v1::BuildLogStepDockerImage >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
