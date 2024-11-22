// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mediapipe/framework/formats/time_series_header.proto

#include "mediapipe/framework/formats/time_series_header.pb.h"

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
constexpr TimeSeriesHeader::TimeSeriesHeader(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : sample_rate_(0)
  , num_channels_(0)
  , num_samples_(0)
  , packet_rate_(0)
  , audio_sample_rate_(0){}
struct TimeSeriesHeaderDefaultTypeInternal {
  constexpr TimeSeriesHeaderDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~TimeSeriesHeaderDefaultTypeInternal() {}
  union {
    TimeSeriesHeader _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT TimeSeriesHeaderDefaultTypeInternal _TimeSeriesHeader_default_instance_;
constexpr MultiStreamTimeSeriesHeader::MultiStreamTimeSeriesHeader(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : time_series_header_(nullptr)
  , num_streams_(0){}
struct MultiStreamTimeSeriesHeaderDefaultTypeInternal {
  constexpr MultiStreamTimeSeriesHeaderDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~MultiStreamTimeSeriesHeaderDefaultTypeInternal() {}
  union {
    MultiStreamTimeSeriesHeader _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT MultiStreamTimeSeriesHeaderDefaultTypeInternal _MultiStreamTimeSeriesHeader_default_instance_;
}  // namespace mediapipe
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_mediapipe_2fframework_2fformats_2ftime_5fseries_5fheader_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_mediapipe_2fframework_2fformats_2ftime_5fseries_5fheader_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_mediapipe_2fframework_2fformats_2ftime_5fseries_5fheader_2eproto = nullptr;

const uint32_t TableStruct_mediapipe_2fframework_2fformats_2ftime_5fseries_5fheader_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::mediapipe::TimeSeriesHeader, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::TimeSeriesHeader, _internal_metadata_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::TimeSeriesHeader, _extensions_),
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::mediapipe::TimeSeriesHeader, sample_rate_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::TimeSeriesHeader, num_channels_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::TimeSeriesHeader, num_samples_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::TimeSeriesHeader, packet_rate_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::TimeSeriesHeader, audio_sample_rate_),
  0,
  1,
  2,
  3,
  4,
  PROTOBUF_FIELD_OFFSET(::mediapipe::MultiStreamTimeSeriesHeader, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::MultiStreamTimeSeriesHeader, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::mediapipe::MultiStreamTimeSeriesHeader, time_series_header_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::MultiStreamTimeSeriesHeader, num_streams_),
  0,
  1,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 11, -1, sizeof(::mediapipe::TimeSeriesHeader)},
  { 16, 24, -1, sizeof(::mediapipe::MultiStreamTimeSeriesHeader)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::mediapipe::_TimeSeriesHeader_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::mediapipe::_MultiStreamTimeSeriesHeader_default_instance_),
};

const char descriptor_table_protodef_mediapipe_2fframework_2fformats_2ftime_5fseries_5fheader_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n4mediapipe/framework/formats/time_serie"
  "s_header.proto\022\tmediapipe\"\216\001\n\020TimeSeries"
  "Header\022\023\n\013sample_rate\030\001 \001(\001\022\024\n\014num_chann"
  "els\030\002 \001(\005\022\023\n\013num_samples\030\003 \001(\005\022\023\n\013packet"
  "_rate\030\004 \001(\001\022\031\n\021audio_sample_rate\030\005 \001(\001*\n"
  "\010\240\234\001\020\200\200\200\200\002\"k\n\033MultiStreamTimeSeriesHeade"
  "r\0227\n\022time_series_header\030\001 \001(\0132\033.mediapip"
  "e.TimeSeriesHeader\022\023\n\013num_streams\030\002 \001(\005"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_mediapipe_2fframework_2fformats_2ftime_5fseries_5fheader_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_mediapipe_2fframework_2fformats_2ftime_5fseries_5fheader_2eproto = {
  false, false, 319, descriptor_table_protodef_mediapipe_2fframework_2fformats_2ftime_5fseries_5fheader_2eproto, "mediapipe/framework/formats/time_series_header.proto", 
  &descriptor_table_mediapipe_2fframework_2fformats_2ftime_5fseries_5fheader_2eproto_once, nullptr, 0, 2,
  schemas, file_default_instances, TableStruct_mediapipe_2fframework_2fformats_2ftime_5fseries_5fheader_2eproto::offsets,
  file_level_metadata_mediapipe_2fframework_2fformats_2ftime_5fseries_5fheader_2eproto, file_level_enum_descriptors_mediapipe_2fframework_2fformats_2ftime_5fseries_5fheader_2eproto, file_level_service_descriptors_mediapipe_2fframework_2fformats_2ftime_5fseries_5fheader_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_mediapipe_2fframework_2fformats_2ftime_5fseries_5fheader_2eproto_getter() {
  return &descriptor_table_mediapipe_2fframework_2fformats_2ftime_5fseries_5fheader_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_mediapipe_2fframework_2fformats_2ftime_5fseries_5fheader_2eproto(&descriptor_table_mediapipe_2fframework_2fformats_2ftime_5fseries_5fheader_2eproto);
namespace mediapipe {

// ===================================================================

class TimeSeriesHeader::_Internal {
 public:
  using HasBits = decltype(std::declval<TimeSeriesHeader>()._has_bits_);
  static void set_has_sample_rate(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_num_channels(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_num_samples(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_packet_rate(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_audio_sample_rate(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
};

TimeSeriesHeader::TimeSeriesHeader(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  _extensions_(arena) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:mediapipe.TimeSeriesHeader)
}
TimeSeriesHeader::TimeSeriesHeader(const TimeSeriesHeader& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _extensions_.MergeFrom(internal_default_instance(), from._extensions_);
  ::memcpy(&sample_rate_, &from.sample_rate_,
    static_cast<size_t>(reinterpret_cast<char*>(&audio_sample_rate_) -
    reinterpret_cast<char*>(&sample_rate_)) + sizeof(audio_sample_rate_));
  // @@protoc_insertion_point(copy_constructor:mediapipe.TimeSeriesHeader)
}

inline void TimeSeriesHeader::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&sample_rate_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&audio_sample_rate_) -
    reinterpret_cast<char*>(&sample_rate_)) + sizeof(audio_sample_rate_));
}

TimeSeriesHeader::~TimeSeriesHeader() {
  // @@protoc_insertion_point(destructor:mediapipe.TimeSeriesHeader)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void TimeSeriesHeader::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void TimeSeriesHeader::ArenaDtor(void* object) {
  TimeSeriesHeader* _this = reinterpret_cast< TimeSeriesHeader* >(object);
  (void)_this;
}
void TimeSeriesHeader::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void TimeSeriesHeader::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void TimeSeriesHeader::Clear() {
// @@protoc_insertion_point(message_clear_start:mediapipe.TimeSeriesHeader)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _extensions_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    ::memset(&sample_rate_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&audio_sample_rate_) -
        reinterpret_cast<char*>(&sample_rate_)) + sizeof(audio_sample_rate_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* TimeSeriesHeader::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional double sample_rate = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 9)) {
          _Internal::set_has_sample_rate(&has_bits);
          sample_rate_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else
          goto handle_unusual;
        continue;
      // optional int32 num_channels = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_num_channels(&has_bits);
          num_channels_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int32 num_samples = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_num_samples(&has_bits);
          num_samples_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional double packet_rate = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 33)) {
          _Internal::set_has_packet_rate(&has_bits);
          packet_rate_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else
          goto handle_unusual;
        continue;
      // optional double audio_sample_rate = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 41)) {
          _Internal::set_has_audio_sample_rate(&has_bits);
          audio_sample_rate_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
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
    if ((160000u <= tag)) {
      ptr = _extensions_.ParseField(tag, ptr, internal_default_instance(), &_internal_metadata_, ctx);
      CHK_(ptr != nullptr);
      continue;
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

uint8_t* TimeSeriesHeader::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mediapipe.TimeSeriesHeader)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional double sample_rate = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(1, this->_internal_sample_rate(), target);
  }

  // optional int32 num_channels = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_num_channels(), target);
  }

  // optional int32 num_samples = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(3, this->_internal_num_samples(), target);
  }

  // optional double packet_rate = 4;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(4, this->_internal_packet_rate(), target);
  }

  // optional double audio_sample_rate = 5;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(5, this->_internal_audio_sample_rate(), target);
  }

  // Extension range [20000, 536870912)
  target = _extensions_._InternalSerialize(
  internal_default_instance(), 20000, 536870912, target, stream);

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mediapipe.TimeSeriesHeader)
  return target;
}

size_t TimeSeriesHeader::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mediapipe.TimeSeriesHeader)
  size_t total_size = 0;

  total_size += _extensions_.ByteSize();

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    // optional double sample_rate = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + 8;
    }

    // optional int32 num_channels = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_num_channels());
    }

    // optional int32 num_samples = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_num_samples());
    }

    // optional double packet_rate = 4;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 + 8;
    }

    // optional double audio_sample_rate = 5;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 + 8;
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData TimeSeriesHeader::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    TimeSeriesHeader::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*TimeSeriesHeader::GetClassData() const { return &_class_data_; }

void TimeSeriesHeader::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<TimeSeriesHeader *>(to)->MergeFrom(
      static_cast<const TimeSeriesHeader &>(from));
}


void TimeSeriesHeader::MergeFrom(const TimeSeriesHeader& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mediapipe.TimeSeriesHeader)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      sample_rate_ = from.sample_rate_;
    }
    if (cached_has_bits & 0x00000002u) {
      num_channels_ = from.num_channels_;
    }
    if (cached_has_bits & 0x00000004u) {
      num_samples_ = from.num_samples_;
    }
    if (cached_has_bits & 0x00000008u) {
      packet_rate_ = from.packet_rate_;
    }
    if (cached_has_bits & 0x00000010u) {
      audio_sample_rate_ = from.audio_sample_rate_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _extensions_.MergeFrom(internal_default_instance(), from._extensions_);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void TimeSeriesHeader::CopyFrom(const TimeSeriesHeader& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mediapipe.TimeSeriesHeader)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TimeSeriesHeader::IsInitialized() const {
  if (!_extensions_.IsInitialized()) {
    return false;
  }

  return true;
}

void TimeSeriesHeader::InternalSwap(TimeSeriesHeader* other) {
  using std::swap;
  _extensions_.InternalSwap(&other->_extensions_);
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(TimeSeriesHeader, audio_sample_rate_)
      + sizeof(TimeSeriesHeader::audio_sample_rate_)
      - PROTOBUF_FIELD_OFFSET(TimeSeriesHeader, sample_rate_)>(
          reinterpret_cast<char*>(&sample_rate_),
          reinterpret_cast<char*>(&other->sample_rate_));
}

::PROTOBUF_NAMESPACE_ID::Metadata TimeSeriesHeader::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_mediapipe_2fframework_2fformats_2ftime_5fseries_5fheader_2eproto_getter, &descriptor_table_mediapipe_2fframework_2fformats_2ftime_5fseries_5fheader_2eproto_once,
      file_level_metadata_mediapipe_2fframework_2fformats_2ftime_5fseries_5fheader_2eproto[0]);
}

// ===================================================================

class MultiStreamTimeSeriesHeader::_Internal {
 public:
  using HasBits = decltype(std::declval<MultiStreamTimeSeriesHeader>()._has_bits_);
  static const ::mediapipe::TimeSeriesHeader& time_series_header(const MultiStreamTimeSeriesHeader* msg);
  static void set_has_time_series_header(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_num_streams(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

const ::mediapipe::TimeSeriesHeader&
MultiStreamTimeSeriesHeader::_Internal::time_series_header(const MultiStreamTimeSeriesHeader* msg) {
  return *msg->time_series_header_;
}
MultiStreamTimeSeriesHeader::MultiStreamTimeSeriesHeader(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:mediapipe.MultiStreamTimeSeriesHeader)
}
MultiStreamTimeSeriesHeader::MultiStreamTimeSeriesHeader(const MultiStreamTimeSeriesHeader& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_time_series_header()) {
    time_series_header_ = new ::mediapipe::TimeSeriesHeader(*from.time_series_header_);
  } else {
    time_series_header_ = nullptr;
  }
  num_streams_ = from.num_streams_;
  // @@protoc_insertion_point(copy_constructor:mediapipe.MultiStreamTimeSeriesHeader)
}

inline void MultiStreamTimeSeriesHeader::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&time_series_header_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&num_streams_) -
    reinterpret_cast<char*>(&time_series_header_)) + sizeof(num_streams_));
}

MultiStreamTimeSeriesHeader::~MultiStreamTimeSeriesHeader() {
  // @@protoc_insertion_point(destructor:mediapipe.MultiStreamTimeSeriesHeader)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void MultiStreamTimeSeriesHeader::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete time_series_header_;
}

void MultiStreamTimeSeriesHeader::ArenaDtor(void* object) {
  MultiStreamTimeSeriesHeader* _this = reinterpret_cast< MultiStreamTimeSeriesHeader* >(object);
  (void)_this;
}
void MultiStreamTimeSeriesHeader::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void MultiStreamTimeSeriesHeader::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void MultiStreamTimeSeriesHeader::Clear() {
// @@protoc_insertion_point(message_clear_start:mediapipe.MultiStreamTimeSeriesHeader)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(time_series_header_ != nullptr);
    time_series_header_->Clear();
  }
  num_streams_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MultiStreamTimeSeriesHeader::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional .mediapipe.TimeSeriesHeader time_series_header = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_time_series_header(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int32 num_streams = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_num_streams(&has_bits);
          num_streams_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
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

uint8_t* MultiStreamTimeSeriesHeader::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mediapipe.MultiStreamTimeSeriesHeader)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .mediapipe.TimeSeriesHeader time_series_header = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::time_series_header(this), target, stream);
  }

  // optional int32 num_streams = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_num_streams(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mediapipe.MultiStreamTimeSeriesHeader)
  return target;
}

size_t MultiStreamTimeSeriesHeader::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mediapipe.MultiStreamTimeSeriesHeader)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional .mediapipe.TimeSeriesHeader time_series_header = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *time_series_header_);
    }

    // optional int32 num_streams = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_num_streams());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData MultiStreamTimeSeriesHeader::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    MultiStreamTimeSeriesHeader::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*MultiStreamTimeSeriesHeader::GetClassData() const { return &_class_data_; }

void MultiStreamTimeSeriesHeader::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<MultiStreamTimeSeriesHeader *>(to)->MergeFrom(
      static_cast<const MultiStreamTimeSeriesHeader &>(from));
}


void MultiStreamTimeSeriesHeader::MergeFrom(const MultiStreamTimeSeriesHeader& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mediapipe.MultiStreamTimeSeriesHeader)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_mutable_time_series_header()->::mediapipe::TimeSeriesHeader::MergeFrom(from._internal_time_series_header());
    }
    if (cached_has_bits & 0x00000002u) {
      num_streams_ = from.num_streams_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void MultiStreamTimeSeriesHeader::CopyFrom(const MultiStreamTimeSeriesHeader& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mediapipe.MultiStreamTimeSeriesHeader)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MultiStreamTimeSeriesHeader::IsInitialized() const {
  if (_internal_has_time_series_header()) {
    if (!time_series_header_->IsInitialized()) return false;
  }
  return true;
}

void MultiStreamTimeSeriesHeader::InternalSwap(MultiStreamTimeSeriesHeader* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(MultiStreamTimeSeriesHeader, num_streams_)
      + sizeof(MultiStreamTimeSeriesHeader::num_streams_)
      - PROTOBUF_FIELD_OFFSET(MultiStreamTimeSeriesHeader, time_series_header_)>(
          reinterpret_cast<char*>(&time_series_header_),
          reinterpret_cast<char*>(&other->time_series_header_));
}

::PROTOBUF_NAMESPACE_ID::Metadata MultiStreamTimeSeriesHeader::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_mediapipe_2fframework_2fformats_2ftime_5fseries_5fheader_2eproto_getter, &descriptor_table_mediapipe_2fframework_2fformats_2ftime_5fseries_5fheader_2eproto_once,
      file_level_metadata_mediapipe_2fframework_2fformats_2ftime_5fseries_5fheader_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace mediapipe
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::mediapipe::TimeSeriesHeader* Arena::CreateMaybeMessage< ::mediapipe::TimeSeriesHeader >(Arena* arena) {
  return Arena::CreateMessageInternal< ::mediapipe::TimeSeriesHeader >(arena);
}
template<> PROTOBUF_NOINLINE ::mediapipe::MultiStreamTimeSeriesHeader* Arena::CreateMaybeMessage< ::mediapipe::MultiStreamTimeSeriesHeader >(Arena* arena) {
  return Arena::CreateMessageInternal< ::mediapipe::MultiStreamTimeSeriesHeader >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
