// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: estafette/ci/contracts/v1/list_response.proto

#include "estafette/ci/contracts/v1/list_response.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_estafette_2fci_2fcontracts_2fv1_2fpagination_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Pagination_estafette_2fci_2fcontracts_2fv1_2fpagination_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2fany_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Any_google_2fprotobuf_2fany_2eproto;
namespace estafette {
namespace ci {
namespace contracts {
namespace v1 {
class ListResponseDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ListResponse> _instance;
} _ListResponse_default_instance_;
}  // namespace v1
}  // namespace contracts
}  // namespace ci
}  // namespace estafette
static void InitDefaultsscc_info_ListResponse_estafette_2fci_2fcontracts_2fv1_2flist_5fresponse_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::estafette::ci::contracts::v1::_ListResponse_default_instance_;
    new (ptr) ::estafette::ci::contracts::v1::ListResponse();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::estafette::ci::contracts::v1::ListResponse::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_ListResponse_estafette_2fci_2fcontracts_2fv1_2flist_5fresponse_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsscc_info_ListResponse_estafette_2fci_2fcontracts_2fv1_2flist_5fresponse_2eproto}, {
      &scc_info_Any_google_2fprotobuf_2fany_2eproto.base,
      &scc_info_Pagination_estafette_2fci_2fcontracts_2fv1_2fpagination_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_estafette_2fci_2fcontracts_2fv1_2flist_5fresponse_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_estafette_2fci_2fcontracts_2fv1_2flist_5fresponse_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_estafette_2fci_2fcontracts_2fv1_2flist_5fresponse_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_estafette_2fci_2fcontracts_2fv1_2flist_5fresponse_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::estafette::ci::contracts::v1::ListResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::estafette::ci::contracts::v1::ListResponse, items_),
  PROTOBUF_FIELD_OFFSET(::estafette::ci::contracts::v1::ListResponse, pagination_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::estafette::ci::contracts::v1::ListResponse)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::estafette::ci::contracts::v1::_ListResponse_default_instance_),
};

const char descriptor_table_protodef_estafette_2fci_2fcontracts_2fv1_2flist_5fresponse_2eproto[] =
  "\n-estafette/ci/contracts/v1/list_respons"
  "e.proto\022\031estafette.ci.contracts.v1\032*esta"
  "fette/ci/contracts/v1/pagination.proto\032\031"
  "google/protobuf/any.proto\"n\n\014ListRespons"
  "e\022#\n\005items\030\001 \003(\0132\024.google.protobuf.Any\0229"
  "\n\npagination\030\002 \001(\0132%.estafette.ci.contra"
  "cts.v1.PaginationB{\n\035com.estafette.ci.co"
  "ntracts.v1P\001Z<github.com/estafette/estaf"
  "ette-ci-protos-golang/contracts/v1\252\002\031Est"
  "afette.Ci.Contracts.V1b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_estafette_2fci_2fcontracts_2fv1_2flist_5fresponse_2eproto_deps[2] = {
  &::descriptor_table_estafette_2fci_2fcontracts_2fv1_2fpagination_2eproto,
  &::descriptor_table_google_2fprotobuf_2fany_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_estafette_2fci_2fcontracts_2fv1_2flist_5fresponse_2eproto_sccs[1] = {
  &scc_info_ListResponse_estafette_2fci_2fcontracts_2fv1_2flist_5fresponse_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_estafette_2fci_2fcontracts_2fv1_2flist_5fresponse_2eproto_once;
static bool descriptor_table_estafette_2fci_2fcontracts_2fv1_2flist_5fresponse_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_estafette_2fci_2fcontracts_2fv1_2flist_5fresponse_2eproto = {
  &descriptor_table_estafette_2fci_2fcontracts_2fv1_2flist_5fresponse_2eproto_initialized, descriptor_table_protodef_estafette_2fci_2fcontracts_2fv1_2flist_5fresponse_2eproto, "estafette/ci/contracts/v1/list_response.proto", 390,
  &descriptor_table_estafette_2fci_2fcontracts_2fv1_2flist_5fresponse_2eproto_once, descriptor_table_estafette_2fci_2fcontracts_2fv1_2flist_5fresponse_2eproto_sccs, descriptor_table_estafette_2fci_2fcontracts_2fv1_2flist_5fresponse_2eproto_deps, 1, 2,
  schemas, file_default_instances, TableStruct_estafette_2fci_2fcontracts_2fv1_2flist_5fresponse_2eproto::offsets,
  file_level_metadata_estafette_2fci_2fcontracts_2fv1_2flist_5fresponse_2eproto, 1, file_level_enum_descriptors_estafette_2fci_2fcontracts_2fv1_2flist_5fresponse_2eproto, file_level_service_descriptors_estafette_2fci_2fcontracts_2fv1_2flist_5fresponse_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_estafette_2fci_2fcontracts_2fv1_2flist_5fresponse_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_estafette_2fci_2fcontracts_2fv1_2flist_5fresponse_2eproto), true);
namespace estafette {
namespace ci {
namespace contracts {
namespace v1 {

// ===================================================================

void ListResponse::InitAsDefaultInstance() {
  ::estafette::ci::contracts::v1::_ListResponse_default_instance_._instance.get_mutable()->pagination_ = const_cast< ::estafette::ci::contracts::v1::Pagination*>(
      ::estafette::ci::contracts::v1::Pagination::internal_default_instance());
}
class ListResponse::HasBitSetters {
 public:
  static const ::estafette::ci::contracts::v1::Pagination& pagination(const ListResponse* msg);
};

const ::estafette::ci::contracts::v1::Pagination&
ListResponse::HasBitSetters::pagination(const ListResponse* msg) {
  return *msg->pagination_;
}
void ListResponse::clear_items() {
  items_.Clear();
}
void ListResponse::clear_pagination() {
  if (GetArenaNoVirtual() == nullptr && pagination_ != nullptr) {
    delete pagination_;
  }
  pagination_ = nullptr;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ListResponse::kItemsFieldNumber;
const int ListResponse::kPaginationFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ListResponse::ListResponse()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:estafette.ci.contracts.v1.ListResponse)
}
ListResponse::ListResponse(const ListResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      items_(from.items_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_pagination()) {
    pagination_ = new ::estafette::ci::contracts::v1::Pagination(*from.pagination_);
  } else {
    pagination_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:estafette.ci.contracts.v1.ListResponse)
}

void ListResponse::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ListResponse_estafette_2fci_2fcontracts_2fv1_2flist_5fresponse_2eproto.base);
  pagination_ = nullptr;
}

ListResponse::~ListResponse() {
  // @@protoc_insertion_point(destructor:estafette.ci.contracts.v1.ListResponse)
  SharedDtor();
}

void ListResponse::SharedDtor() {
  if (this != internal_default_instance()) delete pagination_;
}

void ListResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ListResponse& ListResponse::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ListResponse_estafette_2fci_2fcontracts_2fv1_2flist_5fresponse_2eproto.base);
  return *internal_default_instance();
}


void ListResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:estafette.ci.contracts.v1.ListResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  items_.Clear();
  if (GetArenaNoVirtual() == nullptr && pagination_ != nullptr) {
    delete pagination_;
  }
  pagination_ = nullptr;
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* ListResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .google.protobuf.Any items = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(add_items(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<::PROTOBUF_NAMESPACE_ID::uint8>(ptr) == 10);
        } else goto handle_unusual;
        continue;
      // .estafette.ci.contracts.v1.Pagination pagination = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(mutable_pagination(), ptr);
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
bool ListResponse::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:estafette.ci.contracts.v1.ListResponse)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .google.protobuf.Any items = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (10 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
                input, add_items()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .estafette.ci.contracts.v1.Pagination pagination = 2;
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (18 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
               input, mutable_pagination()));
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
  // @@protoc_insertion_point(parse_success:estafette.ci.contracts.v1.ListResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:estafette.ci.contracts.v1.ListResponse)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void ListResponse::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:estafette.ci.contracts.v1.ListResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .google.protobuf.Any items = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->items_size()); i < n; i++) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      1,
      this->items(static_cast<int>(i)),
      output);
  }

  // .estafette.ci.contracts.v1.Pagination pagination = 2;
  if (this->has_pagination()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, HasBitSetters::pagination(this), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:estafette.ci.contracts.v1.ListResponse)
}

::PROTOBUF_NAMESPACE_ID::uint8* ListResponse::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:estafette.ci.contracts.v1.ListResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .google.protobuf.Any items = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->items_size()); i < n; i++) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->items(static_cast<int>(i)), target);
  }

  // .estafette.ci.contracts.v1.Pagination pagination = 2;
  if (this->has_pagination()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, HasBitSetters::pagination(this), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:estafette.ci.contracts.v1.ListResponse)
  return target;
}

size_t ListResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:estafette.ci.contracts.v1.ListResponse)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .google.protobuf.Any items = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->items_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          this->items(static_cast<int>(i)));
    }
  }

  // .estafette.ci.contracts.v1.Pagination pagination = 2;
  if (this->has_pagination()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *pagination_);
  }

  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ListResponse::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:estafette.ci.contracts.v1.ListResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const ListResponse* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ListResponse>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:estafette.ci.contracts.v1.ListResponse)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:estafette.ci.contracts.v1.ListResponse)
    MergeFrom(*source);
  }
}

void ListResponse::MergeFrom(const ListResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:estafette.ci.contracts.v1.ListResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  items_.MergeFrom(from.items_);
  if (from.has_pagination()) {
    mutable_pagination()->::estafette::ci::contracts::v1::Pagination::MergeFrom(from.pagination());
  }
}

void ListResponse::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:estafette.ci.contracts.v1.ListResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ListResponse::CopyFrom(const ListResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:estafette.ci.contracts.v1.ListResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ListResponse::IsInitialized() const {
  return true;
}

void ListResponse::Swap(ListResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ListResponse::InternalSwap(ListResponse* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  CastToBase(&items_)->InternalSwap(CastToBase(&other->items_));
  swap(pagination_, other->pagination_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ListResponse::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace contracts
}  // namespace ci
}  // namespace estafette
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::estafette::ci::contracts::v1::ListResponse* Arena::CreateMaybeMessage< ::estafette::ci::contracts::v1::ListResponse >(Arena* arena) {
  return Arena::CreateInternal< ::estafette::ci::contracts::v1::ListResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
