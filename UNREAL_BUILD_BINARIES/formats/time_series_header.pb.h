// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mediapipe/framework/formats/time_series_header.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_mediapipe_2fframework_2fformats_2ftime_5fseries_5fheader_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_mediapipe_2fframework_2fformats_2ftime_5fseries_5fheader_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_mediapipe_2fframework_2fformats_2ftime_5fseries_5fheader_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_mediapipe_2fframework_2fformats_2ftime_5fseries_5fheader_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_mediapipe_2fframework_2fformats_2ftime_5fseries_5fheader_2eproto;
namespace mediapipe {
class MultiStreamTimeSeriesHeader;
struct MultiStreamTimeSeriesHeaderDefaultTypeInternal;
extern MultiStreamTimeSeriesHeaderDefaultTypeInternal _MultiStreamTimeSeriesHeader_default_instance_;
class TimeSeriesHeader;
struct TimeSeriesHeaderDefaultTypeInternal;
extern TimeSeriesHeaderDefaultTypeInternal _TimeSeriesHeader_default_instance_;
}  // namespace mediapipe
PROTOBUF_NAMESPACE_OPEN
template<> ::mediapipe::MultiStreamTimeSeriesHeader* Arena::CreateMaybeMessage<::mediapipe::MultiStreamTimeSeriesHeader>(Arena*);
template<> ::mediapipe::TimeSeriesHeader* Arena::CreateMaybeMessage<::mediapipe::TimeSeriesHeader>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace mediapipe {

// ===================================================================

class TimeSeriesHeader final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:mediapipe.TimeSeriesHeader) */ {
 public:
  inline TimeSeriesHeader() : TimeSeriesHeader(nullptr) {}
  ~TimeSeriesHeader() override;
  explicit constexpr TimeSeriesHeader(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  TimeSeriesHeader(const TimeSeriesHeader& from);
  TimeSeriesHeader(TimeSeriesHeader&& from) noexcept
    : TimeSeriesHeader() {
    *this = ::std::move(from);
  }

  inline TimeSeriesHeader& operator=(const TimeSeriesHeader& from) {
    CopyFrom(from);
    return *this;
  }
  inline TimeSeriesHeader& operator=(TimeSeriesHeader&& from) noexcept {
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
  static const TimeSeriesHeader& default_instance() {
    return *internal_default_instance();
  }
  static inline const TimeSeriesHeader* internal_default_instance() {
    return reinterpret_cast<const TimeSeriesHeader*>(
               &_TimeSeriesHeader_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(TimeSeriesHeader& a, TimeSeriesHeader& b) {
    a.Swap(&b);
  }
  inline void Swap(TimeSeriesHeader* other) {
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
  void UnsafeArenaSwap(TimeSeriesHeader* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  TimeSeriesHeader* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<TimeSeriesHeader>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const TimeSeriesHeader& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const TimeSeriesHeader& from);
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
  void InternalSwap(TimeSeriesHeader* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "mediapipe.TimeSeriesHeader";
  }
  protected:
  explicit TimeSeriesHeader(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kSampleRateFieldNumber = 1,
    kNumChannelsFieldNumber = 2,
    kNumSamplesFieldNumber = 3,
    kPacketRateFieldNumber = 4,
    kAudioSampleRateFieldNumber = 5,
  };
  // optional double sample_rate = 1;
  bool has_sample_rate() const;
  private:
  bool _internal_has_sample_rate() const;
  public:
  void clear_sample_rate();
  double sample_rate() const;
  void set_sample_rate(double value);
  private:
  double _internal_sample_rate() const;
  void _internal_set_sample_rate(double value);
  public:

  // optional int32 num_channels = 2;
  bool has_num_channels() const;
  private:
  bool _internal_has_num_channels() const;
  public:
  void clear_num_channels();
  int32_t num_channels() const;
  void set_num_channels(int32_t value);
  private:
  int32_t _internal_num_channels() const;
  void _internal_set_num_channels(int32_t value);
  public:

  // optional int32 num_samples = 3;
  bool has_num_samples() const;
  private:
  bool _internal_has_num_samples() const;
  public:
  void clear_num_samples();
  int32_t num_samples() const;
  void set_num_samples(int32_t value);
  private:
  int32_t _internal_num_samples() const;
  void _internal_set_num_samples(int32_t value);
  public:

  // optional double packet_rate = 4;
  bool has_packet_rate() const;
  private:
  bool _internal_has_packet_rate() const;
  public:
  void clear_packet_rate();
  double packet_rate() const;
  void set_packet_rate(double value);
  private:
  double _internal_packet_rate() const;
  void _internal_set_packet_rate(double value);
  public:

  // optional double audio_sample_rate = 5;
  bool has_audio_sample_rate() const;
  private:
  bool _internal_has_audio_sample_rate() const;
  public:
  void clear_audio_sample_rate();
  double audio_sample_rate() const;
  void set_audio_sample_rate(double value);
  private:
  double _internal_audio_sample_rate() const;
  void _internal_set_audio_sample_rate(double value);
  public:


  template <typename _proto_TypeTraits,
            ::PROTOBUF_NAMESPACE_ID::internal::FieldType _field_type,
            bool _is_packed>
  inline bool HasExtension(
      const ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier<
          TimeSeriesHeader, _proto_TypeTraits, _field_type, _is_packed>& id) const {

    return _extensions_.Has(id.number());
  }

  template <typename _proto_TypeTraits,
            ::PROTOBUF_NAMESPACE_ID::internal::FieldType _field_type,
            bool _is_packed>
  inline void ClearExtension(
      const ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier<
          TimeSeriesHeader, _proto_TypeTraits, _field_type, _is_packed>& id) {
    _extensions_.ClearExtension(id.number());

  }

  template <typename _proto_TypeTraits,
            ::PROTOBUF_NAMESPACE_ID::internal::FieldType _field_type,
            bool _is_packed>
  inline int ExtensionSize(
      const ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier<
          TimeSeriesHeader, _proto_TypeTraits, _field_type, _is_packed>& id) const {

    return _extensions_.ExtensionSize(id.number());
  }

  template <typename _proto_TypeTraits,
            ::PROTOBUF_NAMESPACE_ID::internal::FieldType _field_type,
            bool _is_packed>
  inline typename _proto_TypeTraits::Singular::ConstType GetExtension(
      const ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier<
          TimeSeriesHeader, _proto_TypeTraits, _field_type, _is_packed>& id) const {

    return _proto_TypeTraits::Get(id.number(), _extensions_,
                                  id.default_value());
  }

  template <typename _proto_TypeTraits,
            ::PROTOBUF_NAMESPACE_ID::internal::FieldType _field_type,
            bool _is_packed>
  inline typename _proto_TypeTraits::Singular::MutableType MutableExtension(
      const ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier<
          TimeSeriesHeader, _proto_TypeTraits, _field_type, _is_packed>& id) {

    return _proto_TypeTraits::Mutable(id.number(), _field_type,
                                      &_extensions_);
  }

  template <typename _proto_TypeTraits,
            ::PROTOBUF_NAMESPACE_ID::internal::FieldType _field_type,
            bool _is_packed>
  inline void SetExtension(
      const ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier<
          TimeSeriesHeader, _proto_TypeTraits, _field_type, _is_packed>& id,
      typename _proto_TypeTraits::Singular::ConstType value) {
    _proto_TypeTraits::Set(id.number(), _field_type, value, &_extensions_);

  }

  template <typename _proto_TypeTraits,
            ::PROTOBUF_NAMESPACE_ID::internal::FieldType _field_type,
            bool _is_packed>
  inline void SetAllocatedExtension(
      const ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier<
          TimeSeriesHeader, _proto_TypeTraits, _field_type, _is_packed>& id,
      typename _proto_TypeTraits::Singular::MutableType value) {
    _proto_TypeTraits::SetAllocated(id.number(), _field_type, value,
                                    &_extensions_);

  }
  template <typename _proto_TypeTraits,
            ::PROTOBUF_NAMESPACE_ID::internal::FieldType _field_type,
            bool _is_packed>
  inline void UnsafeArenaSetAllocatedExtension(
      const ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier<
          TimeSeriesHeader, _proto_TypeTraits, _field_type, _is_packed>& id,
      typename _proto_TypeTraits::Singular::MutableType value) {
    _proto_TypeTraits::UnsafeArenaSetAllocated(id.number(), _field_type,
                                               value, &_extensions_);

  }
  template <typename _proto_TypeTraits,
            ::PROTOBUF_NAMESPACE_ID::internal::FieldType _field_type,
            bool _is_packed>
  PROTOBUF_NODISCARD inline
      typename _proto_TypeTraits::Singular::MutableType
      ReleaseExtension(
          const ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier<
              TimeSeriesHeader, _proto_TypeTraits, _field_type, _is_packed>& id) {

    return _proto_TypeTraits::Release(id.number(), _field_type,
                                      &_extensions_);
  }
  template <typename _proto_TypeTraits,
            ::PROTOBUF_NAMESPACE_ID::internal::FieldType _field_type,
            bool _is_packed>
  inline typename _proto_TypeTraits::Singular::MutableType
  UnsafeArenaReleaseExtension(
      const ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier<
          TimeSeriesHeader, _proto_TypeTraits, _field_type, _is_packed>& id) {

    return _proto_TypeTraits::UnsafeArenaRelease(id.number(), _field_type,
                                                 &_extensions_);
  }

  template <typename _proto_TypeTraits,
            ::PROTOBUF_NAMESPACE_ID::internal::FieldType _field_type,
            bool _is_packed>
  inline typename _proto_TypeTraits::Repeated::ConstType GetExtension(
      const ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier<
          TimeSeriesHeader, _proto_TypeTraits, _field_type, _is_packed>& id,
      int index) const {

    return _proto_TypeTraits::Get(id.number(), _extensions_, index);
  }

  template <typename _proto_TypeTraits,
            ::PROTOBUF_NAMESPACE_ID::internal::FieldType _field_type,
            bool _is_packed>
  inline typename _proto_TypeTraits::Repeated::MutableType MutableExtension(
      const ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier<
          TimeSeriesHeader, _proto_TypeTraits, _field_type, _is_packed>& id,
      int index) {

    return _proto_TypeTraits::Mutable(id.number(), index, &_extensions_);
  }

  template <typename _proto_TypeTraits,
            ::PROTOBUF_NAMESPACE_ID::internal::FieldType _field_type,
            bool _is_packed>
  inline void SetExtension(
      const ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier<
          TimeSeriesHeader, _proto_TypeTraits, _field_type, _is_packed>& id,
      int index, typename _proto_TypeTraits::Repeated::ConstType value) {
    _proto_TypeTraits::Set(id.number(), index, value, &_extensions_);

  }

  template <typename _proto_TypeTraits,
            ::PROTOBUF_NAMESPACE_ID::internal::FieldType _field_type,
            bool _is_packed>
  inline typename _proto_TypeTraits::Repeated::MutableType AddExtension(
      const ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier<
          TimeSeriesHeader, _proto_TypeTraits, _field_type, _is_packed>& id) {
    typename _proto_TypeTraits::Repeated::MutableType to_add =
        _proto_TypeTraits::Add(id.number(), _field_type, &_extensions_);

    return to_add;
  }

  template <typename _proto_TypeTraits,
            ::PROTOBUF_NAMESPACE_ID::internal::FieldType _field_type,
            bool _is_packed>
  inline void AddExtension(
      const ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier<
          TimeSeriesHeader, _proto_TypeTraits, _field_type, _is_packed>& id,
      typename _proto_TypeTraits::Repeated::ConstType value) {
    _proto_TypeTraits::Add(id.number(), _field_type, _is_packed, value,
                           &_extensions_);

  }

  template <typename _proto_TypeTraits,
            ::PROTOBUF_NAMESPACE_ID::internal::FieldType _field_type,
            bool _is_packed>
  inline const typename _proto_TypeTraits::Repeated::RepeatedFieldType&
  GetRepeatedExtension(
      const ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier<
          TimeSeriesHeader, _proto_TypeTraits, _field_type, _is_packed>& id) const {

    return _proto_TypeTraits::GetRepeated(id.number(), _extensions_);
  }

  template <typename _proto_TypeTraits,
            ::PROTOBUF_NAMESPACE_ID::internal::FieldType _field_type,
            bool _is_packed>
  inline typename _proto_TypeTraits::Repeated::RepeatedFieldType*
  MutableRepeatedExtension(
      const ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier<
          TimeSeriesHeader, _proto_TypeTraits, _field_type, _is_packed>& id) {

    return _proto_TypeTraits::MutableRepeated(id.number(), _field_type,
                                              _is_packed, &_extensions_);
  }

  // @@protoc_insertion_point(class_scope:mediapipe.TimeSeriesHeader)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::ExtensionSet _extensions_;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  double sample_rate_;
  int32_t num_channels_;
  int32_t num_samples_;
  double packet_rate_;
  double audio_sample_rate_;
  friend struct ::TableStruct_mediapipe_2fframework_2fformats_2ftime_5fseries_5fheader_2eproto;
};
// -------------------------------------------------------------------

class MultiStreamTimeSeriesHeader final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:mediapipe.MultiStreamTimeSeriesHeader) */ {
 public:
  inline MultiStreamTimeSeriesHeader() : MultiStreamTimeSeriesHeader(nullptr) {}
  ~MultiStreamTimeSeriesHeader() override;
  explicit constexpr MultiStreamTimeSeriesHeader(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  MultiStreamTimeSeriesHeader(const MultiStreamTimeSeriesHeader& from);
  MultiStreamTimeSeriesHeader(MultiStreamTimeSeriesHeader&& from) noexcept
    : MultiStreamTimeSeriesHeader() {
    *this = ::std::move(from);
  }

  inline MultiStreamTimeSeriesHeader& operator=(const MultiStreamTimeSeriesHeader& from) {
    CopyFrom(from);
    return *this;
  }
  inline MultiStreamTimeSeriesHeader& operator=(MultiStreamTimeSeriesHeader&& from) noexcept {
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
  static const MultiStreamTimeSeriesHeader& default_instance() {
    return *internal_default_instance();
  }
  static inline const MultiStreamTimeSeriesHeader* internal_default_instance() {
    return reinterpret_cast<const MultiStreamTimeSeriesHeader*>(
               &_MultiStreamTimeSeriesHeader_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(MultiStreamTimeSeriesHeader& a, MultiStreamTimeSeriesHeader& b) {
    a.Swap(&b);
  }
  inline void Swap(MultiStreamTimeSeriesHeader* other) {
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
  void UnsafeArenaSwap(MultiStreamTimeSeriesHeader* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  MultiStreamTimeSeriesHeader* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<MultiStreamTimeSeriesHeader>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const MultiStreamTimeSeriesHeader& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const MultiStreamTimeSeriesHeader& from);
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
  void InternalSwap(MultiStreamTimeSeriesHeader* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "mediapipe.MultiStreamTimeSeriesHeader";
  }
  protected:
  explicit MultiStreamTimeSeriesHeader(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kTimeSeriesHeaderFieldNumber = 1,
    kNumStreamsFieldNumber = 2,
  };
  // optional .mediapipe.TimeSeriesHeader time_series_header = 1;
  bool has_time_series_header() const;
  private:
  bool _internal_has_time_series_header() const;
  public:
  void clear_time_series_header();
  const ::mediapipe::TimeSeriesHeader& time_series_header() const;
  PROTOBUF_NODISCARD ::mediapipe::TimeSeriesHeader* release_time_series_header();
  ::mediapipe::TimeSeriesHeader* mutable_time_series_header();
  void set_allocated_time_series_header(::mediapipe::TimeSeriesHeader* time_series_header);
  private:
  const ::mediapipe::TimeSeriesHeader& _internal_time_series_header() const;
  ::mediapipe::TimeSeriesHeader* _internal_mutable_time_series_header();
  public:
  void unsafe_arena_set_allocated_time_series_header(
      ::mediapipe::TimeSeriesHeader* time_series_header);
  ::mediapipe::TimeSeriesHeader* unsafe_arena_release_time_series_header();

  // optional int32 num_streams = 2;
  bool has_num_streams() const;
  private:
  bool _internal_has_num_streams() const;
  public:
  void clear_num_streams();
  int32_t num_streams() const;
  void set_num_streams(int32_t value);
  private:
  int32_t _internal_num_streams() const;
  void _internal_set_num_streams(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:mediapipe.MultiStreamTimeSeriesHeader)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::mediapipe::TimeSeriesHeader* time_series_header_;
  int32_t num_streams_;
  friend struct ::TableStruct_mediapipe_2fframework_2fformats_2ftime_5fseries_5fheader_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TimeSeriesHeader

// optional double sample_rate = 1;
inline bool TimeSeriesHeader::_internal_has_sample_rate() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool TimeSeriesHeader::has_sample_rate() const {
  return _internal_has_sample_rate();
}
inline void TimeSeriesHeader::clear_sample_rate() {
  sample_rate_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline double TimeSeriesHeader::_internal_sample_rate() const {
  return sample_rate_;
}
inline double TimeSeriesHeader::sample_rate() const {
  // @@protoc_insertion_point(field_get:mediapipe.TimeSeriesHeader.sample_rate)
  return _internal_sample_rate();
}
inline void TimeSeriesHeader::_internal_set_sample_rate(double value) {
  _has_bits_[0] |= 0x00000001u;
  sample_rate_ = value;
}
inline void TimeSeriesHeader::set_sample_rate(double value) {
  _internal_set_sample_rate(value);
  // @@protoc_insertion_point(field_set:mediapipe.TimeSeriesHeader.sample_rate)
}

// optional int32 num_channels = 2;
inline bool TimeSeriesHeader::_internal_has_num_channels() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool TimeSeriesHeader::has_num_channels() const {
  return _internal_has_num_channels();
}
inline void TimeSeriesHeader::clear_num_channels() {
  num_channels_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline int32_t TimeSeriesHeader::_internal_num_channels() const {
  return num_channels_;
}
inline int32_t TimeSeriesHeader::num_channels() const {
  // @@protoc_insertion_point(field_get:mediapipe.TimeSeriesHeader.num_channels)
  return _internal_num_channels();
}
inline void TimeSeriesHeader::_internal_set_num_channels(int32_t value) {
  _has_bits_[0] |= 0x00000002u;
  num_channels_ = value;
}
inline void TimeSeriesHeader::set_num_channels(int32_t value) {
  _internal_set_num_channels(value);
  // @@protoc_insertion_point(field_set:mediapipe.TimeSeriesHeader.num_channels)
}

// optional int32 num_samples = 3;
inline bool TimeSeriesHeader::_internal_has_num_samples() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool TimeSeriesHeader::has_num_samples() const {
  return _internal_has_num_samples();
}
inline void TimeSeriesHeader::clear_num_samples() {
  num_samples_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline int32_t TimeSeriesHeader::_internal_num_samples() const {
  return num_samples_;
}
inline int32_t TimeSeriesHeader::num_samples() const {
  // @@protoc_insertion_point(field_get:mediapipe.TimeSeriesHeader.num_samples)
  return _internal_num_samples();
}
inline void TimeSeriesHeader::_internal_set_num_samples(int32_t value) {
  _has_bits_[0] |= 0x00000004u;
  num_samples_ = value;
}
inline void TimeSeriesHeader::set_num_samples(int32_t value) {
  _internal_set_num_samples(value);
  // @@protoc_insertion_point(field_set:mediapipe.TimeSeriesHeader.num_samples)
}

// optional double packet_rate = 4;
inline bool TimeSeriesHeader::_internal_has_packet_rate() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool TimeSeriesHeader::has_packet_rate() const {
  return _internal_has_packet_rate();
}
inline void TimeSeriesHeader::clear_packet_rate() {
  packet_rate_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline double TimeSeriesHeader::_internal_packet_rate() const {
  return packet_rate_;
}
inline double TimeSeriesHeader::packet_rate() const {
  // @@protoc_insertion_point(field_get:mediapipe.TimeSeriesHeader.packet_rate)
  return _internal_packet_rate();
}
inline void TimeSeriesHeader::_internal_set_packet_rate(double value) {
  _has_bits_[0] |= 0x00000008u;
  packet_rate_ = value;
}
inline void TimeSeriesHeader::set_packet_rate(double value) {
  _internal_set_packet_rate(value);
  // @@protoc_insertion_point(field_set:mediapipe.TimeSeriesHeader.packet_rate)
}

// optional double audio_sample_rate = 5;
inline bool TimeSeriesHeader::_internal_has_audio_sample_rate() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool TimeSeriesHeader::has_audio_sample_rate() const {
  return _internal_has_audio_sample_rate();
}
inline void TimeSeriesHeader::clear_audio_sample_rate() {
  audio_sample_rate_ = 0;
  _has_bits_[0] &= ~0x00000010u;
}
inline double TimeSeriesHeader::_internal_audio_sample_rate() const {
  return audio_sample_rate_;
}
inline double TimeSeriesHeader::audio_sample_rate() const {
  // @@protoc_insertion_point(field_get:mediapipe.TimeSeriesHeader.audio_sample_rate)
  return _internal_audio_sample_rate();
}
inline void TimeSeriesHeader::_internal_set_audio_sample_rate(double value) {
  _has_bits_[0] |= 0x00000010u;
  audio_sample_rate_ = value;
}
inline void TimeSeriesHeader::set_audio_sample_rate(double value) {
  _internal_set_audio_sample_rate(value);
  // @@protoc_insertion_point(field_set:mediapipe.TimeSeriesHeader.audio_sample_rate)
}

// -------------------------------------------------------------------

// MultiStreamTimeSeriesHeader

// optional .mediapipe.TimeSeriesHeader time_series_header = 1;
inline bool MultiStreamTimeSeriesHeader::_internal_has_time_series_header() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || time_series_header_ != nullptr);
  return value;
}
inline bool MultiStreamTimeSeriesHeader::has_time_series_header() const {
  return _internal_has_time_series_header();
}
inline void MultiStreamTimeSeriesHeader::clear_time_series_header() {
  if (time_series_header_ != nullptr) time_series_header_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
inline const ::mediapipe::TimeSeriesHeader& MultiStreamTimeSeriesHeader::_internal_time_series_header() const {
  const ::mediapipe::TimeSeriesHeader* p = time_series_header_;
  return p != nullptr ? *p : reinterpret_cast<const ::mediapipe::TimeSeriesHeader&>(
      ::mediapipe::_TimeSeriesHeader_default_instance_);
}
inline const ::mediapipe::TimeSeriesHeader& MultiStreamTimeSeriesHeader::time_series_header() const {
  // @@protoc_insertion_point(field_get:mediapipe.MultiStreamTimeSeriesHeader.time_series_header)
  return _internal_time_series_header();
}
inline void MultiStreamTimeSeriesHeader::unsafe_arena_set_allocated_time_series_header(
    ::mediapipe::TimeSeriesHeader* time_series_header) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(time_series_header_);
  }
  time_series_header_ = time_series_header;
  if (time_series_header) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:mediapipe.MultiStreamTimeSeriesHeader.time_series_header)
}
inline ::mediapipe::TimeSeriesHeader* MultiStreamTimeSeriesHeader::release_time_series_header() {
  _has_bits_[0] &= ~0x00000001u;
  ::mediapipe::TimeSeriesHeader* temp = time_series_header_;
  time_series_header_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::mediapipe::TimeSeriesHeader* MultiStreamTimeSeriesHeader::unsafe_arena_release_time_series_header() {
  // @@protoc_insertion_point(field_release:mediapipe.MultiStreamTimeSeriesHeader.time_series_header)
  _has_bits_[0] &= ~0x00000001u;
  ::mediapipe::TimeSeriesHeader* temp = time_series_header_;
  time_series_header_ = nullptr;
  return temp;
}
inline ::mediapipe::TimeSeriesHeader* MultiStreamTimeSeriesHeader::_internal_mutable_time_series_header() {
  _has_bits_[0] |= 0x00000001u;
  if (time_series_header_ == nullptr) {
    auto* p = CreateMaybeMessage<::mediapipe::TimeSeriesHeader>(GetArenaForAllocation());
    time_series_header_ = p;
  }
  return time_series_header_;
}
inline ::mediapipe::TimeSeriesHeader* MultiStreamTimeSeriesHeader::mutable_time_series_header() {
  ::mediapipe::TimeSeriesHeader* _msg = _internal_mutable_time_series_header();
  // @@protoc_insertion_point(field_mutable:mediapipe.MultiStreamTimeSeriesHeader.time_series_header)
  return _msg;
}
inline void MultiStreamTimeSeriesHeader::set_allocated_time_series_header(::mediapipe::TimeSeriesHeader* time_series_header) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete time_series_header_;
  }
  if (time_series_header) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper<::mediapipe::TimeSeriesHeader>::GetOwningArena(time_series_header);
    if (message_arena != submessage_arena) {
      time_series_header = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, time_series_header, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  time_series_header_ = time_series_header;
  // @@protoc_insertion_point(field_set_allocated:mediapipe.MultiStreamTimeSeriesHeader.time_series_header)
}

// optional int32 num_streams = 2;
inline bool MultiStreamTimeSeriesHeader::_internal_has_num_streams() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool MultiStreamTimeSeriesHeader::has_num_streams() const {
  return _internal_has_num_streams();
}
inline void MultiStreamTimeSeriesHeader::clear_num_streams() {
  num_streams_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline int32_t MultiStreamTimeSeriesHeader::_internal_num_streams() const {
  return num_streams_;
}
inline int32_t MultiStreamTimeSeriesHeader::num_streams() const {
  // @@protoc_insertion_point(field_get:mediapipe.MultiStreamTimeSeriesHeader.num_streams)
  return _internal_num_streams();
}
inline void MultiStreamTimeSeriesHeader::_internal_set_num_streams(int32_t value) {
  _has_bits_[0] |= 0x00000002u;
  num_streams_ = value;
}
inline void MultiStreamTimeSeriesHeader::set_num_streams(int32_t value) {
  _internal_set_num_streams(value);
  // @@protoc_insertion_point(field_set:mediapipe.MultiStreamTimeSeriesHeader.num_streams)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace mediapipe

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_mediapipe_2fframework_2fformats_2ftime_5fseries_5fheader_2eproto