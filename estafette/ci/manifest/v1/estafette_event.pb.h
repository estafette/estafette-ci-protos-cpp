// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: estafette/ci/manifest/v1/estafette_event.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_estafette_2fci_2fmanifest_2fv1_2festafette_5fevent_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_estafette_2fci_2fmanifest_2fv1_2festafette_5fevent_2eproto

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
#include "estafette/ci/manifest/v1/estafette_cron_event.pb.h"
#include "estafette/ci/manifest/v1/estafette_docker_event.pb.h"
#include "estafette/ci/manifest/v1/estafette_git_event.pb.h"
#include "estafette/ci/manifest/v1/estafette_manual_event.pb.h"
#include "estafette/ci/manifest/v1/estafette_pipeline_event.pb.h"
#include "estafette/ci/manifest/v1/estafette_pub_sub_event.pb.h"
#include "estafette/ci/manifest/v1/estafette_release_event.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_estafette_2fci_2fmanifest_2fv1_2festafette_5fevent_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_estafette_2fci_2fmanifest_2fv1_2festafette_5fevent_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fevent_2eproto;
namespace estafette {
namespace ci {
namespace manifest {
namespace v1 {
class EstafetteEvent;
class EstafetteEventDefaultTypeInternal;
extern EstafetteEventDefaultTypeInternal _EstafetteEvent_default_instance_;
}  // namespace v1
}  // namespace manifest
}  // namespace ci
}  // namespace estafette
PROTOBUF_NAMESPACE_OPEN
template<> ::estafette::ci::manifest::v1::EstafetteEvent* Arena::CreateMaybeMessage<::estafette::ci::manifest::v1::EstafetteEvent>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace estafette {
namespace ci {
namespace manifest {
namespace v1 {

// ===================================================================

class EstafetteEvent :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:estafette.ci.manifest.v1.EstafetteEvent) */ {
 public:
  EstafetteEvent();
  virtual ~EstafetteEvent();

  EstafetteEvent(const EstafetteEvent& from);
  EstafetteEvent(EstafetteEvent&& from) noexcept
    : EstafetteEvent() {
    *this = ::std::move(from);
  }

  inline EstafetteEvent& operator=(const EstafetteEvent& from) {
    CopyFrom(from);
    return *this;
  }
  inline EstafetteEvent& operator=(EstafetteEvent&& from) noexcept {
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
  static const EstafetteEvent& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const EstafetteEvent* internal_default_instance() {
    return reinterpret_cast<const EstafetteEvent*>(
               &_EstafetteEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(EstafetteEvent* other);
  friend void swap(EstafetteEvent& a, EstafetteEvent& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline EstafetteEvent* New() const final {
    return CreateMaybeMessage<EstafetteEvent>(nullptr);
  }

  EstafetteEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<EstafetteEvent>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const EstafetteEvent& from);
  void MergeFrom(const EstafetteEvent& from);
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
  void InternalSwap(EstafetteEvent* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "estafette.ci.manifest.v1.EstafetteEvent";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fevent_2eproto);
    return ::descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fevent_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .estafette.ci.manifest.v1.EstafettePipelineEvent pipeline = 1;
  bool has_pipeline() const;
  void clear_pipeline();
  static const int kPipelineFieldNumber = 1;
  const ::estafette::ci::manifest::v1::EstafettePipelineEvent& pipeline() const;
  ::estafette::ci::manifest::v1::EstafettePipelineEvent* release_pipeline();
  ::estafette::ci::manifest::v1::EstafettePipelineEvent* mutable_pipeline();
  void set_allocated_pipeline(::estafette::ci::manifest::v1::EstafettePipelineEvent* pipeline);

  // .estafette.ci.manifest.v1.EstafetteReleaseEvent release = 2;
  bool has_release() const;
  void clear_release();
  static const int kReleaseFieldNumber = 2;
  const ::estafette::ci::manifest::v1::EstafetteReleaseEvent& release() const;
  ::estafette::ci::manifest::v1::EstafetteReleaseEvent* release_release();
  ::estafette::ci::manifest::v1::EstafetteReleaseEvent* mutable_release();
  void set_allocated_release(::estafette::ci::manifest::v1::EstafetteReleaseEvent* release);

  // .estafette.ci.manifest.v1.EstafetteGitEvent git = 3;
  bool has_git() const;
  void clear_git();
  static const int kGitFieldNumber = 3;
  const ::estafette::ci::manifest::v1::EstafetteGitEvent& git() const;
  ::estafette::ci::manifest::v1::EstafetteGitEvent* release_git();
  ::estafette::ci::manifest::v1::EstafetteGitEvent* mutable_git();
  void set_allocated_git(::estafette::ci::manifest::v1::EstafetteGitEvent* git);

  // .estafette.ci.manifest.v1.EstafetteDockerEvent docker = 4;
  bool has_docker() const;
  void clear_docker();
  static const int kDockerFieldNumber = 4;
  const ::estafette::ci::manifest::v1::EstafetteDockerEvent& docker() const;
  ::estafette::ci::manifest::v1::EstafetteDockerEvent* release_docker();
  ::estafette::ci::manifest::v1::EstafetteDockerEvent* mutable_docker();
  void set_allocated_docker(::estafette::ci::manifest::v1::EstafetteDockerEvent* docker);

  // .estafette.ci.manifest.v1.EstafetteCronEvent cron = 5;
  bool has_cron() const;
  void clear_cron();
  static const int kCronFieldNumber = 5;
  const ::estafette::ci::manifest::v1::EstafetteCronEvent& cron() const;
  ::estafette::ci::manifest::v1::EstafetteCronEvent* release_cron();
  ::estafette::ci::manifest::v1::EstafetteCronEvent* mutable_cron();
  void set_allocated_cron(::estafette::ci::manifest::v1::EstafetteCronEvent* cron);

  // .estafette.ci.manifest.v1.EstafettePubSubEvent pub_sub = 6;
  bool has_pub_sub() const;
  void clear_pub_sub();
  static const int kPubSubFieldNumber = 6;
  const ::estafette::ci::manifest::v1::EstafettePubSubEvent& pub_sub() const;
  ::estafette::ci::manifest::v1::EstafettePubSubEvent* release_pub_sub();
  ::estafette::ci::manifest::v1::EstafettePubSubEvent* mutable_pub_sub();
  void set_allocated_pub_sub(::estafette::ci::manifest::v1::EstafettePubSubEvent* pub_sub);

  // .estafette.ci.manifest.v1.EstafetteManualEvent manual = 7;
  bool has_manual() const;
  void clear_manual();
  static const int kManualFieldNumber = 7;
  const ::estafette::ci::manifest::v1::EstafetteManualEvent& manual() const;
  ::estafette::ci::manifest::v1::EstafetteManualEvent* release_manual();
  ::estafette::ci::manifest::v1::EstafetteManualEvent* mutable_manual();
  void set_allocated_manual(::estafette::ci::manifest::v1::EstafetteManualEvent* manual);

  // @@protoc_insertion_point(class_scope:estafette.ci.manifest.v1.EstafetteEvent)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::estafette::ci::manifest::v1::EstafettePipelineEvent* pipeline_;
  ::estafette::ci::manifest::v1::EstafetteReleaseEvent* release_;
  ::estafette::ci::manifest::v1::EstafetteGitEvent* git_;
  ::estafette::ci::manifest::v1::EstafetteDockerEvent* docker_;
  ::estafette::ci::manifest::v1::EstafetteCronEvent* cron_;
  ::estafette::ci::manifest::v1::EstafettePubSubEvent* pub_sub_;
  ::estafette::ci::manifest::v1::EstafetteManualEvent* manual_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_estafette_2fci_2fmanifest_2fv1_2festafette_5fevent_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// EstafetteEvent

// .estafette.ci.manifest.v1.EstafettePipelineEvent pipeline = 1;
inline bool EstafetteEvent::has_pipeline() const {
  return this != internal_default_instance() && pipeline_ != nullptr;
}
inline const ::estafette::ci::manifest::v1::EstafettePipelineEvent& EstafetteEvent::pipeline() const {
  const ::estafette::ci::manifest::v1::EstafettePipelineEvent* p = pipeline_;
  // @@protoc_insertion_point(field_get:estafette.ci.manifest.v1.EstafetteEvent.pipeline)
  return p != nullptr ? *p : *reinterpret_cast<const ::estafette::ci::manifest::v1::EstafettePipelineEvent*>(
      &::estafette::ci::manifest::v1::_EstafettePipelineEvent_default_instance_);
}
inline ::estafette::ci::manifest::v1::EstafettePipelineEvent* EstafetteEvent::release_pipeline() {
  // @@protoc_insertion_point(field_release:estafette.ci.manifest.v1.EstafetteEvent.pipeline)
  
  ::estafette::ci::manifest::v1::EstafettePipelineEvent* temp = pipeline_;
  pipeline_ = nullptr;
  return temp;
}
inline ::estafette::ci::manifest::v1::EstafettePipelineEvent* EstafetteEvent::mutable_pipeline() {
  
  if (pipeline_ == nullptr) {
    auto* p = CreateMaybeMessage<::estafette::ci::manifest::v1::EstafettePipelineEvent>(GetArenaNoVirtual());
    pipeline_ = p;
  }
  // @@protoc_insertion_point(field_mutable:estafette.ci.manifest.v1.EstafetteEvent.pipeline)
  return pipeline_;
}
inline void EstafetteEvent::set_allocated_pipeline(::estafette::ci::manifest::v1::EstafettePipelineEvent* pipeline) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(pipeline_);
  }
  if (pipeline) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      pipeline = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, pipeline, submessage_arena);
    }
    
  } else {
    
  }
  pipeline_ = pipeline;
  // @@protoc_insertion_point(field_set_allocated:estafette.ci.manifest.v1.EstafetteEvent.pipeline)
}

// .estafette.ci.manifest.v1.EstafetteReleaseEvent release = 2;
inline bool EstafetteEvent::has_release() const {
  return this != internal_default_instance() && release_ != nullptr;
}
inline const ::estafette::ci::manifest::v1::EstafetteReleaseEvent& EstafetteEvent::release() const {
  const ::estafette::ci::manifest::v1::EstafetteReleaseEvent* p = release_;
  // @@protoc_insertion_point(field_get:estafette.ci.manifest.v1.EstafetteEvent.release)
  return p != nullptr ? *p : *reinterpret_cast<const ::estafette::ci::manifest::v1::EstafetteReleaseEvent*>(
      &::estafette::ci::manifest::v1::_EstafetteReleaseEvent_default_instance_);
}
inline ::estafette::ci::manifest::v1::EstafetteReleaseEvent* EstafetteEvent::release_release() {
  // @@protoc_insertion_point(field_release:estafette.ci.manifest.v1.EstafetteEvent.release)
  
  ::estafette::ci::manifest::v1::EstafetteReleaseEvent* temp = release_;
  release_ = nullptr;
  return temp;
}
inline ::estafette::ci::manifest::v1::EstafetteReleaseEvent* EstafetteEvent::mutable_release() {
  
  if (release_ == nullptr) {
    auto* p = CreateMaybeMessage<::estafette::ci::manifest::v1::EstafetteReleaseEvent>(GetArenaNoVirtual());
    release_ = p;
  }
  // @@protoc_insertion_point(field_mutable:estafette.ci.manifest.v1.EstafetteEvent.release)
  return release_;
}
inline void EstafetteEvent::set_allocated_release(::estafette::ci::manifest::v1::EstafetteReleaseEvent* release) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(release_);
  }
  if (release) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      release = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, release, submessage_arena);
    }
    
  } else {
    
  }
  release_ = release;
  // @@protoc_insertion_point(field_set_allocated:estafette.ci.manifest.v1.EstafetteEvent.release)
}

// .estafette.ci.manifest.v1.EstafetteGitEvent git = 3;
inline bool EstafetteEvent::has_git() const {
  return this != internal_default_instance() && git_ != nullptr;
}
inline const ::estafette::ci::manifest::v1::EstafetteGitEvent& EstafetteEvent::git() const {
  const ::estafette::ci::manifest::v1::EstafetteGitEvent* p = git_;
  // @@protoc_insertion_point(field_get:estafette.ci.manifest.v1.EstafetteEvent.git)
  return p != nullptr ? *p : *reinterpret_cast<const ::estafette::ci::manifest::v1::EstafetteGitEvent*>(
      &::estafette::ci::manifest::v1::_EstafetteGitEvent_default_instance_);
}
inline ::estafette::ci::manifest::v1::EstafetteGitEvent* EstafetteEvent::release_git() {
  // @@protoc_insertion_point(field_release:estafette.ci.manifest.v1.EstafetteEvent.git)
  
  ::estafette::ci::manifest::v1::EstafetteGitEvent* temp = git_;
  git_ = nullptr;
  return temp;
}
inline ::estafette::ci::manifest::v1::EstafetteGitEvent* EstafetteEvent::mutable_git() {
  
  if (git_ == nullptr) {
    auto* p = CreateMaybeMessage<::estafette::ci::manifest::v1::EstafetteGitEvent>(GetArenaNoVirtual());
    git_ = p;
  }
  // @@protoc_insertion_point(field_mutable:estafette.ci.manifest.v1.EstafetteEvent.git)
  return git_;
}
inline void EstafetteEvent::set_allocated_git(::estafette::ci::manifest::v1::EstafetteGitEvent* git) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(git_);
  }
  if (git) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      git = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, git, submessage_arena);
    }
    
  } else {
    
  }
  git_ = git;
  // @@protoc_insertion_point(field_set_allocated:estafette.ci.manifest.v1.EstafetteEvent.git)
}

// .estafette.ci.manifest.v1.EstafetteDockerEvent docker = 4;
inline bool EstafetteEvent::has_docker() const {
  return this != internal_default_instance() && docker_ != nullptr;
}
inline const ::estafette::ci::manifest::v1::EstafetteDockerEvent& EstafetteEvent::docker() const {
  const ::estafette::ci::manifest::v1::EstafetteDockerEvent* p = docker_;
  // @@protoc_insertion_point(field_get:estafette.ci.manifest.v1.EstafetteEvent.docker)
  return p != nullptr ? *p : *reinterpret_cast<const ::estafette::ci::manifest::v1::EstafetteDockerEvent*>(
      &::estafette::ci::manifest::v1::_EstafetteDockerEvent_default_instance_);
}
inline ::estafette::ci::manifest::v1::EstafetteDockerEvent* EstafetteEvent::release_docker() {
  // @@protoc_insertion_point(field_release:estafette.ci.manifest.v1.EstafetteEvent.docker)
  
  ::estafette::ci::manifest::v1::EstafetteDockerEvent* temp = docker_;
  docker_ = nullptr;
  return temp;
}
inline ::estafette::ci::manifest::v1::EstafetteDockerEvent* EstafetteEvent::mutable_docker() {
  
  if (docker_ == nullptr) {
    auto* p = CreateMaybeMessage<::estafette::ci::manifest::v1::EstafetteDockerEvent>(GetArenaNoVirtual());
    docker_ = p;
  }
  // @@protoc_insertion_point(field_mutable:estafette.ci.manifest.v1.EstafetteEvent.docker)
  return docker_;
}
inline void EstafetteEvent::set_allocated_docker(::estafette::ci::manifest::v1::EstafetteDockerEvent* docker) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(docker_);
  }
  if (docker) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      docker = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, docker, submessage_arena);
    }
    
  } else {
    
  }
  docker_ = docker;
  // @@protoc_insertion_point(field_set_allocated:estafette.ci.manifest.v1.EstafetteEvent.docker)
}

// .estafette.ci.manifest.v1.EstafetteCronEvent cron = 5;
inline bool EstafetteEvent::has_cron() const {
  return this != internal_default_instance() && cron_ != nullptr;
}
inline const ::estafette::ci::manifest::v1::EstafetteCronEvent& EstafetteEvent::cron() const {
  const ::estafette::ci::manifest::v1::EstafetteCronEvent* p = cron_;
  // @@protoc_insertion_point(field_get:estafette.ci.manifest.v1.EstafetteEvent.cron)
  return p != nullptr ? *p : *reinterpret_cast<const ::estafette::ci::manifest::v1::EstafetteCronEvent*>(
      &::estafette::ci::manifest::v1::_EstafetteCronEvent_default_instance_);
}
inline ::estafette::ci::manifest::v1::EstafetteCronEvent* EstafetteEvent::release_cron() {
  // @@protoc_insertion_point(field_release:estafette.ci.manifest.v1.EstafetteEvent.cron)
  
  ::estafette::ci::manifest::v1::EstafetteCronEvent* temp = cron_;
  cron_ = nullptr;
  return temp;
}
inline ::estafette::ci::manifest::v1::EstafetteCronEvent* EstafetteEvent::mutable_cron() {
  
  if (cron_ == nullptr) {
    auto* p = CreateMaybeMessage<::estafette::ci::manifest::v1::EstafetteCronEvent>(GetArenaNoVirtual());
    cron_ = p;
  }
  // @@protoc_insertion_point(field_mutable:estafette.ci.manifest.v1.EstafetteEvent.cron)
  return cron_;
}
inline void EstafetteEvent::set_allocated_cron(::estafette::ci::manifest::v1::EstafetteCronEvent* cron) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(cron_);
  }
  if (cron) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      cron = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, cron, submessage_arena);
    }
    
  } else {
    
  }
  cron_ = cron;
  // @@protoc_insertion_point(field_set_allocated:estafette.ci.manifest.v1.EstafetteEvent.cron)
}

// .estafette.ci.manifest.v1.EstafettePubSubEvent pub_sub = 6;
inline bool EstafetteEvent::has_pub_sub() const {
  return this != internal_default_instance() && pub_sub_ != nullptr;
}
inline const ::estafette::ci::manifest::v1::EstafettePubSubEvent& EstafetteEvent::pub_sub() const {
  const ::estafette::ci::manifest::v1::EstafettePubSubEvent* p = pub_sub_;
  // @@protoc_insertion_point(field_get:estafette.ci.manifest.v1.EstafetteEvent.pub_sub)
  return p != nullptr ? *p : *reinterpret_cast<const ::estafette::ci::manifest::v1::EstafettePubSubEvent*>(
      &::estafette::ci::manifest::v1::_EstafettePubSubEvent_default_instance_);
}
inline ::estafette::ci::manifest::v1::EstafettePubSubEvent* EstafetteEvent::release_pub_sub() {
  // @@protoc_insertion_point(field_release:estafette.ci.manifest.v1.EstafetteEvent.pub_sub)
  
  ::estafette::ci::manifest::v1::EstafettePubSubEvent* temp = pub_sub_;
  pub_sub_ = nullptr;
  return temp;
}
inline ::estafette::ci::manifest::v1::EstafettePubSubEvent* EstafetteEvent::mutable_pub_sub() {
  
  if (pub_sub_ == nullptr) {
    auto* p = CreateMaybeMessage<::estafette::ci::manifest::v1::EstafettePubSubEvent>(GetArenaNoVirtual());
    pub_sub_ = p;
  }
  // @@protoc_insertion_point(field_mutable:estafette.ci.manifest.v1.EstafetteEvent.pub_sub)
  return pub_sub_;
}
inline void EstafetteEvent::set_allocated_pub_sub(::estafette::ci::manifest::v1::EstafettePubSubEvent* pub_sub) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(pub_sub_);
  }
  if (pub_sub) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      pub_sub = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, pub_sub, submessage_arena);
    }
    
  } else {
    
  }
  pub_sub_ = pub_sub;
  // @@protoc_insertion_point(field_set_allocated:estafette.ci.manifest.v1.EstafetteEvent.pub_sub)
}

// .estafette.ci.manifest.v1.EstafetteManualEvent manual = 7;
inline bool EstafetteEvent::has_manual() const {
  return this != internal_default_instance() && manual_ != nullptr;
}
inline const ::estafette::ci::manifest::v1::EstafetteManualEvent& EstafetteEvent::manual() const {
  const ::estafette::ci::manifest::v1::EstafetteManualEvent* p = manual_;
  // @@protoc_insertion_point(field_get:estafette.ci.manifest.v1.EstafetteEvent.manual)
  return p != nullptr ? *p : *reinterpret_cast<const ::estafette::ci::manifest::v1::EstafetteManualEvent*>(
      &::estafette::ci::manifest::v1::_EstafetteManualEvent_default_instance_);
}
inline ::estafette::ci::manifest::v1::EstafetteManualEvent* EstafetteEvent::release_manual() {
  // @@protoc_insertion_point(field_release:estafette.ci.manifest.v1.EstafetteEvent.manual)
  
  ::estafette::ci::manifest::v1::EstafetteManualEvent* temp = manual_;
  manual_ = nullptr;
  return temp;
}
inline ::estafette::ci::manifest::v1::EstafetteManualEvent* EstafetteEvent::mutable_manual() {
  
  if (manual_ == nullptr) {
    auto* p = CreateMaybeMessage<::estafette::ci::manifest::v1::EstafetteManualEvent>(GetArenaNoVirtual());
    manual_ = p;
  }
  // @@protoc_insertion_point(field_mutable:estafette.ci.manifest.v1.EstafetteEvent.manual)
  return manual_;
}
inline void EstafetteEvent::set_allocated_manual(::estafette::ci::manifest::v1::EstafetteManualEvent* manual) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(manual_);
  }
  if (manual) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      manual = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, manual, submessage_arena);
    }
    
  } else {
    
  }
  manual_ = manual;
  // @@protoc_insertion_point(field_set_allocated:estafette.ci.manifest.v1.EstafetteEvent.manual)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_estafette_2fci_2fmanifest_2fv1_2festafette_5fevent_2eproto
