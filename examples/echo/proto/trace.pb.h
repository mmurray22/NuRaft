// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: trace.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_trace_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_trace_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012004 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_trace_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_trace_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_trace_2eproto;
namespace trace {
class MessageInfo;
class MessageInfoDefaultTypeInternal;
extern MessageInfoDefaultTypeInternal _MessageInfo_default_instance_;
class StartTrace;
class StartTraceDefaultTypeInternal;
extern StartTraceDefaultTypeInternal _StartTrace_default_instance_;
class TraceRecord;
class TraceRecordDefaultTypeInternal;
extern TraceRecordDefaultTypeInternal _TraceRecord_default_instance_;
}  // namespace trace
PROTOBUF_NAMESPACE_OPEN
template<> ::trace::MessageInfo* Arena::CreateMaybeMessage<::trace::MessageInfo>(Arena*);
template<> ::trace::StartTrace* Arena::CreateMaybeMessage<::trace::StartTrace>(Arena*);
template<> ::trace::TraceRecord* Arena::CreateMaybeMessage<::trace::TraceRecord>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace trace {

enum OrderingType : int {
  TIME = 0,
  DEPENDENCY = 1,
  WEIGHT = 2,
  NONE = 3,
  OrderingType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  OrderingType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool OrderingType_IsValid(int value);
constexpr OrderingType OrderingType_MIN = TIME;
constexpr OrderingType OrderingType_MAX = NONE;
constexpr int OrderingType_ARRAYSIZE = OrderingType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* OrderingType_descriptor();
template<typename T>
inline const std::string& OrderingType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, OrderingType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function OrderingType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    OrderingType_descriptor(), enum_t_value);
}
inline bool OrderingType_Parse(
    const std::string& name, OrderingType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<OrderingType>(
    OrderingType_descriptor(), name, value);
}
enum EntryType : int {
  RECEIVE = 0,
  ASSIGN = 1,
  ACCEPT = 2,
  MOOT = 3,
  EntryType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  EntryType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool EntryType_IsValid(int value);
constexpr EntryType EntryType_MIN = RECEIVE;
constexpr EntryType EntryType_MAX = MOOT;
constexpr int EntryType_ARRAYSIZE = EntryType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EntryType_descriptor();
template<typename T>
inline const std::string& EntryType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, EntryType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function EntryType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    EntryType_descriptor(), enum_t_value);
}
inline bool EntryType_Parse(
    const std::string& name, EntryType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<EntryType>(
    EntryType_descriptor(), name, value);
}
// ===================================================================

class StartTrace PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:trace.StartTrace) */ {
 public:
  inline StartTrace() : StartTrace(nullptr) {};
  virtual ~StartTrace();

  StartTrace(const StartTrace& from);
  StartTrace(StartTrace&& from) noexcept
    : StartTrace() {
    *this = ::std::move(from);
  }

  inline StartTrace& operator=(const StartTrace& from) {
    CopyFrom(from);
    return *this;
  }
  inline StartTrace& operator=(StartTrace&& from) noexcept {
    if (GetArena() == from.GetArena()) {
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
  static const StartTrace& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const StartTrace* internal_default_instance() {
    return reinterpret_cast<const StartTrace*>(
               &_StartTrace_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(StartTrace& a, StartTrace& b) {
    a.Swap(&b);
  }
  inline void Swap(StartTrace* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(StartTrace* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline StartTrace* New() const final {
    return CreateMaybeMessage<StartTrace>(nullptr);
  }

  StartTrace* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<StartTrace>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const StartTrace& from);
  void MergeFrom(const StartTrace& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(StartTrace* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "trace.StartTrace";
  }
  protected:
  explicit StartTrace(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_trace_2eproto);
    return ::descriptor_table_trace_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNodeIdFieldNumber = 1,
    kStartTimeFieldNumber = 3,
    kTypeFieldNumber = 2,
  };
  // uint64 node_id = 1;
  void clear_node_id();
  ::PROTOBUF_NAMESPACE_ID::uint64 node_id() const;
  void set_node_id(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_node_id() const;
  void _internal_set_node_id(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // uint64 start_time = 3;
  void clear_start_time();
  ::PROTOBUF_NAMESPACE_ID::uint64 start_time() const;
  void set_start_time(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_start_time() const;
  void _internal_set_start_time(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // .trace.OrderingType type = 2;
  void clear_type();
  ::trace::OrderingType type() const;
  void set_type(::trace::OrderingType value);
  private:
  ::trace::OrderingType _internal_type() const;
  void _internal_set_type(::trace::OrderingType value);
  public:

  // @@protoc_insertion_point(class_scope:trace.StartTrace)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::uint64 node_id_;
  ::PROTOBUF_NAMESPACE_ID::uint64 start_time_;
  int type_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_trace_2eproto;
};
// -------------------------------------------------------------------

class TraceRecord PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:trace.TraceRecord) */ {
 public:
  inline TraceRecord() : TraceRecord(nullptr) {};
  virtual ~TraceRecord();

  TraceRecord(const TraceRecord& from);
  TraceRecord(TraceRecord&& from) noexcept
    : TraceRecord() {
    *this = ::std::move(from);
  }

  inline TraceRecord& operator=(const TraceRecord& from) {
    CopyFrom(from);
    return *this;
  }
  inline TraceRecord& operator=(TraceRecord&& from) noexcept {
    if (GetArena() == from.GetArena()) {
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
  static const TraceRecord& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TraceRecord* internal_default_instance() {
    return reinterpret_cast<const TraceRecord*>(
               &_TraceRecord_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(TraceRecord& a, TraceRecord& b) {
    a.Swap(&b);
  }
  inline void Swap(TraceRecord* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(TraceRecord* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline TraceRecord* New() const final {
    return CreateMaybeMessage<TraceRecord>(nullptr);
  }

  TraceRecord* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<TraceRecord>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const TraceRecord& from);
  void MergeFrom(const TraceRecord& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(TraceRecord* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "trace.TraceRecord";
  }
  protected:
  explicit TraceRecord(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_trace_2eproto);
    return ::descriptor_table_trace_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMsgInfoFieldNumber = 5,
    kTraceTimeFieldNumber = 1,
    kLeaderIdFieldNumber = 3,
    kThreadIdFieldNumber = 4,
    kTypeFieldNumber = 2,
  };
  // .trace.MessageInfo msg_info = 5;
  bool has_msg_info() const;
  private:
  bool _internal_has_msg_info() const;
  public:
  void clear_msg_info();
  const ::trace::MessageInfo& msg_info() const;
  ::trace::MessageInfo* release_msg_info();
  ::trace::MessageInfo* mutable_msg_info();
  void set_allocated_msg_info(::trace::MessageInfo* msg_info);
  private:
  const ::trace::MessageInfo& _internal_msg_info() const;
  ::trace::MessageInfo* _internal_mutable_msg_info();
  public:
  void unsafe_arena_set_allocated_msg_info(
      ::trace::MessageInfo* msg_info);
  ::trace::MessageInfo* unsafe_arena_release_msg_info();

  // uint64 trace_time = 1;
  void clear_trace_time();
  ::PROTOBUF_NAMESPACE_ID::uint64 trace_time() const;
  void set_trace_time(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_trace_time() const;
  void _internal_set_trace_time(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // uint64 leader_id = 3;
  void clear_leader_id();
  ::PROTOBUF_NAMESPACE_ID::uint64 leader_id() const;
  void set_leader_id(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_leader_id() const;
  void _internal_set_leader_id(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // uint64 thread_id = 4;
  bool has_thread_id() const;
  private:
  bool _internal_has_thread_id() const;
  public:
  void clear_thread_id();
  ::PROTOBUF_NAMESPACE_ID::uint64 thread_id() const;
  void set_thread_id(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_thread_id() const;
  void _internal_set_thread_id(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // .trace.EntryType type = 2;
  void clear_type();
  ::trace::EntryType type() const;
  void set_type(::trace::EntryType value);
  private:
  ::trace::EntryType _internal_type() const;
  void _internal_set_type(::trace::EntryType value);
  public:

  // @@protoc_insertion_point(class_scope:trace.TraceRecord)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::trace::MessageInfo* msg_info_;
  ::PROTOBUF_NAMESPACE_ID::uint64 trace_time_;
  ::PROTOBUF_NAMESPACE_ID::uint64 leader_id_;
  ::PROTOBUF_NAMESPACE_ID::uint64 thread_id_;
  int type_;
  friend struct ::TableStruct_trace_2eproto;
};
// -------------------------------------------------------------------

class MessageInfo PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:trace.MessageInfo) */ {
 public:
  inline MessageInfo() : MessageInfo(nullptr) {};
  virtual ~MessageInfo();

  MessageInfo(const MessageInfo& from);
  MessageInfo(MessageInfo&& from) noexcept
    : MessageInfo() {
    *this = ::std::move(from);
  }

  inline MessageInfo& operator=(const MessageInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline MessageInfo& operator=(MessageInfo&& from) noexcept {
    if (GetArena() == from.GetArena()) {
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
  static const MessageInfo& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MessageInfo* internal_default_instance() {
    return reinterpret_cast<const MessageInfo*>(
               &_MessageInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(MessageInfo& a, MessageInfo& b) {
    a.Swap(&b);
  }
  inline void Swap(MessageInfo* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(MessageInfo* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline MessageInfo* New() const final {
    return CreateMaybeMessage<MessageInfo>(nullptr);
  }

  MessageInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<MessageInfo>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const MessageInfo& from);
  void MergeFrom(const MessageInfo& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(MessageInfo* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "trace.MessageInfo";
  }
  protected:
  explicit MessageInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_trace_2eproto);
    return ::descriptor_table_trace_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMsgFieldNumber = 1,
    kSlotFieldNumber = 2,
    kClientIdFieldNumber = 3,
  };
  // string msg = 1;
  void clear_msg();
  const std::string& msg() const;
  void set_msg(const std::string& value);
  void set_msg(std::string&& value);
  void set_msg(const char* value);
  void set_msg(const char* value, size_t size);
  std::string* mutable_msg();
  std::string* release_msg();
  void set_allocated_msg(std::string* msg);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_msg();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_msg(
      std::string* msg);
  private:
  const std::string& _internal_msg() const;
  void _internal_set_msg(const std::string& value);
  std::string* _internal_mutable_msg();
  public:

  // uint64 slot = 2;
  void clear_slot();
  ::PROTOBUF_NAMESPACE_ID::uint64 slot() const;
  void set_slot(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_slot() const;
  void _internal_set_slot(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // uint64 client_id = 3;
  void clear_client_id();
  ::PROTOBUF_NAMESPACE_ID::uint64 client_id() const;
  void set_client_id(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_client_id() const;
  void _internal_set_client_id(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // @@protoc_insertion_point(class_scope:trace.MessageInfo)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr msg_;
  ::PROTOBUF_NAMESPACE_ID::uint64 slot_;
  ::PROTOBUF_NAMESPACE_ID::uint64 client_id_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_trace_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// StartTrace

// uint64 node_id = 1;
inline void StartTrace::clear_node_id() {
  node_id_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 StartTrace::_internal_node_id() const {
  return node_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 StartTrace::node_id() const {
  // @@protoc_insertion_point(field_get:trace.StartTrace.node_id)
  return _internal_node_id();
}
inline void StartTrace::_internal_set_node_id(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  node_id_ = value;
}
inline void StartTrace::set_node_id(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_node_id(value);
  // @@protoc_insertion_point(field_set:trace.StartTrace.node_id)
}

// .trace.OrderingType type = 2;
inline void StartTrace::clear_type() {
  type_ = 0;
}
inline ::trace::OrderingType StartTrace::_internal_type() const {
  return static_cast< ::trace::OrderingType >(type_);
}
inline ::trace::OrderingType StartTrace::type() const {
  // @@protoc_insertion_point(field_get:trace.StartTrace.type)
  return _internal_type();
}
inline void StartTrace::_internal_set_type(::trace::OrderingType value) {
  
  type_ = value;
}
inline void StartTrace::set_type(::trace::OrderingType value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:trace.StartTrace.type)
}

// uint64 start_time = 3;
inline void StartTrace::clear_start_time() {
  start_time_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 StartTrace::_internal_start_time() const {
  return start_time_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 StartTrace::start_time() const {
  // @@protoc_insertion_point(field_get:trace.StartTrace.start_time)
  return _internal_start_time();
}
inline void StartTrace::_internal_set_start_time(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  start_time_ = value;
}
inline void StartTrace::set_start_time(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_start_time(value);
  // @@protoc_insertion_point(field_set:trace.StartTrace.start_time)
}

// -------------------------------------------------------------------

// TraceRecord

// uint64 trace_time = 1;
inline void TraceRecord::clear_trace_time() {
  trace_time_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 TraceRecord::_internal_trace_time() const {
  return trace_time_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 TraceRecord::trace_time() const {
  // @@protoc_insertion_point(field_get:trace.TraceRecord.trace_time)
  return _internal_trace_time();
}
inline void TraceRecord::_internal_set_trace_time(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  trace_time_ = value;
}
inline void TraceRecord::set_trace_time(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_trace_time(value);
  // @@protoc_insertion_point(field_set:trace.TraceRecord.trace_time)
}

// .trace.EntryType type = 2;
inline void TraceRecord::clear_type() {
  type_ = 0;
}
inline ::trace::EntryType TraceRecord::_internal_type() const {
  return static_cast< ::trace::EntryType >(type_);
}
inline ::trace::EntryType TraceRecord::type() const {
  // @@protoc_insertion_point(field_get:trace.TraceRecord.type)
  return _internal_type();
}
inline void TraceRecord::_internal_set_type(::trace::EntryType value) {
  
  type_ = value;
}
inline void TraceRecord::set_type(::trace::EntryType value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:trace.TraceRecord.type)
}

// uint64 leader_id = 3;
inline void TraceRecord::clear_leader_id() {
  leader_id_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 TraceRecord::_internal_leader_id() const {
  return leader_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 TraceRecord::leader_id() const {
  // @@protoc_insertion_point(field_get:trace.TraceRecord.leader_id)
  return _internal_leader_id();
}
inline void TraceRecord::_internal_set_leader_id(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  leader_id_ = value;
}
inline void TraceRecord::set_leader_id(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_leader_id(value);
  // @@protoc_insertion_point(field_set:trace.TraceRecord.leader_id)
}

// uint64 thread_id = 4;
inline bool TraceRecord::_internal_has_thread_id() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool TraceRecord::has_thread_id() const {
  return _internal_has_thread_id();
}
inline void TraceRecord::clear_thread_id() {
  thread_id_ = PROTOBUF_ULONGLONG(0);
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 TraceRecord::_internal_thread_id() const {
  return thread_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 TraceRecord::thread_id() const {
  // @@protoc_insertion_point(field_get:trace.TraceRecord.thread_id)
  return _internal_thread_id();
}
inline void TraceRecord::_internal_set_thread_id(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _has_bits_[0] |= 0x00000001u;
  thread_id_ = value;
}
inline void TraceRecord::set_thread_id(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_thread_id(value);
  // @@protoc_insertion_point(field_set:trace.TraceRecord.thread_id)
}

// .trace.MessageInfo msg_info = 5;
inline bool TraceRecord::_internal_has_msg_info() const {
  return this != internal_default_instance() && msg_info_ != nullptr;
}
inline bool TraceRecord::has_msg_info() const {
  return _internal_has_msg_info();
}
inline void TraceRecord::clear_msg_info() {
  if (GetArena() == nullptr && msg_info_ != nullptr) {
    delete msg_info_;
  }
  msg_info_ = nullptr;
}
inline const ::trace::MessageInfo& TraceRecord::_internal_msg_info() const {
  const ::trace::MessageInfo* p = msg_info_;
  return p != nullptr ? *p : *reinterpret_cast<const ::trace::MessageInfo*>(
      &::trace::_MessageInfo_default_instance_);
}
inline const ::trace::MessageInfo& TraceRecord::msg_info() const {
  // @@protoc_insertion_point(field_get:trace.TraceRecord.msg_info)
  return _internal_msg_info();
}
inline void TraceRecord::unsafe_arena_set_allocated_msg_info(
    ::trace::MessageInfo* msg_info) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(msg_info_);
  }
  msg_info_ = msg_info;
  if (msg_info) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:trace.TraceRecord.msg_info)
}
inline ::trace::MessageInfo* TraceRecord::release_msg_info() {
  auto temp = unsafe_arena_release_msg_info();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::trace::MessageInfo* TraceRecord::unsafe_arena_release_msg_info() {
  // @@protoc_insertion_point(field_release:trace.TraceRecord.msg_info)
  
  ::trace::MessageInfo* temp = msg_info_;
  msg_info_ = nullptr;
  return temp;
}
inline ::trace::MessageInfo* TraceRecord::_internal_mutable_msg_info() {
  
  if (msg_info_ == nullptr) {
    auto* p = CreateMaybeMessage<::trace::MessageInfo>(GetArena());
    msg_info_ = p;
  }
  return msg_info_;
}
inline ::trace::MessageInfo* TraceRecord::mutable_msg_info() {
  // @@protoc_insertion_point(field_mutable:trace.TraceRecord.msg_info)
  return _internal_mutable_msg_info();
}
inline void TraceRecord::set_allocated_msg_info(::trace::MessageInfo* msg_info) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete msg_info_;
  }
  if (msg_info) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      ::PROTOBUF_NAMESPACE_ID::Arena::GetArena(msg_info);
    if (message_arena != submessage_arena) {
      msg_info = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, msg_info, submessage_arena);
    }
    
  } else {
    
  }
  msg_info_ = msg_info;
  // @@protoc_insertion_point(field_set_allocated:trace.TraceRecord.msg_info)
}

// -------------------------------------------------------------------

// MessageInfo

// string msg = 1;
inline void MessageInfo::clear_msg() {
  msg_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& MessageInfo::msg() const {
  // @@protoc_insertion_point(field_get:trace.MessageInfo.msg)
  return _internal_msg();
}
inline void MessageInfo::set_msg(const std::string& value) {
  _internal_set_msg(value);
  // @@protoc_insertion_point(field_set:trace.MessageInfo.msg)
}
inline std::string* MessageInfo::mutable_msg() {
  // @@protoc_insertion_point(field_mutable:trace.MessageInfo.msg)
  return _internal_mutable_msg();
}
inline const std::string& MessageInfo::_internal_msg() const {
  return msg_.Get();
}
inline void MessageInfo::_internal_set_msg(const std::string& value) {
  
  msg_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void MessageInfo::set_msg(std::string&& value) {
  
  msg_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:trace.MessageInfo.msg)
}
inline void MessageInfo::set_msg(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  msg_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:trace.MessageInfo.msg)
}
inline void MessageInfo::set_msg(const char* value,
    size_t size) {
  
  msg_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:trace.MessageInfo.msg)
}
inline std::string* MessageInfo::_internal_mutable_msg() {
  
  return msg_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* MessageInfo::release_msg() {
  // @@protoc_insertion_point(field_release:trace.MessageInfo.msg)
  return msg_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void MessageInfo::set_allocated_msg(std::string* msg) {
  if (msg != nullptr) {
    
  } else {
    
  }
  msg_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), msg,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:trace.MessageInfo.msg)
}
inline std::string* MessageInfo::unsafe_arena_release_msg() {
  // @@protoc_insertion_point(field_unsafe_arena_release:trace.MessageInfo.msg)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return msg_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void MessageInfo::unsafe_arena_set_allocated_msg(
    std::string* msg) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (msg != nullptr) {
    
  } else {
    
  }
  msg_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      msg, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:trace.MessageInfo.msg)
}

// uint64 slot = 2;
inline void MessageInfo::clear_slot() {
  slot_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 MessageInfo::_internal_slot() const {
  return slot_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 MessageInfo::slot() const {
  // @@protoc_insertion_point(field_get:trace.MessageInfo.slot)
  return _internal_slot();
}
inline void MessageInfo::_internal_set_slot(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  slot_ = value;
}
inline void MessageInfo::set_slot(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_slot(value);
  // @@protoc_insertion_point(field_set:trace.MessageInfo.slot)
}

// uint64 client_id = 3;
inline void MessageInfo::clear_client_id() {
  client_id_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 MessageInfo::_internal_client_id() const {
  return client_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 MessageInfo::client_id() const {
  // @@protoc_insertion_point(field_get:trace.MessageInfo.client_id)
  return _internal_client_id();
}
inline void MessageInfo::_internal_set_client_id(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  client_id_ = value;
}
inline void MessageInfo::set_client_id(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_client_id(value);
  // @@protoc_insertion_point(field_set:trace.MessageInfo.client_id)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace trace

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::trace::OrderingType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::trace::OrderingType>() {
  return ::trace::OrderingType_descriptor();
}
template <> struct is_proto_enum< ::trace::EntryType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::trace::EntryType>() {
  return ::trace::EntryType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_trace_2eproto
