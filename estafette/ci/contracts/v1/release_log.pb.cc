// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: estafette/ci/contracts/v1/release_log.proto

#include "estafette/ci/contracts/v1/release_log.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_estafette_2fci_2fcontracts_2fv1_2fbuild_5flog_5fstep_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<3> scc_info_BuildLogStep_estafette_2fci_2fcontracts_2fv1_2fbuild_5flog_5fstep_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2ftimestamp_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Timestamp_google_2fprotobuf_2ftimestamp_2eproto;
namespace estafette {
namespace ci {
namespace contracts {
namespace v1 {
class ReleaseLogDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ReleaseLog> _instance;
} _ReleaseLog_default_instance_;
}  // namespace v1
}  // namespace contracts
}  // namespace ci
}  // namespace estafette
static void InitDefaultsscc_info_ReleaseLog_estafette_2fci_2fcontracts_2fv1_2frelease_5flog_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::estafette::ci::contracts::v1::_ReleaseLog_default_instance_;
    new (ptr) ::estafette::ci::contracts::v1::ReleaseLog();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::estafette::ci::contracts::v1::ReleaseLog::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_ReleaseLog_estafette_2fci_2fcontracts_2fv1_2frelease_5flog_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsscc_info_ReleaseLog_estafette_2fci_2fcontracts_2fv1_2frelease_5flog_2eproto}, {
      &scc_info_BuildLogStep_estafette_2fci_2fcontracts_2fv1_2fbuild_5flog_5fstep_2eproto.base,
      &scc_info_Timestamp_google_2fprotobuf_2ftimestamp_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_estafette_2fci_2fcontracts_2fv1_2frelease_5flog_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_estafette_2fci_2fcontracts_2fv1_2frelease_5flog_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_estafette_2fci_2fcontracts_2fv1_2frelease_5flog_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_estafette_2fci_2fcontracts_2fv1_2frelease_5flog_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::estafette::ci::contracts::v1::ReleaseLog, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::estafette::ci::contracts::v1::ReleaseLog, id_),
  PROTOBUF_FIELD_OFFSET(::estafette::ci::contracts::v1::ReleaseLog, repo_source_),
  PROTOBUF_FIELD_OFFSET(::estafette::ci::contracts::v1::ReleaseLog, repo_owner_),
  PROTOBUF_FIELD_OFFSET(::estafette::ci::contracts::v1::ReleaseLog, repo_name_),
  PROTOBUF_FIELD_OFFSET(::estafette::ci::contracts::v1::ReleaseLog, release_id_),
  PROTOBUF_FIELD_OFFSET(::estafette::ci::contracts::v1::ReleaseLog, steps_),
  PROTOBUF_FIELD_OFFSET(::estafette::ci::contracts::v1::ReleaseLog, inserted_at_time_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::estafette::ci::contracts::v1::ReleaseLog)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::estafette::ci::contracts::v1::_ReleaseLog_default_instance_),
};

const char descriptor_table_protodef_estafette_2fci_2fcontracts_2fv1_2frelease_5flog_2eproto[] =
  "\n+estafette/ci/contracts/v1/release_log."
  "proto\022\031estafette.ci.contracts.v1\032.estafe"
  "tte/ci/contracts/v1/build_log_step.proto"
  "\032\037google/protobuf/timestamp.proto\"\326\001\n\nRe"
  "leaseLog\022\n\n\002id\030\001 \001(\t\022\023\n\013repo_source\030\002 \001("
  "\t\022\022\n\nrepo_owner\030\003 \001(\t\022\021\n\trepo_name\030\004 \001(\t"
  "\022\022\n\nrelease_id\030\005 \001(\t\0226\n\005steps\030\006 \003(\0132\'.es"
  "tafette.ci.contracts.v1.BuildLogStep\0224\n\020"
  "inserted_at_time\030\007 \001(\0132\032.google.protobuf"
  ".TimestampB{\n\035com.estafette.ci.contracts"
  ".v1P\001Z<github.com/estafette/estafette-ci"
  "-protos-golang/contracts/v1\252\002\031Estafette."
  "Ci.Contracts.V1b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_estafette_2fci_2fcontracts_2fv1_2frelease_5flog_2eproto_deps[2] = {
  &::descriptor_table_estafette_2fci_2fcontracts_2fv1_2fbuild_5flog_5fstep_2eproto,
  &::descriptor_table_google_2fprotobuf_2ftimestamp_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_estafette_2fci_2fcontracts_2fv1_2frelease_5flog_2eproto_sccs[1] = {
  &scc_info_ReleaseLog_estafette_2fci_2fcontracts_2fv1_2frelease_5flog_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_estafette_2fci_2fcontracts_2fv1_2frelease_5flog_2eproto_once;
static bool descriptor_table_estafette_2fci_2fcontracts_2fv1_2frelease_5flog_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_estafette_2fci_2fcontracts_2fv1_2frelease_5flog_2eproto = {
  &descriptor_table_estafette_2fci_2fcontracts_2fv1_2frelease_5flog_2eproto_initialized, descriptor_table_protodef_estafette_2fci_2fcontracts_2fv1_2frelease_5flog_2eproto, "estafette/ci/contracts/v1/release_log.proto", 503,
  &descriptor_table_estafette_2fci_2fcontracts_2fv1_2frelease_5flog_2eproto_once, descriptor_table_estafette_2fci_2fcontracts_2fv1_2frelease_5flog_2eproto_sccs, descriptor_table_estafette_2fci_2fcontracts_2fv1_2frelease_5flog_2eproto_deps, 1, 2,
  schemas, file_default_instances, TableStruct_estafette_2fci_2fcontracts_2fv1_2frelease_5flog_2eproto::offsets,
  file_level_metadata_estafette_2fci_2fcontracts_2fv1_2frelease_5flog_2eproto, 1, file_level_enum_descriptors_estafette_2fci_2fcontracts_2fv1_2frelease_5flog_2eproto, file_level_service_descriptors_estafette_2fci_2fcontracts_2fv1_2frelease_5flog_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_estafette_2fci_2fcontracts_2fv1_2frelease_5flog_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_estafette_2fci_2fcontracts_2fv1_2frelease_5flog_2eproto), true);
namespace estafette {
namespace ci {
namespace contracts {
namespace v1 {

// ===================================================================

void ReleaseLog::InitAsDefaultInstance() {
  ::estafette::ci::contracts::v1::_ReleaseLog_default_instance_._instance.get_mutable()->inserted_at_time_ = const_cast< PROTOBUF_NAMESPACE_ID::Timestamp*>(
      PROTOBUF_NAMESPACE_ID::Timestamp::internal_default_instance());
}
class ReleaseLog::HasBitSetters {
 public:
  static const PROTOBUF_NAMESPACE_ID::Timestamp& inserted_at_time(const ReleaseLog* msg);
};

const PROTOBUF_NAMESPACE_ID::Timestamp&
ReleaseLog::HasBitSetters::inserted_at_time(const ReleaseLog* msg) {
  return *msg->inserted_at_time_;
}
void ReleaseLog::clear_steps() {
  steps_.Clear();
}
void ReleaseLog::clear_inserted_at_time() {
  if (GetArenaNoVirtual() == nullptr && inserted_at_time_ != nullptr) {
    delete inserted_at_time_;
  }
  inserted_at_time_ = nullptr;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ReleaseLog::kIdFieldNumber;
const int ReleaseLog::kRepoSourceFieldNumber;
const int ReleaseLog::kRepoOwnerFieldNumber;
const int ReleaseLog::kRepoNameFieldNumber;
const int ReleaseLog::kReleaseIdFieldNumber;
const int ReleaseLog::kStepsFieldNumber;
const int ReleaseLog::kInsertedAtTimeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ReleaseLog::ReleaseLog()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:estafette.ci.contracts.v1.ReleaseLog)
}
ReleaseLog::ReleaseLog(const ReleaseLog& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      steps_(from.steps_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from.id().size() > 0) {
    id_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.id_);
  }
  repo_source_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from.repo_source().size() > 0) {
    repo_source_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.repo_source_);
  }
  repo_owner_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from.repo_owner().size() > 0) {
    repo_owner_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.repo_owner_);
  }
  repo_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from.repo_name().size() > 0) {
    repo_name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.repo_name_);
  }
  release_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from.release_id().size() > 0) {
    release_id_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.release_id_);
  }
  if (from.has_inserted_at_time()) {
    inserted_at_time_ = new PROTOBUF_NAMESPACE_ID::Timestamp(*from.inserted_at_time_);
  } else {
    inserted_at_time_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:estafette.ci.contracts.v1.ReleaseLog)
}

void ReleaseLog::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ReleaseLog_estafette_2fci_2fcontracts_2fv1_2frelease_5flog_2eproto.base);
  id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  repo_source_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  repo_owner_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  repo_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  release_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  inserted_at_time_ = nullptr;
}

ReleaseLog::~ReleaseLog() {
  // @@protoc_insertion_point(destructor:estafette.ci.contracts.v1.ReleaseLog)
  SharedDtor();
}

void ReleaseLog::SharedDtor() {
  id_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  repo_source_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  repo_owner_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  repo_name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  release_id_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete inserted_at_time_;
}

void ReleaseLog::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ReleaseLog& ReleaseLog::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ReleaseLog_estafette_2fci_2fcontracts_2fv1_2frelease_5flog_2eproto.base);
  return *internal_default_instance();
}


void ReleaseLog::Clear() {
// @@protoc_insertion_point(message_clear_start:estafette.ci.contracts.v1.ReleaseLog)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  steps_.Clear();
  id_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  repo_source_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  repo_owner_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  repo_name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  release_id_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == nullptr && inserted_at_time_ != nullptr) {
    delete inserted_at_time_;
  }
  inserted_at_time_ = nullptr;
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* ReleaseLog::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(mutable_id(), ptr, ctx, "estafette.ci.contracts.v1.ReleaseLog.id");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string repo_source = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(mutable_repo_source(), ptr, ctx, "estafette.ci.contracts.v1.ReleaseLog.repo_source");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string repo_owner = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(mutable_repo_owner(), ptr, ctx, "estafette.ci.contracts.v1.ReleaseLog.repo_owner");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string repo_name = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(mutable_repo_name(), ptr, ctx, "estafette.ci.contracts.v1.ReleaseLog.repo_name");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string release_id = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(mutable_release_id(), ptr, ctx, "estafette.ci.contracts.v1.ReleaseLog.release_id");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .estafette.ci.contracts.v1.BuildLogStep steps = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(add_steps(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<::PROTOBUF_NAMESPACE_ID::uint8>(ptr) == 50);
        } else goto handle_unusual;
        continue;
      // .google.protobuf.Timestamp inserted_at_time = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58)) {
          ptr = ctx->ParseMessage(mutable_inserted_at_time(), ptr);
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
bool ReleaseLog::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:estafette.ci.contracts.v1.ReleaseLog)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string id = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (10 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->mutable_id()));
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
            this->id().data(), static_cast<int>(this->id().length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE,
            "estafette.ci.contracts.v1.ReleaseLog.id"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string repo_source = 2;
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (18 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->mutable_repo_source()));
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
            this->repo_source().data(), static_cast<int>(this->repo_source().length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE,
            "estafette.ci.contracts.v1.ReleaseLog.repo_source"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string repo_owner = 3;
      case 3: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (26 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->mutable_repo_owner()));
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
            this->repo_owner().data(), static_cast<int>(this->repo_owner().length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE,
            "estafette.ci.contracts.v1.ReleaseLog.repo_owner"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string repo_name = 4;
      case 4: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (34 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->mutable_repo_name()));
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
            this->repo_name().data(), static_cast<int>(this->repo_name().length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE,
            "estafette.ci.contracts.v1.ReleaseLog.repo_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string release_id = 5;
      case 5: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (42 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->mutable_release_id()));
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
            this->release_id().data(), static_cast<int>(this->release_id().length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE,
            "estafette.ci.contracts.v1.ReleaseLog.release_id"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .estafette.ci.contracts.v1.BuildLogStep steps = 6;
      case 6: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (50 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
                input, add_steps()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.protobuf.Timestamp inserted_at_time = 7;
      case 7: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (58 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
               input, mutable_inserted_at_time()));
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
  // @@protoc_insertion_point(parse_success:estafette.ci.contracts.v1.ReleaseLog)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:estafette.ci.contracts.v1.ReleaseLog)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void ReleaseLog::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:estafette.ci.contracts.v1.ReleaseLog)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string id = 1;
  if (this->id().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->id().data(), static_cast<int>(this->id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "estafette.ci.contracts.v1.ReleaseLog.id");
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->id(), output);
  }

  // string repo_source = 2;
  if (this->repo_source().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->repo_source().data(), static_cast<int>(this->repo_source().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "estafette.ci.contracts.v1.ReleaseLog.repo_source");
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->repo_source(), output);
  }

  // string repo_owner = 3;
  if (this->repo_owner().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->repo_owner().data(), static_cast<int>(this->repo_owner().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "estafette.ci.contracts.v1.ReleaseLog.repo_owner");
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->repo_owner(), output);
  }

  // string repo_name = 4;
  if (this->repo_name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->repo_name().data(), static_cast<int>(this->repo_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "estafette.ci.contracts.v1.ReleaseLog.repo_name");
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->repo_name(), output);
  }

  // string release_id = 5;
  if (this->release_id().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->release_id().data(), static_cast<int>(this->release_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "estafette.ci.contracts.v1.ReleaseLog.release_id");
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->release_id(), output);
  }

  // repeated .estafette.ci.contracts.v1.BuildLogStep steps = 6;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->steps_size()); i < n; i++) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      6,
      this->steps(static_cast<int>(i)),
      output);
  }

  // .google.protobuf.Timestamp inserted_at_time = 7;
  if (this->has_inserted_at_time()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      7, HasBitSetters::inserted_at_time(this), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:estafette.ci.contracts.v1.ReleaseLog)
}

::PROTOBUF_NAMESPACE_ID::uint8* ReleaseLog::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:estafette.ci.contracts.v1.ReleaseLog)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string id = 1;
  if (this->id().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->id().data(), static_cast<int>(this->id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "estafette.ci.contracts.v1.ReleaseLog.id");
    target =
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringToArray(
        1, this->id(), target);
  }

  // string repo_source = 2;
  if (this->repo_source().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->repo_source().data(), static_cast<int>(this->repo_source().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "estafette.ci.contracts.v1.ReleaseLog.repo_source");
    target =
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringToArray(
        2, this->repo_source(), target);
  }

  // string repo_owner = 3;
  if (this->repo_owner().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->repo_owner().data(), static_cast<int>(this->repo_owner().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "estafette.ci.contracts.v1.ReleaseLog.repo_owner");
    target =
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringToArray(
        3, this->repo_owner(), target);
  }

  // string repo_name = 4;
  if (this->repo_name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->repo_name().data(), static_cast<int>(this->repo_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "estafette.ci.contracts.v1.ReleaseLog.repo_name");
    target =
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringToArray(
        4, this->repo_name(), target);
  }

  // string release_id = 5;
  if (this->release_id().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->release_id().data(), static_cast<int>(this->release_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "estafette.ci.contracts.v1.ReleaseLog.release_id");
    target =
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringToArray(
        5, this->release_id(), target);
  }

  // repeated .estafette.ci.contracts.v1.BuildLogStep steps = 6;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->steps_size()); i < n; i++) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        6, this->steps(static_cast<int>(i)), target);
  }

  // .google.protobuf.Timestamp inserted_at_time = 7;
  if (this->has_inserted_at_time()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        7, HasBitSetters::inserted_at_time(this), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:estafette.ci.contracts.v1.ReleaseLog)
  return target;
}

size_t ReleaseLog::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:estafette.ci.contracts.v1.ReleaseLog)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .estafette.ci.contracts.v1.BuildLogStep steps = 6;
  {
    unsigned int count = static_cast<unsigned int>(this->steps_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          this->steps(static_cast<int>(i)));
    }
  }

  // string id = 1;
  if (this->id().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->id());
  }

  // string repo_source = 2;
  if (this->repo_source().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->repo_source());
  }

  // string repo_owner = 3;
  if (this->repo_owner().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->repo_owner());
  }

  // string repo_name = 4;
  if (this->repo_name().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->repo_name());
  }

  // string release_id = 5;
  if (this->release_id().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->release_id());
  }

  // .google.protobuf.Timestamp inserted_at_time = 7;
  if (this->has_inserted_at_time()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *inserted_at_time_);
  }

  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ReleaseLog::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:estafette.ci.contracts.v1.ReleaseLog)
  GOOGLE_DCHECK_NE(&from, this);
  const ReleaseLog* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ReleaseLog>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:estafette.ci.contracts.v1.ReleaseLog)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:estafette.ci.contracts.v1.ReleaseLog)
    MergeFrom(*source);
  }
}

void ReleaseLog::MergeFrom(const ReleaseLog& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:estafette.ci.contracts.v1.ReleaseLog)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  steps_.MergeFrom(from.steps_);
  if (from.id().size() > 0) {

    id_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.id_);
  }
  if (from.repo_source().size() > 0) {

    repo_source_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.repo_source_);
  }
  if (from.repo_owner().size() > 0) {

    repo_owner_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.repo_owner_);
  }
  if (from.repo_name().size() > 0) {

    repo_name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.repo_name_);
  }
  if (from.release_id().size() > 0) {

    release_id_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.release_id_);
  }
  if (from.has_inserted_at_time()) {
    mutable_inserted_at_time()->PROTOBUF_NAMESPACE_ID::Timestamp::MergeFrom(from.inserted_at_time());
  }
}

void ReleaseLog::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:estafette.ci.contracts.v1.ReleaseLog)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ReleaseLog::CopyFrom(const ReleaseLog& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:estafette.ci.contracts.v1.ReleaseLog)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ReleaseLog::IsInitialized() const {
  return true;
}

void ReleaseLog::Swap(ReleaseLog* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ReleaseLog::InternalSwap(ReleaseLog* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  CastToBase(&steps_)->InternalSwap(CastToBase(&other->steps_));
  id_.Swap(&other->id_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  repo_source_.Swap(&other->repo_source_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  repo_owner_.Swap(&other->repo_owner_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  repo_name_.Swap(&other->repo_name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  release_id_.Swap(&other->release_id_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(inserted_at_time_, other->inserted_at_time_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ReleaseLog::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace contracts
}  // namespace ci
}  // namespace estafette
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::estafette::ci::contracts::v1::ReleaseLog* Arena::CreateMaybeMessage< ::estafette::ci::contracts::v1::ReleaseLog >(Arena* arena) {
  return Arena::CreateInternal< ::estafette::ci::contracts::v1::ReleaseLog >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
