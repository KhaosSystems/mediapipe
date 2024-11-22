// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mediapipe/framework/formats/classification.proto

#include "mediapipe/framework/formats/classification.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace mediapipe {
constexpr Classification::Classification(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : label_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , display_name_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , index_(0)
  , score_(0){}
struct ClassificationDefaultTypeInternal {
  constexpr ClassificationDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~ClassificationDefaultTypeInternal() {}
  union {
    Classification _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT ClassificationDefaultTypeInternal _Classification_default_instance_;
constexpr ClassificationList::ClassificationList(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : classification_(){}
struct ClassificationListDefaultTypeInternal {
  constexpr ClassificationListDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~ClassificationListDefaultTypeInternal() {}
  union {
    ClassificationList _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT ClassificationListDefaultTypeInternal _ClassificationList_default_instance_;
constexpr ClassificationListCollection::ClassificationListCollection(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : classification_list_(){}
struct ClassificationListCollectionDefaultTypeInternal {
  constexpr ClassificationListCollectionDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~ClassificationListCollectionDefaultTypeInternal() {}
  union {
    ClassificationListCollection _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT ClassificationListCollectionDefaultTypeInternal _ClassificationListCollection_default_instance_;
}  // namespace mediapipe
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_mediapipe_2fframework_2fformats_2fclassification_2eproto[3];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_mediapipe_2fframework_2fformats_2fclassification_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_mediapipe_2fframework_2fformats_2fclassification_2eproto = nullptr;

const uint32_t TableStruct_mediapipe_2fframework_2fformats_2fclassification_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::mediapipe::Classification, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::Classification, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::mediapipe::Classification, index_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::Classification, score_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::Classification, label_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::Classification, display_name_),
  2,
  3,
  0,
  1,
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::mediapipe::ClassificationList, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::mediapipe::ClassificationList, classification_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::mediapipe::ClassificationListCollection, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::mediapipe::ClassificationListCollection, classification_list_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 10, -1, sizeof(::mediapipe::Classification)},
  { 14, -1, -1, sizeof(::mediapipe::ClassificationList)},
  { 21, -1, -1, sizeof(::mediapipe::ClassificationListCollection)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::mediapipe::_Classification_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::mediapipe::_ClassificationList_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::mediapipe::_ClassificationListCollection_default_instance_),
};

const char descriptor_table_protodef_mediapipe_2fframework_2fformats_2fclassification_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n0mediapipe/framework/formats/classifica"
  "tion.proto\022\tmediapipe\"S\n\016Classification\022"
  "\r\n\005index\030\001 \001(\005\022\r\n\005score\030\002 \001(\002\022\r\n\005label\030\003"
  " \001(\t\022\024\n\014display_name\030\004 \001(\t\"G\n\022Classifica"
  "tionList\0221\n\016classification\030\001 \003(\0132\031.media"
  "pipe.Classification\"Z\n\034ClassificationLis"
  "tCollection\022:\n\023classification_list\030\001 \003(\013"
  "2\035.mediapipe.ClassificationListB9\n\"com.g"
  "oogle.mediapipe.formats.protoB\023Classific"
  "ationProto"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_mediapipe_2fframework_2fformats_2fclassification_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_mediapipe_2fframework_2fformats_2fclassification_2eproto = {
  false, false, 370, descriptor_table_protodef_mediapipe_2fframework_2fformats_2fclassification_2eproto, "mediapipe/framework/formats/classification.proto", 
  &descriptor_table_mediapipe_2fframework_2fformats_2fclassification_2eproto_once, nullptr, 0, 3,
  schemas, file_default_instances, TableStruct_mediapipe_2fframework_2fformats_2fclassification_2eproto::offsets,
  file_level_metadata_mediapipe_2fframework_2fformats_2fclassification_2eproto, file_level_enum_descriptors_mediapipe_2fframework_2fformats_2fclassification_2eproto, file_level_service_descriptors_mediapipe_2fframework_2fformats_2fclassification_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_mediapipe_2fframework_2fformats_2fclassification_2eproto_getter() {
  return &descriptor_table_mediapipe_2fframework_2fformats_2fclassification_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_mediapipe_2fframework_2fformats_2fclassification_2eproto(&descriptor_table_mediapipe_2fframework_2fformats_2fclassification_2eproto);
namespace mediapipe {

// ===================================================================

class Classification::_Internal {
 public:
  using HasBits = decltype(std::declval<Classification>()._has_bits_);
  static void set_has_index(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_score(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_label(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_display_name(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

Classification::Classification(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:mediapipe.Classification)
}
Classification::Classification(const Classification& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  label_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    label_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_label()) {
    label_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_label(), 
      GetArenaForAllocation());
  }
  display_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    display_name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_display_name()) {
    display_name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_display_name(), 
      GetArenaForAllocation());
  }
  ::memcpy(&index_, &from.index_,
    static_cast<size_t>(reinterpret_cast<char*>(&score_) -
    reinterpret_cast<char*>(&index_)) + sizeof(score_));
  // @@protoc_insertion_point(copy_constructor:mediapipe.Classification)
}

inline void Classification::SharedCtor() {
label_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  label_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
display_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  display_name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&index_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&score_) -
    reinterpret_cast<char*>(&index_)) + sizeof(score_));
}

Classification::~Classification() {
  // @@protoc_insertion_point(destructor:mediapipe.Classification)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void Classification::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  label_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  display_name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Classification::ArenaDtor(void* object) {
  Classification* _this = reinterpret_cast< Classification* >(object);
  (void)_this;
}
void Classification::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Classification::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Classification::Clear() {
// @@protoc_insertion_point(message_clear_start:mediapipe.Classification)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      label_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      display_name_.ClearNonDefaultToEmpty();
    }
  }
  if (cached_has_bits & 0x0000000cu) {
    ::memset(&index_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&score_) -
        reinterpret_cast<char*>(&index_)) + sizeof(score_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Classification::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional int32 index = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_index(&has_bits);
          index_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional float score = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 21)) {
          _Internal::set_has_score(&has_bits);
          score_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      // optional string label = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_label();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "mediapipe.Classification.label");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string display_name = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_display_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "mediapipe.Classification.display_name");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Classification::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mediapipe.Classification)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 index = 1;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_index(), target);
  }

  // optional float score = 2;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(2, this->_internal_score(), target);
  }

  // optional string label = 3;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_label().data(), static_cast<int>(this->_internal_label().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "mediapipe.Classification.label");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_label(), target);
  }

  // optional string display_name = 4;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_display_name().data(), static_cast<int>(this->_internal_display_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "mediapipe.Classification.display_name");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_display_name(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mediapipe.Classification)
  return target;
}

size_t Classification::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mediapipe.Classification)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    // optional string label = 3;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_label());
    }

    // optional string display_name = 4;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_display_name());
    }

    // optional int32 index = 1;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_index());
    }

    // optional float score = 2;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 + 4;
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Classification::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Classification::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Classification::GetClassData() const { return &_class_data_; }

void Classification::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<Classification *>(to)->MergeFrom(
      static_cast<const Classification &>(from));
}


void Classification::MergeFrom(const Classification& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mediapipe.Classification)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_label(from._internal_label());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_set_display_name(from._internal_display_name());
    }
    if (cached_has_bits & 0x00000004u) {
      index_ = from.index_;
    }
    if (cached_has_bits & 0x00000008u) {
      score_ = from.score_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Classification::CopyFrom(const Classification& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mediapipe.Classification)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Classification::IsInitialized() const {
  return true;
}

void Classification::InternalSwap(Classification* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &label_, lhs_arena,
      &other->label_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &display_name_, lhs_arena,
      &other->display_name_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Classification, score_)
      + sizeof(Classification::score_)
      - PROTOBUF_FIELD_OFFSET(Classification, index_)>(
          reinterpret_cast<char*>(&index_),
          reinterpret_cast<char*>(&other->index_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Classification::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_mediapipe_2fframework_2fformats_2fclassification_2eproto_getter, &descriptor_table_mediapipe_2fframework_2fformats_2fclassification_2eproto_once,
      file_level_metadata_mediapipe_2fframework_2fformats_2fclassification_2eproto[0]);
}

// ===================================================================

class ClassificationList::_Internal {
 public:
};

ClassificationList::ClassificationList(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  classification_(arena) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:mediapipe.ClassificationList)
}
ClassificationList::ClassificationList(const ClassificationList& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      classification_(from.classification_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:mediapipe.ClassificationList)
}

inline void ClassificationList::SharedCtor() {
}

ClassificationList::~ClassificationList() {
  // @@protoc_insertion_point(destructor:mediapipe.ClassificationList)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void ClassificationList::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void ClassificationList::ArenaDtor(void* object) {
  ClassificationList* _this = reinterpret_cast< ClassificationList* >(object);
  (void)_this;
}
void ClassificationList::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ClassificationList::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void ClassificationList::Clear() {
// @@protoc_insertion_point(message_clear_start:mediapipe.ClassificationList)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  classification_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ClassificationList::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .mediapipe.Classification classification = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_classification(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* ClassificationList::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mediapipe.ClassificationList)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .mediapipe.Classification classification = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_classification_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_classification(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mediapipe.ClassificationList)
  return target;
}

size_t ClassificationList::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mediapipe.ClassificationList)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .mediapipe.Classification classification = 1;
  total_size += 1UL * this->_internal_classification_size();
  for (const auto& msg : this->classification_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ClassificationList::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    ClassificationList::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ClassificationList::GetClassData() const { return &_class_data_; }

void ClassificationList::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<ClassificationList *>(to)->MergeFrom(
      static_cast<const ClassificationList &>(from));
}


void ClassificationList::MergeFrom(const ClassificationList& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mediapipe.ClassificationList)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  classification_.MergeFrom(from.classification_);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ClassificationList::CopyFrom(const ClassificationList& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mediapipe.ClassificationList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ClassificationList::IsInitialized() const {
  return true;
}

void ClassificationList::InternalSwap(ClassificationList* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  classification_.InternalSwap(&other->classification_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ClassificationList::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_mediapipe_2fframework_2fformats_2fclassification_2eproto_getter, &descriptor_table_mediapipe_2fframework_2fformats_2fclassification_2eproto_once,
      file_level_metadata_mediapipe_2fframework_2fformats_2fclassification_2eproto[1]);
}

// ===================================================================

class ClassificationListCollection::_Internal {
 public:
};

ClassificationListCollection::ClassificationListCollection(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  classification_list_(arena) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:mediapipe.ClassificationListCollection)
}
ClassificationListCollection::ClassificationListCollection(const ClassificationListCollection& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      classification_list_(from.classification_list_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:mediapipe.ClassificationListCollection)
}

inline void ClassificationListCollection::SharedCtor() {
}

ClassificationListCollection::~ClassificationListCollection() {
  // @@protoc_insertion_point(destructor:mediapipe.ClassificationListCollection)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void ClassificationListCollection::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void ClassificationListCollection::ArenaDtor(void* object) {
  ClassificationListCollection* _this = reinterpret_cast< ClassificationListCollection* >(object);
  (void)_this;
}
void ClassificationListCollection::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ClassificationListCollection::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void ClassificationListCollection::Clear() {
// @@protoc_insertion_point(message_clear_start:mediapipe.ClassificationListCollection)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  classification_list_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ClassificationListCollection::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .mediapipe.ClassificationList classification_list = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_classification_list(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* ClassificationListCollection::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mediapipe.ClassificationListCollection)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .mediapipe.ClassificationList classification_list = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_classification_list_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_classification_list(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mediapipe.ClassificationListCollection)
  return target;
}

size_t ClassificationListCollection::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mediapipe.ClassificationListCollection)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .mediapipe.ClassificationList classification_list = 1;
  total_size += 1UL * this->_internal_classification_list_size();
  for (const auto& msg : this->classification_list_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ClassificationListCollection::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    ClassificationListCollection::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ClassificationListCollection::GetClassData() const { return &_class_data_; }

void ClassificationListCollection::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<ClassificationListCollection *>(to)->MergeFrom(
      static_cast<const ClassificationListCollection &>(from));
}


void ClassificationListCollection::MergeFrom(const ClassificationListCollection& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mediapipe.ClassificationListCollection)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  classification_list_.MergeFrom(from.classification_list_);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ClassificationListCollection::CopyFrom(const ClassificationListCollection& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mediapipe.ClassificationListCollection)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ClassificationListCollection::IsInitialized() const {
  return true;
}

void ClassificationListCollection::InternalSwap(ClassificationListCollection* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  classification_list_.InternalSwap(&other->classification_list_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ClassificationListCollection::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_mediapipe_2fframework_2fformats_2fclassification_2eproto_getter, &descriptor_table_mediapipe_2fframework_2fformats_2fclassification_2eproto_once,
      file_level_metadata_mediapipe_2fframework_2fformats_2fclassification_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace mediapipe
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::mediapipe::Classification* Arena::CreateMaybeMessage< ::mediapipe::Classification >(Arena* arena) {
  return Arena::CreateMessageInternal< ::mediapipe::Classification >(arena);
}
template<> PROTOBUF_NOINLINE ::mediapipe::ClassificationList* Arena::CreateMaybeMessage< ::mediapipe::ClassificationList >(Arena* arena) {
  return Arena::CreateMessageInternal< ::mediapipe::ClassificationList >(arena);
}
template<> PROTOBUF_NOINLINE ::mediapipe::ClassificationListCollection* Arena::CreateMaybeMessage< ::mediapipe::ClassificationListCollection >(Arena* arena) {
  return Arena::CreateMessageInternal< ::mediapipe::ClassificationListCollection >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
