// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: contracts.v1/git_config.proto

#ifndef PROTOBUF_INCLUDED_contracts_2ev1_2fgit_5fconfig_2eproto
#define PROTOBUF_INCLUDED_contracts_2ev1_2fgit_5fconfig_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_contracts_2ev1_2fgit_5fconfig_2eproto 

namespace protobuf_contracts_2ev1_2fgit_5fconfig_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_contracts_2ev1_2fgit_5fconfig_2eproto
namespace contracts {
namespace v1 {
class GitConfig;
class GitConfigDefaultTypeInternal;
extern GitConfigDefaultTypeInternal _GitConfig_default_instance_;
}  // namespace v1
}  // namespace contracts
namespace google {
namespace protobuf {
template<> ::contracts::v1::GitConfig* Arena::CreateMaybeMessage<::contracts::v1::GitConfig>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace contracts {
namespace v1 {

// ===================================================================

class GitConfig : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:contracts.v1.GitConfig) */ {
 public:
  GitConfig();
  virtual ~GitConfig();

  GitConfig(const GitConfig& from);

  inline GitConfig& operator=(const GitConfig& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  GitConfig(GitConfig&& from) noexcept
    : GitConfig() {
    *this = ::std::move(from);
  }

  inline GitConfig& operator=(GitConfig&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const GitConfig& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GitConfig* internal_default_instance() {
    return reinterpret_cast<const GitConfig*>(
               &_GitConfig_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(GitConfig* other);
  friend void swap(GitConfig& a, GitConfig& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline GitConfig* New() const final {
    return CreateMaybeMessage<GitConfig>(NULL);
  }

  GitConfig* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<GitConfig>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const GitConfig& from);
  void MergeFrom(const GitConfig& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(GitConfig* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string repo_source = 1;
  void clear_repo_source();
  static const int kRepoSourceFieldNumber = 1;
  const ::std::string& repo_source() const;
  void set_repo_source(const ::std::string& value);
  #if LANG_CXX11
  void set_repo_source(::std::string&& value);
  #endif
  void set_repo_source(const char* value);
  void set_repo_source(const char* value, size_t size);
  ::std::string* mutable_repo_source();
  ::std::string* release_repo_source();
  void set_allocated_repo_source(::std::string* repo_source);

  // string repo_owner = 2;
  void clear_repo_owner();
  static const int kRepoOwnerFieldNumber = 2;
  const ::std::string& repo_owner() const;
  void set_repo_owner(const ::std::string& value);
  #if LANG_CXX11
  void set_repo_owner(::std::string&& value);
  #endif
  void set_repo_owner(const char* value);
  void set_repo_owner(const char* value, size_t size);
  ::std::string* mutable_repo_owner();
  ::std::string* release_repo_owner();
  void set_allocated_repo_owner(::std::string* repo_owner);

  // string repo_name = 3;
  void clear_repo_name();
  static const int kRepoNameFieldNumber = 3;
  const ::std::string& repo_name() const;
  void set_repo_name(const ::std::string& value);
  #if LANG_CXX11
  void set_repo_name(::std::string&& value);
  #endif
  void set_repo_name(const char* value);
  void set_repo_name(const char* value, size_t size);
  ::std::string* mutable_repo_name();
  ::std::string* release_repo_name();
  void set_allocated_repo_name(::std::string* repo_name);

  // string repo_branch = 4;
  void clear_repo_branch();
  static const int kRepoBranchFieldNumber = 4;
  const ::std::string& repo_branch() const;
  void set_repo_branch(const ::std::string& value);
  #if LANG_CXX11
  void set_repo_branch(::std::string&& value);
  #endif
  void set_repo_branch(const char* value);
  void set_repo_branch(const char* value, size_t size);
  ::std::string* mutable_repo_branch();
  ::std::string* release_repo_branch();
  void set_allocated_repo_branch(::std::string* repo_branch);

  // string repo_revision = 5;
  void clear_repo_revision();
  static const int kRepoRevisionFieldNumber = 5;
  const ::std::string& repo_revision() const;
  void set_repo_revision(const ::std::string& value);
  #if LANG_CXX11
  void set_repo_revision(::std::string&& value);
  #endif
  void set_repo_revision(const char* value);
  void set_repo_revision(const char* value, size_t size);
  ::std::string* mutable_repo_revision();
  ::std::string* release_repo_revision();
  void set_allocated_repo_revision(::std::string* repo_revision);

  // @@protoc_insertion_point(class_scope:contracts.v1.GitConfig)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr repo_source_;
  ::google::protobuf::internal::ArenaStringPtr repo_owner_;
  ::google::protobuf::internal::ArenaStringPtr repo_name_;
  ::google::protobuf::internal::ArenaStringPtr repo_branch_;
  ::google::protobuf::internal::ArenaStringPtr repo_revision_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_contracts_2ev1_2fgit_5fconfig_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GitConfig

// string repo_source = 1;
inline void GitConfig::clear_repo_source() {
  repo_source_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& GitConfig::repo_source() const {
  // @@protoc_insertion_point(field_get:contracts.v1.GitConfig.repo_source)
  return repo_source_.GetNoArena();
}
inline void GitConfig::set_repo_source(const ::std::string& value) {
  
  repo_source_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:contracts.v1.GitConfig.repo_source)
}
#if LANG_CXX11
inline void GitConfig::set_repo_source(::std::string&& value) {
  
  repo_source_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:contracts.v1.GitConfig.repo_source)
}
#endif
inline void GitConfig::set_repo_source(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  repo_source_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:contracts.v1.GitConfig.repo_source)
}
inline void GitConfig::set_repo_source(const char* value, size_t size) {
  
  repo_source_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:contracts.v1.GitConfig.repo_source)
}
inline ::std::string* GitConfig::mutable_repo_source() {
  
  // @@protoc_insertion_point(field_mutable:contracts.v1.GitConfig.repo_source)
  return repo_source_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* GitConfig::release_repo_source() {
  // @@protoc_insertion_point(field_release:contracts.v1.GitConfig.repo_source)
  
  return repo_source_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void GitConfig::set_allocated_repo_source(::std::string* repo_source) {
  if (repo_source != NULL) {
    
  } else {
    
  }
  repo_source_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), repo_source);
  // @@protoc_insertion_point(field_set_allocated:contracts.v1.GitConfig.repo_source)
}

// string repo_owner = 2;
inline void GitConfig::clear_repo_owner() {
  repo_owner_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& GitConfig::repo_owner() const {
  // @@protoc_insertion_point(field_get:contracts.v1.GitConfig.repo_owner)
  return repo_owner_.GetNoArena();
}
inline void GitConfig::set_repo_owner(const ::std::string& value) {
  
  repo_owner_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:contracts.v1.GitConfig.repo_owner)
}
#if LANG_CXX11
inline void GitConfig::set_repo_owner(::std::string&& value) {
  
  repo_owner_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:contracts.v1.GitConfig.repo_owner)
}
#endif
inline void GitConfig::set_repo_owner(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  repo_owner_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:contracts.v1.GitConfig.repo_owner)
}
inline void GitConfig::set_repo_owner(const char* value, size_t size) {
  
  repo_owner_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:contracts.v1.GitConfig.repo_owner)
}
inline ::std::string* GitConfig::mutable_repo_owner() {
  
  // @@protoc_insertion_point(field_mutable:contracts.v1.GitConfig.repo_owner)
  return repo_owner_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* GitConfig::release_repo_owner() {
  // @@protoc_insertion_point(field_release:contracts.v1.GitConfig.repo_owner)
  
  return repo_owner_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void GitConfig::set_allocated_repo_owner(::std::string* repo_owner) {
  if (repo_owner != NULL) {
    
  } else {
    
  }
  repo_owner_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), repo_owner);
  // @@protoc_insertion_point(field_set_allocated:contracts.v1.GitConfig.repo_owner)
}

// string repo_name = 3;
inline void GitConfig::clear_repo_name() {
  repo_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& GitConfig::repo_name() const {
  // @@protoc_insertion_point(field_get:contracts.v1.GitConfig.repo_name)
  return repo_name_.GetNoArena();
}
inline void GitConfig::set_repo_name(const ::std::string& value) {
  
  repo_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:contracts.v1.GitConfig.repo_name)
}
#if LANG_CXX11
inline void GitConfig::set_repo_name(::std::string&& value) {
  
  repo_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:contracts.v1.GitConfig.repo_name)
}
#endif
inline void GitConfig::set_repo_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  repo_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:contracts.v1.GitConfig.repo_name)
}
inline void GitConfig::set_repo_name(const char* value, size_t size) {
  
  repo_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:contracts.v1.GitConfig.repo_name)
}
inline ::std::string* GitConfig::mutable_repo_name() {
  
  // @@protoc_insertion_point(field_mutable:contracts.v1.GitConfig.repo_name)
  return repo_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* GitConfig::release_repo_name() {
  // @@protoc_insertion_point(field_release:contracts.v1.GitConfig.repo_name)
  
  return repo_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void GitConfig::set_allocated_repo_name(::std::string* repo_name) {
  if (repo_name != NULL) {
    
  } else {
    
  }
  repo_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), repo_name);
  // @@protoc_insertion_point(field_set_allocated:contracts.v1.GitConfig.repo_name)
}

// string repo_branch = 4;
inline void GitConfig::clear_repo_branch() {
  repo_branch_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& GitConfig::repo_branch() const {
  // @@protoc_insertion_point(field_get:contracts.v1.GitConfig.repo_branch)
  return repo_branch_.GetNoArena();
}
inline void GitConfig::set_repo_branch(const ::std::string& value) {
  
  repo_branch_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:contracts.v1.GitConfig.repo_branch)
}
#if LANG_CXX11
inline void GitConfig::set_repo_branch(::std::string&& value) {
  
  repo_branch_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:contracts.v1.GitConfig.repo_branch)
}
#endif
inline void GitConfig::set_repo_branch(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  repo_branch_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:contracts.v1.GitConfig.repo_branch)
}
inline void GitConfig::set_repo_branch(const char* value, size_t size) {
  
  repo_branch_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:contracts.v1.GitConfig.repo_branch)
}
inline ::std::string* GitConfig::mutable_repo_branch() {
  
  // @@protoc_insertion_point(field_mutable:contracts.v1.GitConfig.repo_branch)
  return repo_branch_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* GitConfig::release_repo_branch() {
  // @@protoc_insertion_point(field_release:contracts.v1.GitConfig.repo_branch)
  
  return repo_branch_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void GitConfig::set_allocated_repo_branch(::std::string* repo_branch) {
  if (repo_branch != NULL) {
    
  } else {
    
  }
  repo_branch_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), repo_branch);
  // @@protoc_insertion_point(field_set_allocated:contracts.v1.GitConfig.repo_branch)
}

// string repo_revision = 5;
inline void GitConfig::clear_repo_revision() {
  repo_revision_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& GitConfig::repo_revision() const {
  // @@protoc_insertion_point(field_get:contracts.v1.GitConfig.repo_revision)
  return repo_revision_.GetNoArena();
}
inline void GitConfig::set_repo_revision(const ::std::string& value) {
  
  repo_revision_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:contracts.v1.GitConfig.repo_revision)
}
#if LANG_CXX11
inline void GitConfig::set_repo_revision(::std::string&& value) {
  
  repo_revision_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:contracts.v1.GitConfig.repo_revision)
}
#endif
inline void GitConfig::set_repo_revision(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  repo_revision_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:contracts.v1.GitConfig.repo_revision)
}
inline void GitConfig::set_repo_revision(const char* value, size_t size) {
  
  repo_revision_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:contracts.v1.GitConfig.repo_revision)
}
inline ::std::string* GitConfig::mutable_repo_revision() {
  
  // @@protoc_insertion_point(field_mutable:contracts.v1.GitConfig.repo_revision)
  return repo_revision_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* GitConfig::release_repo_revision() {
  // @@protoc_insertion_point(field_release:contracts.v1.GitConfig.repo_revision)
  
  return repo_revision_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void GitConfig::set_allocated_repo_revision(::std::string* repo_revision) {
  if (repo_revision != NULL) {
    
  } else {
    
  }
  repo_revision_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), repo_revision);
  // @@protoc_insertion_point(field_set_allocated:contracts.v1.GitConfig.repo_revision)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace contracts

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_contracts_2ev1_2fgit_5fconfig_2eproto