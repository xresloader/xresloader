// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: xresloader.proto

#ifndef PROTOBUF_INCLUDED_xresloader_2eproto
#define PROTOBUF_INCLUDED_xresloader_2eproto

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
#include <google/protobuf/descriptor.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_xresloader_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_xresloader_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_xresloader_2eproto();
namespace org {
namespace xresloader {
class IndexDescriptor;
class IndexDescriptorDefaultTypeInternal;
extern IndexDescriptorDefaultTypeInternal _IndexDescriptor_default_instance_;
}  // namespace xresloader
}  // namespace org
namespace google {
namespace protobuf {
template<> ::org::xresloader::IndexDescriptor* Arena::CreateMaybeMessage<::org::xresloader::IndexDescriptor>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace org {
namespace xresloader {

// ===================================================================

class IndexDescriptor :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:org.xresloader.IndexDescriptor) */ {
 public:
  IndexDescriptor();
  virtual ~IndexDescriptor();

  IndexDescriptor(const IndexDescriptor& from);

  inline IndexDescriptor& operator=(const IndexDescriptor& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  IndexDescriptor(IndexDescriptor&& from) noexcept
    : IndexDescriptor() {
    *this = ::std::move(from);
  }

  inline IndexDescriptor& operator=(IndexDescriptor&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const IndexDescriptor& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const IndexDescriptor* internal_default_instance() {
    return reinterpret_cast<const IndexDescriptor*>(
               &_IndexDescriptor_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(IndexDescriptor* other);
  friend void swap(IndexDescriptor& a, IndexDescriptor& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline IndexDescriptor* New() const final {
    return CreateMaybeMessage<IndexDescriptor>(nullptr);
  }

  IndexDescriptor* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<IndexDescriptor>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const IndexDescriptor& from);
  void MergeFrom(const IndexDescriptor& from);
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
  void InternalSwap(IndexDescriptor* other);
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

  // repeated string fields = 2;
  int fields_size() const;
  void clear_fields();
  static const int kFieldsFieldNumber = 2;
  const ::std::string& fields(int index) const;
  ::std::string* mutable_fields(int index);
  void set_fields(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_fields(int index, ::std::string&& value);
  #endif
  void set_fields(int index, const char* value);
  void set_fields(int index, const char* value, size_t size);
  ::std::string* add_fields();
  void add_fields(const ::std::string& value);
  #if LANG_CXX11
  void add_fields(::std::string&& value);
  #endif
  void add_fields(const char* value);
  void add_fields(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField<::std::string>& fields() const;
  ::google::protobuf::RepeatedPtrField<::std::string>* mutable_fields();

  // optional string name = 1;
  bool has_name() const;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // @@protoc_insertion_point(class_scope:org.xresloader.IndexDescriptor)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::RepeatedPtrField<::std::string> fields_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  friend struct ::TableStruct_xresloader_2eproto;
};
// ===================================================================

static const int kFileDescriptionFieldNumber = 1001;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  file_description;
static const int kMsgDescriptionFieldNumber = 1001;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  msg_description;
static const int kKvIndexFieldNumber = 1021;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::RepeatedMessageTypeTraits< ::org::xresloader::IndexDescriptor >, 11, false >
  kv_index;
static const int kKlIndexFieldNumber = 1022;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::RepeatedMessageTypeTraits< ::org::xresloader::IndexDescriptor >, 11, false >
  kl_index;
static const int kVerifierFieldNumber = 1001;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  verifier;
static const int kFieldDescriptionFieldNumber = 1011;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  field_description;
static const int kOneofDescriptionFieldNumber = 1001;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::OneofOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  oneof_description;
static const int kEnumDescriptionFieldNumber = 1001;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::EnumOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  enum_description;
static const int kEnumvDescriptionFieldNumber = 1001;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::EnumValueOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  enumv_description;

// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// IndexDescriptor

// optional string name = 1;
inline bool IndexDescriptor::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void IndexDescriptor::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const ::std::string& IndexDescriptor::name() const {
  // @@protoc_insertion_point(field_get:org.xresloader.IndexDescriptor.name)
  return name_.GetNoArena();
}
inline void IndexDescriptor::set_name(const ::std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:org.xresloader.IndexDescriptor.name)
}
#if LANG_CXX11
inline void IndexDescriptor::set_name(::std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:org.xresloader.IndexDescriptor.name)
}
#endif
inline void IndexDescriptor::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:org.xresloader.IndexDescriptor.name)
}
inline void IndexDescriptor::set_name(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:org.xresloader.IndexDescriptor.name)
}
inline ::std::string* IndexDescriptor::mutable_name() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:org.xresloader.IndexDescriptor.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* IndexDescriptor::release_name() {
  // @@protoc_insertion_point(field_release:org.xresloader.IndexDescriptor.name)
  if (!has_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return name_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void IndexDescriptor::set_allocated_name(::std::string* name) {
  if (name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:org.xresloader.IndexDescriptor.name)
}

// repeated string fields = 2;
inline int IndexDescriptor::fields_size() const {
  return fields_.size();
}
inline void IndexDescriptor::clear_fields() {
  fields_.Clear();
}
inline const ::std::string& IndexDescriptor::fields(int index) const {
  // @@protoc_insertion_point(field_get:org.xresloader.IndexDescriptor.fields)
  return fields_.Get(index);
}
inline ::std::string* IndexDescriptor::mutable_fields(int index) {
  // @@protoc_insertion_point(field_mutable:org.xresloader.IndexDescriptor.fields)
  return fields_.Mutable(index);
}
inline void IndexDescriptor::set_fields(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:org.xresloader.IndexDescriptor.fields)
  fields_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void IndexDescriptor::set_fields(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:org.xresloader.IndexDescriptor.fields)
  fields_.Mutable(index)->assign(std::move(value));
}
#endif
inline void IndexDescriptor::set_fields(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  fields_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:org.xresloader.IndexDescriptor.fields)
}
inline void IndexDescriptor::set_fields(int index, const char* value, size_t size) {
  fields_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:org.xresloader.IndexDescriptor.fields)
}
inline ::std::string* IndexDescriptor::add_fields() {
  // @@protoc_insertion_point(field_add_mutable:org.xresloader.IndexDescriptor.fields)
  return fields_.Add();
}
inline void IndexDescriptor::add_fields(const ::std::string& value) {
  fields_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:org.xresloader.IndexDescriptor.fields)
}
#if LANG_CXX11
inline void IndexDescriptor::add_fields(::std::string&& value) {
  fields_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:org.xresloader.IndexDescriptor.fields)
}
#endif
inline void IndexDescriptor::add_fields(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  fields_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:org.xresloader.IndexDescriptor.fields)
}
inline void IndexDescriptor::add_fields(const char* value, size_t size) {
  fields_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:org.xresloader.IndexDescriptor.fields)
}
inline const ::google::protobuf::RepeatedPtrField<::std::string>&
IndexDescriptor::fields() const {
  // @@protoc_insertion_point(field_list:org.xresloader.IndexDescriptor.fields)
  return fields_;
}
inline ::google::protobuf::RepeatedPtrField<::std::string>*
IndexDescriptor::mutable_fields() {
  // @@protoc_insertion_point(field_mutable_list:org.xresloader.IndexDescriptor.fields)
  return &fields_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace xresloader
}  // namespace org

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_xresloader_2eproto
