// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: estafette/ci/manifest/v1/estafette_git_event.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_estafette_2fci_2fmanifest_2fv1_2festafette_5fgit_5fevent_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_estafette_2fci_2fmanifest_2fv1_2festafette_5fgit_5fevent_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_estafette_2fci_2fmanifest_2fv1_2festafette_5fgit_5fevent_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_estafette_2fci_2fmanifest_2fv1_2festafette_5fgit_5fevent_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fgit_5fevent_2eproto;
namespace estafette {
namespace ci {
namespace manifest {
namespace v1 {
class EstafetteGitEvent;
class EstafetteGitEventDefaultTypeInternal;
extern EstafetteGitEventDefaultTypeInternal _EstafetteGitEvent_default_instance_;
}  // namespace v1
}  // namespace manifest
}  // namespace ci
}  // namespace estafette
PROTOBUF_NAMESPACE_OPEN
template<> ::estafette::ci::manifest::v1::EstafetteGitEvent* Arena::CreateMaybeMessage<::estafette::ci::manifest::v1::EstafetteGitEvent>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace estafette {
namespace ci {
namespace manifest {
namespace v1 {

// ===================================================================

class EstafetteGitEvent :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:estafette.ci.manifest.v1.EstafetteGitEvent) */ {
 public:
  EstafetteGitEvent();
  virtual ~EstafetteGitEvent();

  EstafetteGitEvent(const EstafetteGitEvent& from);
  EstafetteGitEvent(EstafetteGitEvent&& from) noexcept
    : EstafetteGitEvent() {
    *this = ::std::move(from);
  }

  inline EstafetteGitEvent& operator=(const EstafetteGitEvent& from) {
    CopyFrom(from);
    return *this;
  }
  inline EstafetteGitEvent& operator=(EstafetteGitEvent&& from) noexcept {
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
  static const EstafetteGitEvent& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const EstafetteGitEvent* internal_default_instance() {
    return reinterpret_cast<const EstafetteGitEvent*>(
               &_EstafetteGitEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(EstafetteGitEvent* other);
  friend void swap(EstafetteGitEvent& a, EstafetteGitEvent& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline EstafetteGitEvent* New() const final {
    return CreateMaybeMessage<EstafetteGitEvent>(nullptr);
  }

  EstafetteGitEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<EstafetteGitEvent>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const EstafetteGitEvent& from);
  void MergeFrom(const EstafetteGitEvent& from);
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
  void InternalSwap(EstafetteGitEvent* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "estafette.ci.manifest.v1.EstafetteGitEvent";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fgit_5fevent_2eproto);
    return ::descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fgit_5fevent_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string event = 1;
  void clear_event();
  static const int kEventFieldNumber = 1;
  const std::string& event() const;
  void set_event(const std::string& value);
  void set_event(std::string&& value);
  void set_event(const char* value);
  void set_event(const char* value, size_t size);
  std::string* mutable_event();
  std::string* release_event();
  void set_allocated_event(std::string* event);

  // string repository = 2;
  void clear_repository();
  static const int kRepositoryFieldNumber = 2;
  const std::string& repository() const;
  void set_repository(const std::string& value);
  void set_repository(std::string&& value);
  void set_repository(const char* value);
  void set_repository(const char* value, size_t size);
  std::string* mutable_repository();
  std::string* release_repository();
  void set_allocated_repository(std::string* repository);

  // string branch = 3;
  void clear_branch();
  static const int kBranchFieldNumber = 3;
  const std::string& branch() const;
  void set_branch(const std::string& value);
  void set_branch(std::string&& value);
  void set_branch(const char* value);
  void set_branch(const char* value, size_t size);
  std::string* mutable_branch();
  std::string* release_branch();
  void set_allocated_branch(std::string* branch);

  // @@protoc_insertion_point(class_scope:estafette.ci.manifest.v1.EstafetteGitEvent)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr event_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr repository_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr branch_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_estafette_2fci_2fmanifest_2fv1_2festafette_5fgit_5fevent_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// EstafetteGitEvent

// string event = 1;
inline void EstafetteGitEvent::clear_event() {
  event_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& EstafetteGitEvent::event() const {
  // @@protoc_insertion_point(field_get:estafette.ci.manifest.v1.EstafetteGitEvent.event)
  return event_.GetNoArena();
}
inline void EstafetteGitEvent::set_event(const std::string& value) {
  
  event_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:estafette.ci.manifest.v1.EstafetteGitEvent.event)
}
inline void EstafetteGitEvent::set_event(std::string&& value) {
  
  event_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:estafette.ci.manifest.v1.EstafetteGitEvent.event)
}
inline void EstafetteGitEvent::set_event(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  event_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:estafette.ci.manifest.v1.EstafetteGitEvent.event)
}
inline void EstafetteGitEvent::set_event(const char* value, size_t size) {
  
  event_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:estafette.ci.manifest.v1.EstafetteGitEvent.event)
}
inline std::string* EstafetteGitEvent::mutable_event() {
  
  // @@protoc_insertion_point(field_mutable:estafette.ci.manifest.v1.EstafetteGitEvent.event)
  return event_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* EstafetteGitEvent::release_event() {
  // @@protoc_insertion_point(field_release:estafette.ci.manifest.v1.EstafetteGitEvent.event)
  
  return event_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void EstafetteGitEvent::set_allocated_event(std::string* event) {
  if (event != nullptr) {
    
  } else {
    
  }
  event_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), event);
  // @@protoc_insertion_point(field_set_allocated:estafette.ci.manifest.v1.EstafetteGitEvent.event)
}

// string repository = 2;
inline void EstafetteGitEvent::clear_repository() {
  repository_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& EstafetteGitEvent::repository() const {
  // @@protoc_insertion_point(field_get:estafette.ci.manifest.v1.EstafetteGitEvent.repository)
  return repository_.GetNoArena();
}
inline void EstafetteGitEvent::set_repository(const std::string& value) {
  
  repository_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:estafette.ci.manifest.v1.EstafetteGitEvent.repository)
}
inline void EstafetteGitEvent::set_repository(std::string&& value) {
  
  repository_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:estafette.ci.manifest.v1.EstafetteGitEvent.repository)
}
inline void EstafetteGitEvent::set_repository(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  repository_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:estafette.ci.manifest.v1.EstafetteGitEvent.repository)
}
inline void EstafetteGitEvent::set_repository(const char* value, size_t size) {
  
  repository_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:estafette.ci.manifest.v1.EstafetteGitEvent.repository)
}
inline std::string* EstafetteGitEvent::mutable_repository() {
  
  // @@protoc_insertion_point(field_mutable:estafette.ci.manifest.v1.EstafetteGitEvent.repository)
  return repository_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* EstafetteGitEvent::release_repository() {
  // @@protoc_insertion_point(field_release:estafette.ci.manifest.v1.EstafetteGitEvent.repository)
  
  return repository_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void EstafetteGitEvent::set_allocated_repository(std::string* repository) {
  if (repository != nullptr) {
    
  } else {
    
  }
  repository_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), repository);
  // @@protoc_insertion_point(field_set_allocated:estafette.ci.manifest.v1.EstafetteGitEvent.repository)
}

// string branch = 3;
inline void EstafetteGitEvent::clear_branch() {
  branch_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& EstafetteGitEvent::branch() const {
  // @@protoc_insertion_point(field_get:estafette.ci.manifest.v1.EstafetteGitEvent.branch)
  return branch_.GetNoArena();
}
inline void EstafetteGitEvent::set_branch(const std::string& value) {
  
  branch_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:estafette.ci.manifest.v1.EstafetteGitEvent.branch)
}
inline void EstafetteGitEvent::set_branch(std::string&& value) {
  
  branch_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:estafette.ci.manifest.v1.EstafetteGitEvent.branch)
}
inline void EstafetteGitEvent::set_branch(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  branch_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:estafette.ci.manifest.v1.EstafetteGitEvent.branch)
}
inline void EstafetteGitEvent::set_branch(const char* value, size_t size) {
  
  branch_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:estafette.ci.manifest.v1.EstafetteGitEvent.branch)
}
inline std::string* EstafetteGitEvent::mutable_branch() {
  
  // @@protoc_insertion_point(field_mutable:estafette.ci.manifest.v1.EstafetteGitEvent.branch)
  return branch_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* EstafetteGitEvent::release_branch() {
  // @@protoc_insertion_point(field_release:estafette.ci.manifest.v1.EstafetteGitEvent.branch)
  
  return branch_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void EstafetteGitEvent::set_allocated_branch(std::string* branch) {
  if (branch != nullptr) {
    
  } else {
    
  }
  branch_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), branch);
  // @@protoc_insertion_point(field_set_allocated:estafette.ci.manifest.v1.EstafetteGitEvent.branch)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace manifest
}  // namespace ci
}  // namespace estafette

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_estafette_2fci_2fmanifest_2fv1_2festafette_5fgit_5fevent_2eproto
