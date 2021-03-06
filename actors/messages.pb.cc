// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: messages.proto

#include "messages.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

class TypeADefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<TypeA> _instance;
} _TypeA_default_instance_;
class TypeBDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<TypeB> _instance;
} _TypeB_default_instance_;
static void InitDefaultsTypeA_messages_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_TypeA_default_instance_;
    new (ptr) ::TypeA();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::TypeA::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_TypeA_messages_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsTypeA_messages_2eproto}, {}};

static void InitDefaultsTypeB_messages_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_TypeB_default_instance_;
    new (ptr) ::TypeB();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::TypeB::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_TypeB_messages_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsTypeB_messages_2eproto}, {}};

void InitDefaults_messages_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_TypeA_messages_2eproto.base);
  ::google::protobuf::internal::InitSCC(&scc_info_TypeB_messages_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_messages_2eproto[2];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_messages_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_messages_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_messages_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::TypeA, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::TypeA, field1_),
  PROTOBUF_FIELD_OFFSET(::TypeA, field2_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::TypeB, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::TypeB, field1_),
  PROTOBUF_FIELD_OFFSET(::TypeB, field2_),
  PROTOBUF_FIELD_OFFSET(::TypeB, field3_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::TypeA)},
  { 7, -1, sizeof(::TypeB)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::_TypeA_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::_TypeB_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_messages_2eproto = {
  {}, AddDescriptors_messages_2eproto, "messages.proto", schemas,
  file_default_instances, TableStruct_messages_2eproto::offsets,
  file_level_metadata_messages_2eproto, 2, file_level_enum_descriptors_messages_2eproto, file_level_service_descriptors_messages_2eproto,
};

const char descriptor_table_protodef_messages_2eproto[] =
  "\n\016messages.proto\"\'\n\005TypeA\022\016\n\006field1\030\001 \001("
  "\t\022\016\n\006field2\030\002 \001(\005\"7\n\005TypeB\022\016\n\006field1\030\001 \001"
  "(\005\022\016\n\006field2\030\002 \001(\005\022\016\n\006field3\030\003 \001(\005b\006prot"
  "o3"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_messages_2eproto = {
  false, InitDefaults_messages_2eproto, 
  descriptor_table_protodef_messages_2eproto,
  "messages.proto", &assign_descriptors_table_messages_2eproto, 122,
};

void AddDescriptors_messages_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_messages_2eproto, deps, 0);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_messages_2eproto = []() { AddDescriptors_messages_2eproto(); return true; }();

// ===================================================================

void TypeA::InitAsDefaultInstance() {
}
class TypeA::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TypeA::kField1FieldNumber;
const int TypeA::kField2FieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TypeA::TypeA()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:TypeA)
}
TypeA::TypeA(const TypeA& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  field1_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.field1().size() > 0) {
    field1_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.field1_);
  }
  field2_ = from.field2_;
  // @@protoc_insertion_point(copy_constructor:TypeA)
}

void TypeA::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_TypeA_messages_2eproto.base);
  field1_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  field2_ = 0;
}

TypeA::~TypeA() {
  // @@protoc_insertion_point(destructor:TypeA)
  SharedDtor();
}

void TypeA::SharedDtor() {
  field1_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void TypeA::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const TypeA& TypeA::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_TypeA_messages_2eproto.base);
  return *internal_default_instance();
}


void TypeA::Clear() {
// @@protoc_insertion_point(message_clear_start:TypeA)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  field1_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  field2_ = 0;
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* TypeA::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<TypeA*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // string field1 = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("TypeA.field1");
        object = msg->mutable_field1();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      // int32 field2 = 2;
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) != 16) goto handle_unusual;
        msg->set_field2(::google::protobuf::internal::ReadVarint(&ptr));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
string_till_end:
  static_cast<::std::string*>(object)->clear();
  static_cast<::std::string*>(object)->reserve(size);
  goto len_delim_till_end;
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool TypeA::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:TypeA)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string field1 = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_field1()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->field1().data(), static_cast<int>(this->field1().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "TypeA.field1"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 field2 = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (16 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &field2_)));
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
  // @@protoc_insertion_point(parse_success:TypeA)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:TypeA)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void TypeA::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:TypeA)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string field1 = 1;
  if (this->field1().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->field1().data(), static_cast<int>(this->field1().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "TypeA.field1");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->field1(), output);
  }

  // int32 field2 = 2;
  if (this->field2() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->field2(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:TypeA)
}

::google::protobuf::uint8* TypeA::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:TypeA)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string field1 = 1;
  if (this->field1().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->field1().data(), static_cast<int>(this->field1().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "TypeA.field1");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->field1(), target);
  }

  // int32 field2 = 2;
  if (this->field2() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->field2(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:TypeA)
  return target;
}

size_t TypeA::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:TypeA)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string field1 = 1;
  if (this->field1().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->field1());
  }

  // int32 field2 = 2;
  if (this->field2() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->field2());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void TypeA::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:TypeA)
  GOOGLE_DCHECK_NE(&from, this);
  const TypeA* source =
      ::google::protobuf::DynamicCastToGenerated<TypeA>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:TypeA)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:TypeA)
    MergeFrom(*source);
  }
}

void TypeA::MergeFrom(const TypeA& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:TypeA)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.field1().size() > 0) {

    field1_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.field1_);
  }
  if (from.field2() != 0) {
    set_field2(from.field2());
  }
}

void TypeA::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:TypeA)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TypeA::CopyFrom(const TypeA& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:TypeA)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TypeA::IsInitialized() const {
  return true;
}

void TypeA::Swap(TypeA* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TypeA::InternalSwap(TypeA* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  field1_.Swap(&other->field1_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(field2_, other->field2_);
}

::google::protobuf::Metadata TypeA::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_messages_2eproto);
  return ::file_level_metadata_messages_2eproto[kIndexInFileMessages];
}


// ===================================================================

void TypeB::InitAsDefaultInstance() {
}
class TypeB::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TypeB::kField1FieldNumber;
const int TypeB::kField2FieldNumber;
const int TypeB::kField3FieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TypeB::TypeB()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:TypeB)
}
TypeB::TypeB(const TypeB& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&field1_, &from.field1_,
    static_cast<size_t>(reinterpret_cast<char*>(&field3_) -
    reinterpret_cast<char*>(&field1_)) + sizeof(field3_));
  // @@protoc_insertion_point(copy_constructor:TypeB)
}

void TypeB::SharedCtor() {
  ::memset(&field1_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&field3_) -
      reinterpret_cast<char*>(&field1_)) + sizeof(field3_));
}

TypeB::~TypeB() {
  // @@protoc_insertion_point(destructor:TypeB)
  SharedDtor();
}

void TypeB::SharedDtor() {
}

void TypeB::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const TypeB& TypeB::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_TypeB_messages_2eproto.base);
  return *internal_default_instance();
}


void TypeB::Clear() {
// @@protoc_insertion_point(message_clear_start:TypeB)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&field1_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&field3_) -
      reinterpret_cast<char*>(&field1_)) + sizeof(field3_));
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* TypeB::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<TypeB*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // int32 field1 = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 8) goto handle_unusual;
        msg->set_field1(::google::protobuf::internal::ReadVarint(&ptr));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      // int32 field2 = 2;
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) != 16) goto handle_unusual;
        msg->set_field2(::google::protobuf::internal::ReadVarint(&ptr));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      // int32 field3 = 3;
      case 3: {
        if (static_cast<::google::protobuf::uint8>(tag) != 24) goto handle_unusual;
        msg->set_field3(::google::protobuf::internal::ReadVarint(&ptr));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool TypeB::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:TypeB)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 field1 = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (8 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &field1_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 field2 = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (16 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &field2_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 field3 = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (24 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &field3_)));
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
  // @@protoc_insertion_point(parse_success:TypeB)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:TypeB)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void TypeB::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:TypeB)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 field1 = 1;
  if (this->field1() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->field1(), output);
  }

  // int32 field2 = 2;
  if (this->field2() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->field2(), output);
  }

  // int32 field3 = 3;
  if (this->field3() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->field3(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:TypeB)
}

::google::protobuf::uint8* TypeB::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:TypeB)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 field1 = 1;
  if (this->field1() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->field1(), target);
  }

  // int32 field2 = 2;
  if (this->field2() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->field2(), target);
  }

  // int32 field3 = 3;
  if (this->field3() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->field3(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:TypeB)
  return target;
}

size_t TypeB::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:TypeB)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 field1 = 1;
  if (this->field1() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->field1());
  }

  // int32 field2 = 2;
  if (this->field2() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->field2());
  }

  // int32 field3 = 3;
  if (this->field3() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->field3());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void TypeB::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:TypeB)
  GOOGLE_DCHECK_NE(&from, this);
  const TypeB* source =
      ::google::protobuf::DynamicCastToGenerated<TypeB>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:TypeB)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:TypeB)
    MergeFrom(*source);
  }
}

void TypeB::MergeFrom(const TypeB& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:TypeB)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.field1() != 0) {
    set_field1(from.field1());
  }
  if (from.field2() != 0) {
    set_field2(from.field2());
  }
  if (from.field3() != 0) {
    set_field3(from.field3());
  }
}

void TypeB::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:TypeB)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TypeB::CopyFrom(const TypeB& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:TypeB)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TypeB::IsInitialized() const {
  return true;
}

void TypeB::Swap(TypeB* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TypeB::InternalSwap(TypeB* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(field1_, other->field1_);
  swap(field2_, other->field2_);
  swap(field3_, other->field3_);
}

::google::protobuf::Metadata TypeB::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_messages_2eproto);
  return ::file_level_metadata_messages_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::TypeA* Arena::CreateMaybeMessage< ::TypeA >(Arena* arena) {
  return Arena::CreateInternal< ::TypeA >(arena);
}
template<> PROTOBUF_NOINLINE ::TypeB* Arena::CreateMaybeMessage< ::TypeB >(Arena* arena) {
  return Arena::CreateInternal< ::TypeB >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
