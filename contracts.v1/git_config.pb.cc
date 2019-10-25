// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: contracts.v1/git_config.proto

#include "contracts.v1/git_config.pb.h"

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
class GitConfigDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<GitConfig>
      _instance;
} _GitConfig_default_instance_;
}  // namespace v1
}  // namespace contracts
namespace protobuf_contracts_2ev1_2fgit_5fconfig_2eproto {
static void InitDefaultsGitConfig() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::contracts::v1::_GitConfig_default_instance_;
    new (ptr) ::contracts::v1::GitConfig();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::contracts::v1::GitConfig::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_GitConfig =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsGitConfig}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_GitConfig.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::GitConfig, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::GitConfig, repo_source_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::GitConfig, repo_owner_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::GitConfig, repo_name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::GitConfig, repo_branch_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::GitConfig, repo_revision_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::contracts::v1::GitConfig)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::contracts::v1::_GitConfig_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "contracts.v1/git_config.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\035contracts.v1/git_config.proto\022\014contrac"
      "ts.v1\"s\n\tGitConfig\022\023\n\013repo_source\030\001 \001(\t\022"
      "\022\n\nrepo_owner\030\002 \001(\t\022\021\n\trepo_name\030\003 \001(\t\022\023"
      "\n\013repo_branch\030\004 \001(\t\022\025\n\rrepo_revision\030\005 \001"
      "(\tBx\n\034io.estafette.ci.contracts.v1Z<gith"
      "ub.com/estafette/estafette-ci-protos-gol"
      "ang/contracts_v1\252\002\031Estafette.CI.Contract"
      "s.V1b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 292);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "contracts.v1/git_config.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_contracts_2ev1_2fgit_5fconfig_2eproto
namespace contracts {
namespace v1 {

// ===================================================================

void GitConfig::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GitConfig::kRepoSourceFieldNumber;
const int GitConfig::kRepoOwnerFieldNumber;
const int GitConfig::kRepoNameFieldNumber;
const int GitConfig::kRepoBranchFieldNumber;
const int GitConfig::kRepoRevisionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GitConfig::GitConfig()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_contracts_2ev1_2fgit_5fconfig_2eproto::scc_info_GitConfig.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:contracts.v1.GitConfig)
}
GitConfig::GitConfig(const GitConfig& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  repo_source_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.repo_source().size() > 0) {
    repo_source_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.repo_source_);
  }
  repo_owner_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.repo_owner().size() > 0) {
    repo_owner_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.repo_owner_);
  }
  repo_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.repo_name().size() > 0) {
    repo_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.repo_name_);
  }
  repo_branch_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.repo_branch().size() > 0) {
    repo_branch_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.repo_branch_);
  }
  repo_revision_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.repo_revision().size() > 0) {
    repo_revision_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.repo_revision_);
  }
  // @@protoc_insertion_point(copy_constructor:contracts.v1.GitConfig)
}

void GitConfig::SharedCtor() {
  repo_source_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  repo_owner_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  repo_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  repo_branch_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  repo_revision_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

GitConfig::~GitConfig() {
  // @@protoc_insertion_point(destructor:contracts.v1.GitConfig)
  SharedDtor();
}

void GitConfig::SharedDtor() {
  repo_source_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  repo_owner_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  repo_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  repo_branch_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  repo_revision_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void GitConfig::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* GitConfig::descriptor() {
  ::protobuf_contracts_2ev1_2fgit_5fconfig_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_contracts_2ev1_2fgit_5fconfig_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const GitConfig& GitConfig::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_contracts_2ev1_2fgit_5fconfig_2eproto::scc_info_GitConfig.base);
  return *internal_default_instance();
}


void GitConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:contracts.v1.GitConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  repo_source_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  repo_owner_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  repo_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  repo_branch_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  repo_revision_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool GitConfig::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:contracts.v1.GitConfig)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string repo_source = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_repo_source()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->repo_source().data(), static_cast<int>(this->repo_source().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "contracts.v1.GitConfig.repo_source"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string repo_owner = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_repo_owner()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->repo_owner().data(), static_cast<int>(this->repo_owner().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "contracts.v1.GitConfig.repo_owner"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string repo_name = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_repo_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->repo_name().data(), static_cast<int>(this->repo_name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "contracts.v1.GitConfig.repo_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string repo_branch = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_repo_branch()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->repo_branch().data(), static_cast<int>(this->repo_branch().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "contracts.v1.GitConfig.repo_branch"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string repo_revision = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_repo_revision()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->repo_revision().data(), static_cast<int>(this->repo_revision().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "contracts.v1.GitConfig.repo_revision"));
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
  // @@protoc_insertion_point(parse_success:contracts.v1.GitConfig)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:contracts.v1.GitConfig)
  return false;
#undef DO_
}

void GitConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:contracts.v1.GitConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string repo_source = 1;
  if (this->repo_source().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->repo_source().data(), static_cast<int>(this->repo_source().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "contracts.v1.GitConfig.repo_source");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->repo_source(), output);
  }

  // string repo_owner = 2;
  if (this->repo_owner().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->repo_owner().data(), static_cast<int>(this->repo_owner().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "contracts.v1.GitConfig.repo_owner");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->repo_owner(), output);
  }

  // string repo_name = 3;
  if (this->repo_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->repo_name().data(), static_cast<int>(this->repo_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "contracts.v1.GitConfig.repo_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->repo_name(), output);
  }

  // string repo_branch = 4;
  if (this->repo_branch().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->repo_branch().data(), static_cast<int>(this->repo_branch().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "contracts.v1.GitConfig.repo_branch");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->repo_branch(), output);
  }

  // string repo_revision = 5;
  if (this->repo_revision().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->repo_revision().data(), static_cast<int>(this->repo_revision().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "contracts.v1.GitConfig.repo_revision");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->repo_revision(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:contracts.v1.GitConfig)
}

::google::protobuf::uint8* GitConfig::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:contracts.v1.GitConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string repo_source = 1;
  if (this->repo_source().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->repo_source().data(), static_cast<int>(this->repo_source().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "contracts.v1.GitConfig.repo_source");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->repo_source(), target);
  }

  // string repo_owner = 2;
  if (this->repo_owner().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->repo_owner().data(), static_cast<int>(this->repo_owner().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "contracts.v1.GitConfig.repo_owner");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->repo_owner(), target);
  }

  // string repo_name = 3;
  if (this->repo_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->repo_name().data(), static_cast<int>(this->repo_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "contracts.v1.GitConfig.repo_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->repo_name(), target);
  }

  // string repo_branch = 4;
  if (this->repo_branch().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->repo_branch().data(), static_cast<int>(this->repo_branch().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "contracts.v1.GitConfig.repo_branch");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->repo_branch(), target);
  }

  // string repo_revision = 5;
  if (this->repo_revision().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->repo_revision().data(), static_cast<int>(this->repo_revision().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "contracts.v1.GitConfig.repo_revision");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->repo_revision(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:contracts.v1.GitConfig)
  return target;
}

size_t GitConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:contracts.v1.GitConfig)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string repo_source = 1;
  if (this->repo_source().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->repo_source());
  }

  // string repo_owner = 2;
  if (this->repo_owner().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->repo_owner());
  }

  // string repo_name = 3;
  if (this->repo_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->repo_name());
  }

  // string repo_branch = 4;
  if (this->repo_branch().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->repo_branch());
  }

  // string repo_revision = 5;
  if (this->repo_revision().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->repo_revision());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void GitConfig::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:contracts.v1.GitConfig)
  GOOGLE_DCHECK_NE(&from, this);
  const GitConfig* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const GitConfig>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:contracts.v1.GitConfig)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:contracts.v1.GitConfig)
    MergeFrom(*source);
  }
}

void GitConfig::MergeFrom(const GitConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:contracts.v1.GitConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.repo_source().size() > 0) {

    repo_source_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.repo_source_);
  }
  if (from.repo_owner().size() > 0) {

    repo_owner_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.repo_owner_);
  }
  if (from.repo_name().size() > 0) {

    repo_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.repo_name_);
  }
  if (from.repo_branch().size() > 0) {

    repo_branch_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.repo_branch_);
  }
  if (from.repo_revision().size() > 0) {

    repo_revision_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.repo_revision_);
  }
}

void GitConfig::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:contracts.v1.GitConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GitConfig::CopyFrom(const GitConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:contracts.v1.GitConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GitConfig::IsInitialized() const {
  return true;
}

void GitConfig::Swap(GitConfig* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GitConfig::InternalSwap(GitConfig* other) {
  using std::swap;
  repo_source_.Swap(&other->repo_source_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  repo_owner_.Swap(&other->repo_owner_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  repo_name_.Swap(&other->repo_name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  repo_branch_.Swap(&other->repo_branch_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  repo_revision_.Swap(&other->repo_revision_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata GitConfig::GetMetadata() const {
  protobuf_contracts_2ev1_2fgit_5fconfig_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_contracts_2ev1_2fgit_5fconfig_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace contracts
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::contracts::v1::GitConfig* Arena::CreateMaybeMessage< ::contracts::v1::GitConfig >(Arena* arena) {
  return Arena::CreateInternal< ::contracts::v1::GitConfig >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
