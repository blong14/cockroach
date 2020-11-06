// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: util/hlc/legacy_timestamp.proto

#include "util/hlc/legacy_timestamp.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace cockroach {
namespace util {
namespace hlc {
class LegacyTimestampDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<LegacyTimestamp>
      _instance;
} _LegacyTimestamp_default_instance_;
}  // namespace hlc
}  // namespace util
}  // namespace cockroach
namespace protobuf_util_2fhlc_2flegacy_5ftimestamp_2eproto {
static void InitDefaultsLegacyTimestamp() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::cockroach::util::hlc::_LegacyTimestamp_default_instance_;
    new (ptr) ::cockroach::util::hlc::LegacyTimestamp();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::cockroach::util::hlc::LegacyTimestamp::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_LegacyTimestamp =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsLegacyTimestamp}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_LegacyTimestamp.base);
}

}  // namespace protobuf_util_2fhlc_2flegacy_5ftimestamp_2eproto
namespace cockroach {
namespace util {
namespace hlc {

// ===================================================================

void LegacyTimestamp::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LegacyTimestamp::kWallTimeFieldNumber;
const int LegacyTimestamp::kLogicalFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LegacyTimestamp::LegacyTimestamp()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_util_2fhlc_2flegacy_5ftimestamp_2eproto::scc_info_LegacyTimestamp.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:cockroach.util.hlc.LegacyTimestamp)
}
LegacyTimestamp::LegacyTimestamp(const LegacyTimestamp& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&wall_time_, &from.wall_time_,
    static_cast<size_t>(reinterpret_cast<char*>(&logical_) -
    reinterpret_cast<char*>(&wall_time_)) + sizeof(logical_));
  // @@protoc_insertion_point(copy_constructor:cockroach.util.hlc.LegacyTimestamp)
}

void LegacyTimestamp::SharedCtor() {
  ::memset(&wall_time_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&logical_) -
      reinterpret_cast<char*>(&wall_time_)) + sizeof(logical_));
}

LegacyTimestamp::~LegacyTimestamp() {
  // @@protoc_insertion_point(destructor:cockroach.util.hlc.LegacyTimestamp)
  SharedDtor();
}

void LegacyTimestamp::SharedDtor() {
}

void LegacyTimestamp::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const LegacyTimestamp& LegacyTimestamp::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_util_2fhlc_2flegacy_5ftimestamp_2eproto::scc_info_LegacyTimestamp.base);
  return *internal_default_instance();
}


void LegacyTimestamp::Clear() {
// @@protoc_insertion_point(message_clear_start:cockroach.util.hlc.LegacyTimestamp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    ::memset(&wall_time_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&logical_) -
        reinterpret_cast<char*>(&wall_time_)) + sizeof(logical_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool LegacyTimestamp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:cockroach.util.hlc.LegacyTimestamp)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_wall_time();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &wall_time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_logical();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &logical_)));
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:cockroach.util.hlc.LegacyTimestamp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cockroach.util.hlc.LegacyTimestamp)
  return false;
#undef DO_
}

void LegacyTimestamp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cockroach.util.hlc.LegacyTimestamp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->wall_time(), output);
  }

  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->logical(), output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:cockroach.util.hlc.LegacyTimestamp)
}

size_t LegacyTimestamp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:cockroach.util.hlc.LegacyTimestamp)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  if (_has_bits_[0 / 32] & 3u) {
    if (has_wall_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->wall_time());
    }

    if (has_logical()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->logical());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void LegacyTimestamp::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const LegacyTimestamp*>(&from));
}

void LegacyTimestamp::MergeFrom(const LegacyTimestamp& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:cockroach.util.hlc.LegacyTimestamp)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      wall_time_ = from.wall_time_;
    }
    if (cached_has_bits & 0x00000002u) {
      logical_ = from.logical_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void LegacyTimestamp::CopyFrom(const LegacyTimestamp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cockroach.util.hlc.LegacyTimestamp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LegacyTimestamp::IsInitialized() const {
  return true;
}

void LegacyTimestamp::Swap(LegacyTimestamp* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LegacyTimestamp::InternalSwap(LegacyTimestamp* other) {
  using std::swap;
  swap(wall_time_, other->wall_time_);
  swap(logical_, other->logical_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::std::string LegacyTimestamp::GetTypeName() const {
  return "cockroach.util.hlc.LegacyTimestamp";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace hlc
}  // namespace util
}  // namespace cockroach
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::cockroach::util::hlc::LegacyTimestamp* Arena::CreateMaybeMessage< ::cockroach::util::hlc::LegacyTimestamp >(Arena* arena) {
  return Arena::CreateInternal< ::cockroach::util::hlc::LegacyTimestamp >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)