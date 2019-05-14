// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: messages.proto

#ifndef PROTOBUF_INCLUDED_messages_2eproto
#define PROTOBUF_INCLUDED_messages_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3007001 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_messages_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_messages_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_messages_2eproto();
class Message;
class MessageDefaultTypeInternal;
extern MessageDefaultTypeInternal _Message_default_instance_;
class TypeA;
class TypeADefaultTypeInternal;
extern TypeADefaultTypeInternal _TypeA_default_instance_;
class TypeB;
class TypeBDefaultTypeInternal;
extern TypeBDefaultTypeInternal _TypeB_default_instance_;
namespace google {
namespace protobuf {
template<> ::Message* Arena::CreateMaybeMessage<::Message>(Arena*);
template<> ::TypeA* Arena::CreateMaybeMessage<::TypeA>(Arena*);
template<> ::TypeB* Arena::CreateMaybeMessage<::TypeB>(Arena*);
}  // namespace protobuf
}  // namespace google

// ===================================================================

class TypeA :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:TypeA) */ {
 public:
  TypeA();
  virtual ~TypeA();

  TypeA(const TypeA& from);

  inline TypeA& operator=(const TypeA& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  TypeA(TypeA&& from) noexcept
    : TypeA() {
    *this = ::std::move(from);
  }

  inline TypeA& operator=(TypeA&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const TypeA& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TypeA* internal_default_instance() {
    return reinterpret_cast<const TypeA*>(
               &_TypeA_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(TypeA* other);
  friend void swap(TypeA& a, TypeA& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline TypeA* New() const final {
    return CreateMaybeMessage<TypeA>(nullptr);
  }

  TypeA* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<TypeA>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const TypeA& from);
  void MergeFrom(const TypeA& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(TypeA* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string field1 = 1;
  void clear_field1();
  static const int kField1FieldNumber = 1;
  const ::std::string& field1() const;
  void set_field1(const ::std::string& value);
  #if LANG_CXX11
  void set_field1(::std::string&& value);
  #endif
  void set_field1(const char* value);
  void set_field1(const char* value, size_t size);
  ::std::string* mutable_field1();
  ::std::string* release_field1();
  void set_allocated_field1(::std::string* field1);

  // int32 field2 = 2;
  void clear_field2();
  static const int kField2FieldNumber = 2;
  ::google::protobuf::int32 field2() const;
  void set_field2(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:TypeA)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr field1_;
  ::google::protobuf::int32 field2_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_messages_2eproto;
};
// -------------------------------------------------------------------

class TypeB :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:TypeB) */ {
 public:
  TypeB();
  virtual ~TypeB();

  TypeB(const TypeB& from);

  inline TypeB& operator=(const TypeB& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  TypeB(TypeB&& from) noexcept
    : TypeB() {
    *this = ::std::move(from);
  }

  inline TypeB& operator=(TypeB&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const TypeB& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TypeB* internal_default_instance() {
    return reinterpret_cast<const TypeB*>(
               &_TypeB_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(TypeB* other);
  friend void swap(TypeB& a, TypeB& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline TypeB* New() const final {
    return CreateMaybeMessage<TypeB>(nullptr);
  }

  TypeB* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<TypeB>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const TypeB& from);
  void MergeFrom(const TypeB& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(TypeB* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // int32 field1 = 1;
  void clear_field1();
  static const int kField1FieldNumber = 1;
  ::google::protobuf::int32 field1() const;
  void set_field1(::google::protobuf::int32 value);

  // int32 field2 = 2;
  void clear_field2();
  static const int kField2FieldNumber = 2;
  ::google::protobuf::int32 field2() const;
  void set_field2(::google::protobuf::int32 value);

  // int32 field3 = 3;
  void clear_field3();
  static const int kField3FieldNumber = 3;
  ::google::protobuf::int32 field3() const;
  void set_field3(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:TypeB)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 field1_;
  ::google::protobuf::int32 field2_;
  ::google::protobuf::int32 field3_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_messages_2eproto;
};
// -------------------------------------------------------------------

class Message :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Message) */ {
 public:
  Message();
  virtual ~Message();

  Message(const Message& from);

  inline Message& operator=(const Message& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Message(Message&& from) noexcept
    : Message() {
    *this = ::std::move(from);
  }

  inline Message& operator=(Message&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const Message& default_instance();

  enum MessagesCase {
    kA = 1,
    kB = 2,
    MESSAGES_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Message* internal_default_instance() {
    return reinterpret_cast<const Message*>(
               &_Message_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(Message* other);
  friend void swap(Message& a, Message& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Message* New() const final {
    return CreateMaybeMessage<Message>(nullptr);
  }

  Message* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Message>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Message& from);
  void MergeFrom(const Message& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Message* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .TypeA a = 1;
  bool has_a() const;
  void clear_a();
  static const int kAFieldNumber = 1;
  const ::TypeA& a() const;
  ::TypeA* release_a();
  ::TypeA* mutable_a();
  void set_allocated_a(::TypeA* a);

  // .TypeB b = 2;
  bool has_b() const;
  void clear_b();
  static const int kBFieldNumber = 2;
  const ::TypeB& b() const;
  ::TypeB* release_b();
  ::TypeB* mutable_b();
  void set_allocated_b(::TypeB* b);

  void clear_messages();
  MessagesCase messages_case() const;
  // @@protoc_insertion_point(class_scope:Message)
 private:
  class HasBitSetters;
  void set_has_a();
  void set_has_b();

  inline bool has_messages() const;
  inline void clear_has_messages();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  union MessagesUnion {
    MessagesUnion() {}
    ::TypeA* a_;
    ::TypeB* b_;
  } messages_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend struct ::TableStruct_messages_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TypeA

// string field1 = 1;
inline void TypeA::clear_field1() {
  field1_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& TypeA::field1() const {
  // @@protoc_insertion_point(field_get:TypeA.field1)
  return field1_.GetNoArena();
}
inline void TypeA::set_field1(const ::std::string& value) {
  
  field1_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:TypeA.field1)
}
#if LANG_CXX11
inline void TypeA::set_field1(::std::string&& value) {
  
  field1_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:TypeA.field1)
}
#endif
inline void TypeA::set_field1(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  field1_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:TypeA.field1)
}
inline void TypeA::set_field1(const char* value, size_t size) {
  
  field1_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:TypeA.field1)
}
inline ::std::string* TypeA::mutable_field1() {
  
  // @@protoc_insertion_point(field_mutable:TypeA.field1)
  return field1_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* TypeA::release_field1() {
  // @@protoc_insertion_point(field_release:TypeA.field1)
  
  return field1_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TypeA::set_allocated_field1(::std::string* field1) {
  if (field1 != nullptr) {
    
  } else {
    
  }
  field1_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), field1);
  // @@protoc_insertion_point(field_set_allocated:TypeA.field1)
}

// int32 field2 = 2;
inline void TypeA::clear_field2() {
  field2_ = 0;
}
inline ::google::protobuf::int32 TypeA::field2() const {
  // @@protoc_insertion_point(field_get:TypeA.field2)
  return field2_;
}
inline void TypeA::set_field2(::google::protobuf::int32 value) {
  
  field2_ = value;
  // @@protoc_insertion_point(field_set:TypeA.field2)
}

// -------------------------------------------------------------------

// TypeB

// int32 field1 = 1;
inline void TypeB::clear_field1() {
  field1_ = 0;
}
inline ::google::protobuf::int32 TypeB::field1() const {
  // @@protoc_insertion_point(field_get:TypeB.field1)
  return field1_;
}
inline void TypeB::set_field1(::google::protobuf::int32 value) {
  
  field1_ = value;
  // @@protoc_insertion_point(field_set:TypeB.field1)
}

// int32 field2 = 2;
inline void TypeB::clear_field2() {
  field2_ = 0;
}
inline ::google::protobuf::int32 TypeB::field2() const {
  // @@protoc_insertion_point(field_get:TypeB.field2)
  return field2_;
}
inline void TypeB::set_field2(::google::protobuf::int32 value) {
  
  field2_ = value;
  // @@protoc_insertion_point(field_set:TypeB.field2)
}

// int32 field3 = 3;
inline void TypeB::clear_field3() {
  field3_ = 0;
}
inline ::google::protobuf::int32 TypeB::field3() const {
  // @@protoc_insertion_point(field_get:TypeB.field3)
  return field3_;
}
inline void TypeB::set_field3(::google::protobuf::int32 value) {
  
  field3_ = value;
  // @@protoc_insertion_point(field_set:TypeB.field3)
}

// -------------------------------------------------------------------

// Message

// .TypeA a = 1;
inline bool Message::has_a() const {
  return messages_case() == kA;
}
inline void Message::set_has_a() {
  _oneof_case_[0] = kA;
}
inline void Message::clear_a() {
  if (has_a()) {
    delete messages_.a_;
    clear_has_messages();
  }
}
inline ::TypeA* Message::release_a() {
  // @@protoc_insertion_point(field_release:Message.a)
  if (has_a()) {
    clear_has_messages();
      ::TypeA* temp = messages_.a_;
    messages_.a_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::TypeA& Message::a() const {
  // @@protoc_insertion_point(field_get:Message.a)
  return has_a()
      ? *messages_.a_
      : *reinterpret_cast< ::TypeA*>(&::_TypeA_default_instance_);
}
inline ::TypeA* Message::mutable_a() {
  if (!has_a()) {
    clear_messages();
    set_has_a();
    messages_.a_ = CreateMaybeMessage< ::TypeA >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:Message.a)
  return messages_.a_;
}

// .TypeB b = 2;
inline bool Message::has_b() const {
  return messages_case() == kB;
}
inline void Message::set_has_b() {
  _oneof_case_[0] = kB;
}
inline void Message::clear_b() {
  if (has_b()) {
    delete messages_.b_;
    clear_has_messages();
  }
}
inline ::TypeB* Message::release_b() {
  // @@protoc_insertion_point(field_release:Message.b)
  if (has_b()) {
    clear_has_messages();
      ::TypeB* temp = messages_.b_;
    messages_.b_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::TypeB& Message::b() const {
  // @@protoc_insertion_point(field_get:Message.b)
  return has_b()
      ? *messages_.b_
      : *reinterpret_cast< ::TypeB*>(&::_TypeB_default_instance_);
}
inline ::TypeB* Message::mutable_b() {
  if (!has_b()) {
    clear_messages();
    set_has_b();
    messages_.b_ = CreateMaybeMessage< ::TypeB >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:Message.b)
  return messages_.b_;
}

inline bool Message::has_messages() const {
  return messages_case() != MESSAGES_NOT_SET;
}
inline void Message::clear_has_messages() {
  _oneof_case_[0] = MESSAGES_NOT_SET;
}
inline Message::MessagesCase Message::messages_case() const {
  return Message::MessagesCase(_oneof_case_[0]);
}
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_messages_2eproto
