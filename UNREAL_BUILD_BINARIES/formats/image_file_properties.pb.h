// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mediapipe/framework/formats/image_file_properties.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_mediapipe_2fframework_2fformats_2fimage_5ffile_5fproperties_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_mediapipe_2fframework_2fformats_2fimage_5ffile_5fproperties_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3019000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3019001 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_mediapipe_2fframework_2fformats_2fimage_5ffile_5fproperties_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_mediapipe_2fframework_2fformats_2fimage_5ffile_5fproperties_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_mediapipe_2fframework_2fformats_2fimage_5ffile_5fproperties_2eproto;
namespace mediapipe {
class ImageFileProperties;
struct ImageFilePropertiesDefaultTypeInternal;
extern ImageFilePropertiesDefaultTypeInternal _ImageFileProperties_default_instance_;
}  // namespace mediapipe
PROTOBUF_NAMESPACE_OPEN
template<> ::mediapipe::ImageFileProperties* Arena::CreateMaybeMessage<::mediapipe::ImageFileProperties>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace mediapipe {

// ===================================================================

class ImageFileProperties final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:mediapipe.ImageFileProperties) */ {
 public:
  inline ImageFileProperties() : ImageFileProperties(nullptr) {}
  ~ImageFileProperties() override;
  explicit constexpr ImageFileProperties(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ImageFileProperties(const ImageFileProperties& from);
  ImageFileProperties(ImageFileProperties&& from) noexcept
    : ImageFileProperties() {
    *this = ::std::move(from);
  }

  inline ImageFileProperties& operator=(const ImageFileProperties& from) {
    CopyFrom(from);
    return *this;
  }
  inline ImageFileProperties& operator=(ImageFileProperties&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const ImageFileProperties& default_instance() {
    return *internal_default_instance();
  }
  static inline const ImageFileProperties* internal_default_instance() {
    return reinterpret_cast<const ImageFileProperties*>(
               &_ImageFileProperties_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ImageFileProperties& a, ImageFileProperties& b) {
    a.Swap(&b);
  }
  inline void Swap(ImageFileProperties* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ImageFileProperties* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ImageFileProperties* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ImageFileProperties>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ImageFileProperties& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const ImageFileProperties& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ImageFileProperties* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "mediapipe.ImageFileProperties";
  }
  protected:
  explicit ImageFileProperties(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kImageWidthFieldNumber = 1,
    kImageHeightFieldNumber = 2,
    kFocalLengthMmFieldNumber = 3,
    kFocalLength35MmFieldNumber = 4,
    kFocalLengthPixelsFieldNumber = 5,
  };
  // optional uint32 image_width = 1;
  bool has_image_width() const;
  private:
  bool _internal_has_image_width() const;
  public:
  void clear_image_width();
  uint32_t image_width() const;
  void set_image_width(uint32_t value);
  private:
  uint32_t _internal_image_width() const;
  void _internal_set_image_width(uint32_t value);
  public:

  // optional uint32 image_height = 2;
  bool has_image_height() const;
  private:
  bool _internal_has_image_height() const;
  public:
  void clear_image_height();
  uint32_t image_height() const;
  void set_image_height(uint32_t value);
  private:
  uint32_t _internal_image_height() const;
  void _internal_set_image_height(uint32_t value);
  public:

  // optional double focal_length_mm = 3;
  bool has_focal_length_mm() const;
  private:
  bool _internal_has_focal_length_mm() const;
  public:
  void clear_focal_length_mm();
  double focal_length_mm() const;
  void set_focal_length_mm(double value);
  private:
  double _internal_focal_length_mm() const;
  void _internal_set_focal_length_mm(double value);
  public:

  // optional double focal_length_35mm = 4;
  bool has_focal_length_35mm() const;
  private:
  bool _internal_has_focal_length_35mm() const;
  public:
  void clear_focal_length_35mm();
  double focal_length_35mm() const;
  void set_focal_length_35mm(double value);
  private:
  double _internal_focal_length_35mm() const;
  void _internal_set_focal_length_35mm(double value);
  public:

  // optional double focal_length_pixels = 5;
  bool has_focal_length_pixels() const;
  private:
  bool _internal_has_focal_length_pixels() const;
  public:
  void clear_focal_length_pixels();
  double focal_length_pixels() const;
  void set_focal_length_pixels(double value);
  private:
  double _internal_focal_length_pixels() const;
  void _internal_set_focal_length_pixels(double value);
  public:

  // @@protoc_insertion_point(class_scope:mediapipe.ImageFileProperties)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  uint32_t image_width_;
  uint32_t image_height_;
  double focal_length_mm_;
  double focal_length_35mm_;
  double focal_length_pixels_;
  friend struct ::TableStruct_mediapipe_2fframework_2fformats_2fimage_5ffile_5fproperties_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ImageFileProperties

// optional uint32 image_width = 1;
inline bool ImageFileProperties::_internal_has_image_width() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool ImageFileProperties::has_image_width() const {
  return _internal_has_image_width();
}
inline void ImageFileProperties::clear_image_width() {
  image_width_ = 0u;
  _has_bits_[0] &= ~0x00000001u;
}
inline uint32_t ImageFileProperties::_internal_image_width() const {
  return image_width_;
}
inline uint32_t ImageFileProperties::image_width() const {
  // @@protoc_insertion_point(field_get:mediapipe.ImageFileProperties.image_width)
  return _internal_image_width();
}
inline void ImageFileProperties::_internal_set_image_width(uint32_t value) {
  _has_bits_[0] |= 0x00000001u;
  image_width_ = value;
}
inline void ImageFileProperties::set_image_width(uint32_t value) {
  _internal_set_image_width(value);
  // @@protoc_insertion_point(field_set:mediapipe.ImageFileProperties.image_width)
}

// optional uint32 image_height = 2;
inline bool ImageFileProperties::_internal_has_image_height() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool ImageFileProperties::has_image_height() const {
  return _internal_has_image_height();
}
inline void ImageFileProperties::clear_image_height() {
  image_height_ = 0u;
  _has_bits_[0] &= ~0x00000002u;
}
inline uint32_t ImageFileProperties::_internal_image_height() const {
  return image_height_;
}
inline uint32_t ImageFileProperties::image_height() const {
  // @@protoc_insertion_point(field_get:mediapipe.ImageFileProperties.image_height)
  return _internal_image_height();
}
inline void ImageFileProperties::_internal_set_image_height(uint32_t value) {
  _has_bits_[0] |= 0x00000002u;
  image_height_ = value;
}
inline void ImageFileProperties::set_image_height(uint32_t value) {
  _internal_set_image_height(value);
  // @@protoc_insertion_point(field_set:mediapipe.ImageFileProperties.image_height)
}

// optional double focal_length_mm = 3;
inline bool ImageFileProperties::_internal_has_focal_length_mm() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool ImageFileProperties::has_focal_length_mm() const {
  return _internal_has_focal_length_mm();
}
inline void ImageFileProperties::clear_focal_length_mm() {
  focal_length_mm_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline double ImageFileProperties::_internal_focal_length_mm() const {
  return focal_length_mm_;
}
inline double ImageFileProperties::focal_length_mm() const {
  // @@protoc_insertion_point(field_get:mediapipe.ImageFileProperties.focal_length_mm)
  return _internal_focal_length_mm();
}
inline void ImageFileProperties::_internal_set_focal_length_mm(double value) {
  _has_bits_[0] |= 0x00000004u;
  focal_length_mm_ = value;
}
inline void ImageFileProperties::set_focal_length_mm(double value) {
  _internal_set_focal_length_mm(value);
  // @@protoc_insertion_point(field_set:mediapipe.ImageFileProperties.focal_length_mm)
}

// optional double focal_length_35mm = 4;
inline bool ImageFileProperties::_internal_has_focal_length_35mm() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool ImageFileProperties::has_focal_length_35mm() const {
  return _internal_has_focal_length_35mm();
}
inline void ImageFileProperties::clear_focal_length_35mm() {
  focal_length_35mm_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline double ImageFileProperties::_internal_focal_length_35mm() const {
  return focal_length_35mm_;
}
inline double ImageFileProperties::focal_length_35mm() const {
  // @@protoc_insertion_point(field_get:mediapipe.ImageFileProperties.focal_length_35mm)
  return _internal_focal_length_35mm();
}
inline void ImageFileProperties::_internal_set_focal_length_35mm(double value) {
  _has_bits_[0] |= 0x00000008u;
  focal_length_35mm_ = value;
}
inline void ImageFileProperties::set_focal_length_35mm(double value) {
  _internal_set_focal_length_35mm(value);
  // @@protoc_insertion_point(field_set:mediapipe.ImageFileProperties.focal_length_35mm)
}

// optional double focal_length_pixels = 5;
inline bool ImageFileProperties::_internal_has_focal_length_pixels() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool ImageFileProperties::has_focal_length_pixels() const {
  return _internal_has_focal_length_pixels();
}
inline void ImageFileProperties::clear_focal_length_pixels() {
  focal_length_pixels_ = 0;
  _has_bits_[0] &= ~0x00000010u;
}
inline double ImageFileProperties::_internal_focal_length_pixels() const {
  return focal_length_pixels_;
}
inline double ImageFileProperties::focal_length_pixels() const {
  // @@protoc_insertion_point(field_get:mediapipe.ImageFileProperties.focal_length_pixels)
  return _internal_focal_length_pixels();
}
inline void ImageFileProperties::_internal_set_focal_length_pixels(double value) {
  _has_bits_[0] |= 0x00000010u;
  focal_length_pixels_ = value;
}
inline void ImageFileProperties::set_focal_length_pixels(double value) {
  _internal_set_focal_length_pixels(value);
  // @@protoc_insertion_point(field_set:mediapipe.ImageFileProperties.focal_length_pixels)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace mediapipe

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_mediapipe_2fframework_2fformats_2fimage_5ffile_5fproperties_2eproto
