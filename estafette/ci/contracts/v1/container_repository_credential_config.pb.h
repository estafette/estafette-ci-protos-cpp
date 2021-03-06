// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: estafette/ci/contracts/v1/container_repository_credential_config.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_estafette_2fci_2fcontracts_2fv1_2fcontainer_5frepository_5fcredential_5fconfig_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_estafette_2fci_2fcontracts_2fv1_2fcontainer_5frepository_5fcredential_5fconfig_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3008000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3008000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_estafette_2fci_2fcontracts_2fv1_2fcontainer_5frepository_5fcredential_5fconfig_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_estafette_2fci_2fcontracts_2fv1_2fcontainer_5frepository_5fcredential_5fconfig_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_estafette_2fci_2fcontracts_2fv1_2fcontainer_5frepository_5fcredential_5fconfig_2eproto;
namespace estafette {
namespace ci {
namespace contracts {
namespace v1 {
class ContainerRepositoryCredentialConfig;
class ContainerRepositoryCredentialConfigDefaultTypeInternal;
extern ContainerRepositoryCredentialConfigDefaultTypeInternal _ContainerRepositoryCredentialConfig_default_instance_;
}  // namespace v1
}  // namespace contracts
}  // namespace ci
}  // namespace estafette
PROTOBUF_NAMESPACE_OPEN
template<> ::estafette::ci::contracts::v1::ContainerRepositoryCredentialConfig* Arena::CreateMaybeMessage<::estafette::ci::contracts::v1::ContainerRepositoryCredentialConfig>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace estafette {
namespace ci {
namespace contracts {
namespace v1 {

// ===================================================================

class ContainerRepositoryCredentialConfig :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig) */ {
 public:
  ContainerRepositoryCredentialConfig();
  virtual ~ContainerRepositoryCredentialConfig();

  ContainerRepositoryCredentialConfig(const ContainerRepositoryCredentialConfig& from);
  ContainerRepositoryCredentialConfig(ContainerRepositoryCredentialConfig&& from) noexcept
    : ContainerRepositoryCredentialConfig() {
    *this = ::std::move(from);
  }

  inline ContainerRepositoryCredentialConfig& operator=(const ContainerRepositoryCredentialConfig& from) {
    CopyFrom(from);
    return *this;
  }
  inline ContainerRepositoryCredentialConfig& operator=(ContainerRepositoryCredentialConfig&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const ContainerRepositoryCredentialConfig& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ContainerRepositoryCredentialConfig* internal_default_instance() {
    return reinterpret_cast<const ContainerRepositoryCredentialConfig*>(
               &_ContainerRepositoryCredentialConfig_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(ContainerRepositoryCredentialConfig* other);
  friend void swap(ContainerRepositoryCredentialConfig& a, ContainerRepositoryCredentialConfig& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ContainerRepositoryCredentialConfig* New() const final {
    return CreateMaybeMessage<ContainerRepositoryCredentialConfig>(nullptr);
  }

  ContainerRepositoryCredentialConfig* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ContainerRepositoryCredentialConfig>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ContainerRepositoryCredentialConfig& from);
  void MergeFrom(const ContainerRepositoryCredentialConfig& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ContainerRepositoryCredentialConfig* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_estafette_2fci_2fcontracts_2fv1_2fcontainer_5frepository_5fcredential_5fconfig_2eproto);
    return ::descriptor_table_estafette_2fci_2fcontracts_2fv1_2fcontainer_5frepository_5fcredential_5fconfig_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string repository = 1;
  void clear_repository();
  static const int kRepositoryFieldNumber = 1;
  const std::string& repository() const;
  void set_repository(const std::string& value);
  void set_repository(std::string&& value);
  void set_repository(const char* value);
  void set_repository(const char* value, size_t size);
  std::string* mutable_repository();
  std::string* release_repository();
  void set_allocated_repository(std::string* repository);

  // string username = 2;
  void clear_username();
  static const int kUsernameFieldNumber = 2;
  const std::string& username() const;
  void set_username(const std::string& value);
  void set_username(std::string&& value);
  void set_username(const char* value);
  void set_username(const char* value, size_t size);
  std::string* mutable_username();
  std::string* release_username();
  void set_allocated_username(std::string* username);

  // string password = 3;
  void clear_password();
  static const int kPasswordFieldNumber = 3;
  const std::string& password() const;
  void set_password(const std::string& value);
  void set_password(std::string&& value);
  void set_password(const char* value);
  void set_password(const char* value, size_t size);
  std::string* mutable_password();
  std::string* release_password();
  void set_allocated_password(std::string* password);

  // @@protoc_insertion_point(class_scope:estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr repository_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr username_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr password_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_estafette_2fci_2fcontracts_2fv1_2fcontainer_5frepository_5fcredential_5fconfig_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ContainerRepositoryCredentialConfig

// string repository = 1;
inline void ContainerRepositoryCredentialConfig::clear_repository() {
  repository_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& ContainerRepositoryCredentialConfig::repository() const {
  // @@protoc_insertion_point(field_get:estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig.repository)
  return repository_.GetNoArena();
}
inline void ContainerRepositoryCredentialConfig::set_repository(const std::string& value) {
  
  repository_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig.repository)
}
inline void ContainerRepositoryCredentialConfig::set_repository(std::string&& value) {
  
  repository_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig.repository)
}
inline void ContainerRepositoryCredentialConfig::set_repository(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  repository_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig.repository)
}
inline void ContainerRepositoryCredentialConfig::set_repository(const char* value, size_t size) {
  
  repository_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig.repository)
}
inline std::string* ContainerRepositoryCredentialConfig::mutable_repository() {
  
  // @@protoc_insertion_point(field_mutable:estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig.repository)
  return repository_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* ContainerRepositoryCredentialConfig::release_repository() {
  // @@protoc_insertion_point(field_release:estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig.repository)
  
  return repository_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void ContainerRepositoryCredentialConfig::set_allocated_repository(std::string* repository) {
  if (repository != nullptr) {
    
  } else {
    
  }
  repository_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), repository);
  // @@protoc_insertion_point(field_set_allocated:estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig.repository)
}

// string username = 2;
inline void ContainerRepositoryCredentialConfig::clear_username() {
  username_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& ContainerRepositoryCredentialConfig::username() const {
  // @@protoc_insertion_point(field_get:estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig.username)
  return username_.GetNoArena();
}
inline void ContainerRepositoryCredentialConfig::set_username(const std::string& value) {
  
  username_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig.username)
}
inline void ContainerRepositoryCredentialConfig::set_username(std::string&& value) {
  
  username_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig.username)
}
inline void ContainerRepositoryCredentialConfig::set_username(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  username_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig.username)
}
inline void ContainerRepositoryCredentialConfig::set_username(const char* value, size_t size) {
  
  username_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig.username)
}
inline std::string* ContainerRepositoryCredentialConfig::mutable_username() {
  
  // @@protoc_insertion_point(field_mutable:estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig.username)
  return username_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* ContainerRepositoryCredentialConfig::release_username() {
  // @@protoc_insertion_point(field_release:estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig.username)
  
  return username_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void ContainerRepositoryCredentialConfig::set_allocated_username(std::string* username) {
  if (username != nullptr) {
    
  } else {
    
  }
  username_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), username);
  // @@protoc_insertion_point(field_set_allocated:estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig.username)
}

// string password = 3;
inline void ContainerRepositoryCredentialConfig::clear_password() {
  password_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& ContainerRepositoryCredentialConfig::password() const {
  // @@protoc_insertion_point(field_get:estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig.password)
  return password_.GetNoArena();
}
inline void ContainerRepositoryCredentialConfig::set_password(const std::string& value) {
  
  password_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig.password)
}
inline void ContainerRepositoryCredentialConfig::set_password(std::string&& value) {
  
  password_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig.password)
}
inline void ContainerRepositoryCredentialConfig::set_password(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  password_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig.password)
}
inline void ContainerRepositoryCredentialConfig::set_password(const char* value, size_t size) {
  
  password_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig.password)
}
inline std::string* ContainerRepositoryCredentialConfig::mutable_password() {
  
  // @@protoc_insertion_point(field_mutable:estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig.password)
  return password_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* ContainerRepositoryCredentialConfig::release_password() {
  // @@protoc_insertion_point(field_release:estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig.password)
  
  return password_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void ContainerRepositoryCredentialConfig::set_allocated_password(std::string* password) {
  if (password != nullptr) {
    
  } else {
    
  }
  password_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), password);
  // @@protoc_insertion_point(field_set_allocated:estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig.password)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace contracts
}  // namespace ci
}  // namespace estafette

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_estafette_2fci_2fcontracts_2fv1_2fcontainer_5frepository_5fcredential_5fconfig_2eproto
