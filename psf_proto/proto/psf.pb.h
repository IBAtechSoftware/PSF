// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/psf.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_proto_2fpsf_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_proto_2fpsf_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3019000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3019006 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_proto_2fpsf_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_proto_2fpsf_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2fpsf_2eproto;
namespace PSFProto {
class PSFSaveFile;
struct PSFSaveFileDefaultTypeInternal;
extern PSFSaveFileDefaultTypeInternal _PSFSaveFile_default_instance_;
class PSFSaveFile_PSFKeyValue;
struct PSFSaveFile_PSFKeyValueDefaultTypeInternal;
extern PSFSaveFile_PSFKeyValueDefaultTypeInternal _PSFSaveFile_PSFKeyValue_default_instance_;
}  // namespace PSFProto
PROTOBUF_NAMESPACE_OPEN
template<> ::PSFProto::PSFSaveFile* Arena::CreateMaybeMessage<::PSFProto::PSFSaveFile>(Arena*);
template<> ::PSFProto::PSFSaveFile_PSFKeyValue* Arena::CreateMaybeMessage<::PSFProto::PSFSaveFile_PSFKeyValue>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace PSFProto {

enum PSFSaveFile_PSFValueType : int {
  PSFSaveFile_PSFValueType_Int32 = 0,
  PSFSaveFile_PSFValueType_String = 1,
  PSFSaveFile_PSFValueType_Float = 2,
  PSFSaveFile_PSFValueType_Double = 3
};
bool PSFSaveFile_PSFValueType_IsValid(int value);
constexpr PSFSaveFile_PSFValueType PSFSaveFile_PSFValueType_PSFValueType_MIN = PSFSaveFile_PSFValueType_Int32;
constexpr PSFSaveFile_PSFValueType PSFSaveFile_PSFValueType_PSFValueType_MAX = PSFSaveFile_PSFValueType_Double;
constexpr int PSFSaveFile_PSFValueType_PSFValueType_ARRAYSIZE = PSFSaveFile_PSFValueType_PSFValueType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* PSFSaveFile_PSFValueType_descriptor();
template<typename T>
inline const std::string& PSFSaveFile_PSFValueType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, PSFSaveFile_PSFValueType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function PSFSaveFile_PSFValueType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    PSFSaveFile_PSFValueType_descriptor(), enum_t_value);
}
inline bool PSFSaveFile_PSFValueType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, PSFSaveFile_PSFValueType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<PSFSaveFile_PSFValueType>(
    PSFSaveFile_PSFValueType_descriptor(), name, value);
}
// ===================================================================

class PSFSaveFile_PSFKeyValue final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:PSFProto.PSFSaveFile.PSFKeyValue) */ {
 public:
  inline PSFSaveFile_PSFKeyValue() : PSFSaveFile_PSFKeyValue(nullptr) {}
  ~PSFSaveFile_PSFKeyValue() override;
  explicit constexpr PSFSaveFile_PSFKeyValue(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  PSFSaveFile_PSFKeyValue(const PSFSaveFile_PSFKeyValue& from);
  PSFSaveFile_PSFKeyValue(PSFSaveFile_PSFKeyValue&& from) noexcept
    : PSFSaveFile_PSFKeyValue() {
    *this = ::std::move(from);
  }

  inline PSFSaveFile_PSFKeyValue& operator=(const PSFSaveFile_PSFKeyValue& from) {
    CopyFrom(from);
    return *this;
  }
  inline PSFSaveFile_PSFKeyValue& operator=(PSFSaveFile_PSFKeyValue&& from) noexcept {
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
  static const PSFSaveFile_PSFKeyValue& default_instance() {
    return *internal_default_instance();
  }
  static inline const PSFSaveFile_PSFKeyValue* internal_default_instance() {
    return reinterpret_cast<const PSFSaveFile_PSFKeyValue*>(
               &_PSFSaveFile_PSFKeyValue_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PSFSaveFile_PSFKeyValue& a, PSFSaveFile_PSFKeyValue& b) {
    a.Swap(&b);
  }
  inline void Swap(PSFSaveFile_PSFKeyValue* other) {
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
  void UnsafeArenaSwap(PSFSaveFile_PSFKeyValue* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  PSFSaveFile_PSFKeyValue* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<PSFSaveFile_PSFKeyValue>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const PSFSaveFile_PSFKeyValue& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const PSFSaveFile_PSFKeyValue& from);
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
  void InternalSwap(PSFSaveFile_PSFKeyValue* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "PSFProto.PSFSaveFile.PSFKeyValue";
  }
  protected:
  explicit PSFSaveFile_PSFKeyValue(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kStringValFieldNumber = 3,
    kTypeFieldNumber = 1,
    kIntValFieldNumber = 2,
    kDoubleValFieldNumber = 5,
    kFloatValFieldNumber = 4,
  };
  // optional string stringVal = 3;
  bool has_stringval() const;
  private:
  bool _internal_has_stringval() const;
  public:
  void clear_stringval();
  const std::string& stringval() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_stringval(ArgT0&& arg0, ArgT... args);
  std::string* mutable_stringval();
  PROTOBUF_NODISCARD std::string* release_stringval();
  void set_allocated_stringval(std::string* stringval);
  private:
  const std::string& _internal_stringval() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_stringval(const std::string& value);
  std::string* _internal_mutable_stringval();
  public:

  // required .PSFProto.PSFSaveFile.PSFValueType type = 1;
  bool has_type() const;
  private:
  bool _internal_has_type() const;
  public:
  void clear_type();
  ::PSFProto::PSFSaveFile_PSFValueType type() const;
  void set_type(::PSFProto::PSFSaveFile_PSFValueType value);
  private:
  ::PSFProto::PSFSaveFile_PSFValueType _internal_type() const;
  void _internal_set_type(::PSFProto::PSFSaveFile_PSFValueType value);
  public:

  // optional int32 intVal = 2;
  bool has_intval() const;
  private:
  bool _internal_has_intval() const;
  public:
  void clear_intval();
  int32_t intval() const;
  void set_intval(int32_t value);
  private:
  int32_t _internal_intval() const;
  void _internal_set_intval(int32_t value);
  public:

  // optional double doubleVal = 5;
  bool has_doubleval() const;
  private:
  bool _internal_has_doubleval() const;
  public:
  void clear_doubleval();
  double doubleval() const;
  void set_doubleval(double value);
  private:
  double _internal_doubleval() const;
  void _internal_set_doubleval(double value);
  public:

  // optional float floatVal = 4;
  bool has_floatval() const;
  private:
  bool _internal_has_floatval() const;
  public:
  void clear_floatval();
  float floatval() const;
  void set_floatval(float value);
  private:
  float _internal_floatval() const;
  void _internal_set_floatval(float value);
  public:

  // @@protoc_insertion_point(class_scope:PSFProto.PSFSaveFile.PSFKeyValue)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr stringval_;
  int type_;
  int32_t intval_;
  double doubleval_;
  float floatval_;
  friend struct ::TableStruct_proto_2fpsf_2eproto;
};
// -------------------------------------------------------------------

class PSFSaveFile final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:PSFProto.PSFSaveFile) */ {
 public:
  inline PSFSaveFile() : PSFSaveFile(nullptr) {}
  ~PSFSaveFile() override;
  explicit constexpr PSFSaveFile(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  PSFSaveFile(const PSFSaveFile& from);
  PSFSaveFile(PSFSaveFile&& from) noexcept
    : PSFSaveFile() {
    *this = ::std::move(from);
  }

  inline PSFSaveFile& operator=(const PSFSaveFile& from) {
    CopyFrom(from);
    return *this;
  }
  inline PSFSaveFile& operator=(PSFSaveFile&& from) noexcept {
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
  static const PSFSaveFile& default_instance() {
    return *internal_default_instance();
  }
  static inline const PSFSaveFile* internal_default_instance() {
    return reinterpret_cast<const PSFSaveFile*>(
               &_PSFSaveFile_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(PSFSaveFile& a, PSFSaveFile& b) {
    a.Swap(&b);
  }
  inline void Swap(PSFSaveFile* other) {
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
  void UnsafeArenaSwap(PSFSaveFile* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  PSFSaveFile* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<PSFSaveFile>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const PSFSaveFile& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const PSFSaveFile& from);
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
  void InternalSwap(PSFSaveFile* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "PSFProto.PSFSaveFile";
  }
  protected:
  explicit PSFSaveFile(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef PSFSaveFile_PSFKeyValue PSFKeyValue;

  typedef PSFSaveFile_PSFValueType PSFValueType;
  static constexpr PSFValueType Int32 =
    PSFSaveFile_PSFValueType_Int32;
  static constexpr PSFValueType String =
    PSFSaveFile_PSFValueType_String;
  static constexpr PSFValueType Float =
    PSFSaveFile_PSFValueType_Float;
  static constexpr PSFValueType Double =
    PSFSaveFile_PSFValueType_Double;
  static inline bool PSFValueType_IsValid(int value) {
    return PSFSaveFile_PSFValueType_IsValid(value);
  }
  static constexpr PSFValueType PSFValueType_MIN =
    PSFSaveFile_PSFValueType_PSFValueType_MIN;
  static constexpr PSFValueType PSFValueType_MAX =
    PSFSaveFile_PSFValueType_PSFValueType_MAX;
  static constexpr int PSFValueType_ARRAYSIZE =
    PSFSaveFile_PSFValueType_PSFValueType_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  PSFValueType_descriptor() {
    return PSFSaveFile_PSFValueType_descriptor();
  }
  template<typename T>
  static inline const std::string& PSFValueType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, PSFValueType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function PSFValueType_Name.");
    return PSFSaveFile_PSFValueType_Name(enum_t_value);
  }
  static inline bool PSFValueType_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      PSFValueType* value) {
    return PSFSaveFile_PSFValueType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kValuesFieldNumber = 4,
    kHeaderFieldNumber = 1,
    kGameNameFieldNumber = 3,
    kVersionFieldNumber = 2,
  };
  // repeated .PSFProto.PSFSaveFile.PSFKeyValue values = 4;
  int values_size() const;
  private:
  int _internal_values_size() const;
  public:
  void clear_values();
  ::PSFProto::PSFSaveFile_PSFKeyValue* mutable_values(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::PSFProto::PSFSaveFile_PSFKeyValue >*
      mutable_values();
  private:
  const ::PSFProto::PSFSaveFile_PSFKeyValue& _internal_values(int index) const;
  ::PSFProto::PSFSaveFile_PSFKeyValue* _internal_add_values();
  public:
  const ::PSFProto::PSFSaveFile_PSFKeyValue& values(int index) const;
  ::PSFProto::PSFSaveFile_PSFKeyValue* add_values();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::PSFProto::PSFSaveFile_PSFKeyValue >&
      values() const;

  // required string header = 1;
  bool has_header() const;
  private:
  bool _internal_has_header() const;
  public:
  void clear_header();
  const std::string& header() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_header(ArgT0&& arg0, ArgT... args);
  std::string* mutable_header();
  PROTOBUF_NODISCARD std::string* release_header();
  void set_allocated_header(std::string* header);
  private:
  const std::string& _internal_header() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_header(const std::string& value);
  std::string* _internal_mutable_header();
  public:

  // required string gameName = 3;
  bool has_gamename() const;
  private:
  bool _internal_has_gamename() const;
  public:
  void clear_gamename();
  const std::string& gamename() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_gamename(ArgT0&& arg0, ArgT... args);
  std::string* mutable_gamename();
  PROTOBUF_NODISCARD std::string* release_gamename();
  void set_allocated_gamename(std::string* gamename);
  private:
  const std::string& _internal_gamename() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_gamename(const std::string& value);
  std::string* _internal_mutable_gamename();
  public:

  // required int32 version = 2;
  bool has_version() const;
  private:
  bool _internal_has_version() const;
  public:
  void clear_version();
  int32_t version() const;
  void set_version(int32_t value);
  private:
  int32_t _internal_version() const;
  void _internal_set_version(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:PSFProto.PSFSaveFile)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::PSFProto::PSFSaveFile_PSFKeyValue > values_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr header_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr gamename_;
  int32_t version_;
  friend struct ::TableStruct_proto_2fpsf_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PSFSaveFile_PSFKeyValue

// required .PSFProto.PSFSaveFile.PSFValueType type = 1;
inline bool PSFSaveFile_PSFKeyValue::_internal_has_type() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool PSFSaveFile_PSFKeyValue::has_type() const {
  return _internal_has_type();
}
inline void PSFSaveFile_PSFKeyValue::clear_type() {
  type_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PSFProto::PSFSaveFile_PSFValueType PSFSaveFile_PSFKeyValue::_internal_type() const {
  return static_cast< ::PSFProto::PSFSaveFile_PSFValueType >(type_);
}
inline ::PSFProto::PSFSaveFile_PSFValueType PSFSaveFile_PSFKeyValue::type() const {
  // @@protoc_insertion_point(field_get:PSFProto.PSFSaveFile.PSFKeyValue.type)
  return _internal_type();
}
inline void PSFSaveFile_PSFKeyValue::_internal_set_type(::PSFProto::PSFSaveFile_PSFValueType value) {
  assert(::PSFProto::PSFSaveFile_PSFValueType_IsValid(value));
  _has_bits_[0] |= 0x00000002u;
  type_ = value;
}
inline void PSFSaveFile_PSFKeyValue::set_type(::PSFProto::PSFSaveFile_PSFValueType value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:PSFProto.PSFSaveFile.PSFKeyValue.type)
}

// optional int32 intVal = 2;
inline bool PSFSaveFile_PSFKeyValue::_internal_has_intval() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool PSFSaveFile_PSFKeyValue::has_intval() const {
  return _internal_has_intval();
}
inline void PSFSaveFile_PSFKeyValue::clear_intval() {
  intval_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline int32_t PSFSaveFile_PSFKeyValue::_internal_intval() const {
  return intval_;
}
inline int32_t PSFSaveFile_PSFKeyValue::intval() const {
  // @@protoc_insertion_point(field_get:PSFProto.PSFSaveFile.PSFKeyValue.intVal)
  return _internal_intval();
}
inline void PSFSaveFile_PSFKeyValue::_internal_set_intval(int32_t value) {
  _has_bits_[0] |= 0x00000004u;
  intval_ = value;
}
inline void PSFSaveFile_PSFKeyValue::set_intval(int32_t value) {
  _internal_set_intval(value);
  // @@protoc_insertion_point(field_set:PSFProto.PSFSaveFile.PSFKeyValue.intVal)
}

// optional string stringVal = 3;
inline bool PSFSaveFile_PSFKeyValue::_internal_has_stringval() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool PSFSaveFile_PSFKeyValue::has_stringval() const {
  return _internal_has_stringval();
}
inline void PSFSaveFile_PSFKeyValue::clear_stringval() {
  stringval_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& PSFSaveFile_PSFKeyValue::stringval() const {
  // @@protoc_insertion_point(field_get:PSFProto.PSFSaveFile.PSFKeyValue.stringVal)
  return _internal_stringval();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void PSFSaveFile_PSFKeyValue::set_stringval(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000001u;
 stringval_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:PSFProto.PSFSaveFile.PSFKeyValue.stringVal)
}
inline std::string* PSFSaveFile_PSFKeyValue::mutable_stringval() {
  std::string* _s = _internal_mutable_stringval();
  // @@protoc_insertion_point(field_mutable:PSFProto.PSFSaveFile.PSFKeyValue.stringVal)
  return _s;
}
inline const std::string& PSFSaveFile_PSFKeyValue::_internal_stringval() const {
  return stringval_.Get();
}
inline void PSFSaveFile_PSFKeyValue::_internal_set_stringval(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  stringval_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* PSFSaveFile_PSFKeyValue::_internal_mutable_stringval() {
  _has_bits_[0] |= 0x00000001u;
  return stringval_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* PSFSaveFile_PSFKeyValue::release_stringval() {
  // @@protoc_insertion_point(field_release:PSFProto.PSFSaveFile.PSFKeyValue.stringVal)
  if (!_internal_has_stringval()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  auto* p = stringval_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (stringval_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    stringval_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void PSFSaveFile_PSFKeyValue::set_allocated_stringval(std::string* stringval) {
  if (stringval != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  stringval_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), stringval,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (stringval_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    stringval_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:PSFProto.PSFSaveFile.PSFKeyValue.stringVal)
}

// optional float floatVal = 4;
inline bool PSFSaveFile_PSFKeyValue::_internal_has_floatval() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool PSFSaveFile_PSFKeyValue::has_floatval() const {
  return _internal_has_floatval();
}
inline void PSFSaveFile_PSFKeyValue::clear_floatval() {
  floatval_ = 0;
  _has_bits_[0] &= ~0x00000010u;
}
inline float PSFSaveFile_PSFKeyValue::_internal_floatval() const {
  return floatval_;
}
inline float PSFSaveFile_PSFKeyValue::floatval() const {
  // @@protoc_insertion_point(field_get:PSFProto.PSFSaveFile.PSFKeyValue.floatVal)
  return _internal_floatval();
}
inline void PSFSaveFile_PSFKeyValue::_internal_set_floatval(float value) {
  _has_bits_[0] |= 0x00000010u;
  floatval_ = value;
}
inline void PSFSaveFile_PSFKeyValue::set_floatval(float value) {
  _internal_set_floatval(value);
  // @@protoc_insertion_point(field_set:PSFProto.PSFSaveFile.PSFKeyValue.floatVal)
}

// optional double doubleVal = 5;
inline bool PSFSaveFile_PSFKeyValue::_internal_has_doubleval() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool PSFSaveFile_PSFKeyValue::has_doubleval() const {
  return _internal_has_doubleval();
}
inline void PSFSaveFile_PSFKeyValue::clear_doubleval() {
  doubleval_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline double PSFSaveFile_PSFKeyValue::_internal_doubleval() const {
  return doubleval_;
}
inline double PSFSaveFile_PSFKeyValue::doubleval() const {
  // @@protoc_insertion_point(field_get:PSFProto.PSFSaveFile.PSFKeyValue.doubleVal)
  return _internal_doubleval();
}
inline void PSFSaveFile_PSFKeyValue::_internal_set_doubleval(double value) {
  _has_bits_[0] |= 0x00000008u;
  doubleval_ = value;
}
inline void PSFSaveFile_PSFKeyValue::set_doubleval(double value) {
  _internal_set_doubleval(value);
  // @@protoc_insertion_point(field_set:PSFProto.PSFSaveFile.PSFKeyValue.doubleVal)
}

// -------------------------------------------------------------------

// PSFSaveFile

// required string header = 1;
inline bool PSFSaveFile::_internal_has_header() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool PSFSaveFile::has_header() const {
  return _internal_has_header();
}
inline void PSFSaveFile::clear_header() {
  header_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& PSFSaveFile::header() const {
  // @@protoc_insertion_point(field_get:PSFProto.PSFSaveFile.header)
  return _internal_header();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void PSFSaveFile::set_header(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000001u;
 header_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:PSFProto.PSFSaveFile.header)
}
inline std::string* PSFSaveFile::mutable_header() {
  std::string* _s = _internal_mutable_header();
  // @@protoc_insertion_point(field_mutable:PSFProto.PSFSaveFile.header)
  return _s;
}
inline const std::string& PSFSaveFile::_internal_header() const {
  return header_.Get();
}
inline void PSFSaveFile::_internal_set_header(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  header_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* PSFSaveFile::_internal_mutable_header() {
  _has_bits_[0] |= 0x00000001u;
  return header_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* PSFSaveFile::release_header() {
  // @@protoc_insertion_point(field_release:PSFProto.PSFSaveFile.header)
  if (!_internal_has_header()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  auto* p = header_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (header_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    header_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void PSFSaveFile::set_allocated_header(std::string* header) {
  if (header != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  header_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), header,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (header_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    header_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:PSFProto.PSFSaveFile.header)
}

// required int32 version = 2;
inline bool PSFSaveFile::_internal_has_version() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool PSFSaveFile::has_version() const {
  return _internal_has_version();
}
inline void PSFSaveFile::clear_version() {
  version_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline int32_t PSFSaveFile::_internal_version() const {
  return version_;
}
inline int32_t PSFSaveFile::version() const {
  // @@protoc_insertion_point(field_get:PSFProto.PSFSaveFile.version)
  return _internal_version();
}
inline void PSFSaveFile::_internal_set_version(int32_t value) {
  _has_bits_[0] |= 0x00000004u;
  version_ = value;
}
inline void PSFSaveFile::set_version(int32_t value) {
  _internal_set_version(value);
  // @@protoc_insertion_point(field_set:PSFProto.PSFSaveFile.version)
}

// required string gameName = 3;
inline bool PSFSaveFile::_internal_has_gamename() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool PSFSaveFile::has_gamename() const {
  return _internal_has_gamename();
}
inline void PSFSaveFile::clear_gamename() {
  gamename_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& PSFSaveFile::gamename() const {
  // @@protoc_insertion_point(field_get:PSFProto.PSFSaveFile.gameName)
  return _internal_gamename();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void PSFSaveFile::set_gamename(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000002u;
 gamename_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:PSFProto.PSFSaveFile.gameName)
}
inline std::string* PSFSaveFile::mutable_gamename() {
  std::string* _s = _internal_mutable_gamename();
  // @@protoc_insertion_point(field_mutable:PSFProto.PSFSaveFile.gameName)
  return _s;
}
inline const std::string& PSFSaveFile::_internal_gamename() const {
  return gamename_.Get();
}
inline void PSFSaveFile::_internal_set_gamename(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  gamename_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* PSFSaveFile::_internal_mutable_gamename() {
  _has_bits_[0] |= 0x00000002u;
  return gamename_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* PSFSaveFile::release_gamename() {
  // @@protoc_insertion_point(field_release:PSFProto.PSFSaveFile.gameName)
  if (!_internal_has_gamename()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  auto* p = gamename_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (gamename_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    gamename_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void PSFSaveFile::set_allocated_gamename(std::string* gamename) {
  if (gamename != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  gamename_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), gamename,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (gamename_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    gamename_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:PSFProto.PSFSaveFile.gameName)
}

// repeated .PSFProto.PSFSaveFile.PSFKeyValue values = 4;
inline int PSFSaveFile::_internal_values_size() const {
  return values_.size();
}
inline int PSFSaveFile::values_size() const {
  return _internal_values_size();
}
inline void PSFSaveFile::clear_values() {
  values_.Clear();
}
inline ::PSFProto::PSFSaveFile_PSFKeyValue* PSFSaveFile::mutable_values(int index) {
  // @@protoc_insertion_point(field_mutable:PSFProto.PSFSaveFile.values)
  return values_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::PSFProto::PSFSaveFile_PSFKeyValue >*
PSFSaveFile::mutable_values() {
  // @@protoc_insertion_point(field_mutable_list:PSFProto.PSFSaveFile.values)
  return &values_;
}
inline const ::PSFProto::PSFSaveFile_PSFKeyValue& PSFSaveFile::_internal_values(int index) const {
  return values_.Get(index);
}
inline const ::PSFProto::PSFSaveFile_PSFKeyValue& PSFSaveFile::values(int index) const {
  // @@protoc_insertion_point(field_get:PSFProto.PSFSaveFile.values)
  return _internal_values(index);
}
inline ::PSFProto::PSFSaveFile_PSFKeyValue* PSFSaveFile::_internal_add_values() {
  return values_.Add();
}
inline ::PSFProto::PSFSaveFile_PSFKeyValue* PSFSaveFile::add_values() {
  ::PSFProto::PSFSaveFile_PSFKeyValue* _add = _internal_add_values();
  // @@protoc_insertion_point(field_add:PSFProto.PSFSaveFile.values)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::PSFProto::PSFSaveFile_PSFKeyValue >&
PSFSaveFile::values() const {
  // @@protoc_insertion_point(field_list:PSFProto.PSFSaveFile.values)
  return values_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace PSFProto

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::PSFProto::PSFSaveFile_PSFValueType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::PSFProto::PSFSaveFile_PSFValueType>() {
  return ::PSFProto::PSFSaveFile_PSFValueType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_proto_2fpsf_2eproto
