// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: message.proto

#ifndef PROTOBUF_message_2eproto__INCLUDED
#define PROTOBUF_message_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3001000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3001000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_message_2eproto();
void protobuf_InitDefaults_message_2eproto();
void protobuf_AssignDesc_message_2eproto();
void protobuf_ShutdownFile_message_2eproto();

class ConnectionRequest;

// ===================================================================

class ConnectionRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ConnectionRequest) */ {
 public:
  ConnectionRequest();
  virtual ~ConnectionRequest();

  ConnectionRequest(const ConnectionRequest& from);

  inline ConnectionRequest& operator=(const ConnectionRequest& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ConnectionRequest& default_instance();

  static const ConnectionRequest* internal_default_instance();

  void Swap(ConnectionRequest* other);

  // implements Message ----------------------------------------------

  inline ConnectionRequest* New() const { return New(NULL); }

  ConnectionRequest* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ConnectionRequest& from);
  void MergeFrom(const ConnectionRequest& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ConnectionRequest* other);
  void UnsafeMergeFrom(const ConnectionRequest& from);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 protocolVersion = 1 [default = 1];
  bool has_protocolversion() const;
  void clear_protocolversion();
  static const int kProtocolVersionFieldNumber = 1;
  ::google::protobuf::int32 protocolversion() const;
  void set_protocolversion(::google::protobuf::int32 value);

  // required string speechkitVersion = 2;
  bool has_speechkitversion() const;
  void clear_speechkitversion();
  static const int kSpeechkitVersionFieldNumber = 2;
  const ::std::string& speechkitversion() const;
  void set_speechkitversion(const ::std::string& value);
  void set_speechkitversion(const char* value);
  void set_speechkitversion(const char* value, size_t size);
  ::std::string* mutable_speechkitversion();
  ::std::string* release_speechkitversion();
  void set_allocated_speechkitversion(::std::string* speechkitversion);

  // required string serviceName = 3;
  bool has_servicename() const;
  void clear_servicename();
  static const int kServiceNameFieldNumber = 3;
  const ::std::string& servicename() const;
  void set_servicename(const ::std::string& value);
  void set_servicename(const char* value);
  void set_servicename(const char* value, size_t size);
  ::std::string* mutable_servicename();
  ::std::string* release_servicename();
  void set_allocated_servicename(::std::string* servicename);

  // required string uuid = 4;
  bool has_uuid() const;
  void clear_uuid();
  static const int kUuidFieldNumber = 4;
  const ::std::string& uuid() const;
  void set_uuid(const ::std::string& value);
  void set_uuid(const char* value);
  void set_uuid(const char* value, size_t size);
  ::std::string* mutable_uuid();
  ::std::string* release_uuid();
  void set_allocated_uuid(::std::string* uuid);

  // required string apiKey = 5;
  bool has_apikey() const;
  void clear_apikey();
  static const int kApiKeyFieldNumber = 5;
  const ::std::string& apikey() const;
  void set_apikey(const ::std::string& value);
  void set_apikey(const char* value);
  void set_apikey(const char* value, size_t size);
  ::std::string* mutable_apikey();
  ::std::string* release_apikey();
  void set_allocated_apikey(::std::string* apikey);

  // required string applicationName = 6;
  bool has_applicationname() const;
  void clear_applicationname();
  static const int kApplicationNameFieldNumber = 6;
  const ::std::string& applicationname() const;
  void set_applicationname(const ::std::string& value);
  void set_applicationname(const char* value);
  void set_applicationname(const char* value, size_t size);
  ::std::string* mutable_applicationname();
  ::std::string* release_applicationname();
  void set_allocated_applicationname(::std::string* applicationname);

  // required string device = 7;
  bool has_device() const;
  void clear_device();
  static const int kDeviceFieldNumber = 7;
  const ::std::string& device() const;
  void set_device(const ::std::string& value);
  void set_device(const char* value);
  void set_device(const char* value, size_t size);
  ::std::string* mutable_device();
  ::std::string* release_device();
  void set_allocated_device(::std::string* device);

  // required string coords = 8;
  bool has_coords() const;
  void clear_coords();
  static const int kCoordsFieldNumber = 8;
  const ::std::string& coords() const;
  void set_coords(const ::std::string& value);
  void set_coords(const char* value);
  void set_coords(const char* value, size_t size);
  ::std::string* mutable_coords();
  ::std::string* release_coords();
  void set_allocated_coords(::std::string* coords);

  // required string topic = 9;
  bool has_topic() const;
  void clear_topic();
  static const int kTopicFieldNumber = 9;
  const ::std::string& topic() const;
  void set_topic(const ::std::string& value);
  void set_topic(const char* value);
  void set_topic(const char* value, size_t size);
  ::std::string* mutable_topic();
  ::std::string* release_topic();
  void set_allocated_topic(::std::string* topic);

  // required string lang = 10;
  bool has_lang() const;
  void clear_lang();
  static const int kLangFieldNumber = 10;
  const ::std::string& lang() const;
  void set_lang(const ::std::string& value);
  void set_lang(const char* value);
  void set_lang(const char* value, size_t size);
  ::std::string* mutable_lang();
  ::std::string* release_lang();
  void set_allocated_lang(::std::string* lang);

  // required string format = 11;
  bool has_format() const;
  void clear_format();
  static const int kFormatFieldNumber = 11;
  const ::std::string& format() const;
  void set_format(const ::std::string& value);
  void set_format(const char* value);
  void set_format(const char* value, size_t size);
  ::std::string* mutable_format();
  ::std::string* release_format();
  void set_allocated_format(::std::string* format);

  // @@protoc_insertion_point(class_scope:ConnectionRequest)
 private:
  inline void set_has_protocolversion();
  inline void clear_has_protocolversion();
  inline void set_has_speechkitversion();
  inline void clear_has_speechkitversion();
  inline void set_has_servicename();
  inline void clear_has_servicename();
  inline void set_has_uuid();
  inline void clear_has_uuid();
  inline void set_has_apikey();
  inline void clear_has_apikey();
  inline void set_has_applicationname();
  inline void clear_has_applicationname();
  inline void set_has_device();
  inline void clear_has_device();
  inline void set_has_coords();
  inline void clear_has_coords();
  inline void set_has_topic();
  inline void clear_has_topic();
  inline void set_has_lang();
  inline void clear_has_lang();
  inline void set_has_format();
  inline void clear_has_format();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr speechkitversion_;
  ::google::protobuf::internal::ArenaStringPtr servicename_;
  ::google::protobuf::internal::ArenaStringPtr uuid_;
  ::google::protobuf::internal::ArenaStringPtr apikey_;
  ::google::protobuf::internal::ArenaStringPtr applicationname_;
  ::google::protobuf::internal::ArenaStringPtr device_;
  ::google::protobuf::internal::ArenaStringPtr coords_;
  ::google::protobuf::internal::ArenaStringPtr topic_;
  ::google::protobuf::internal::ArenaStringPtr lang_;
  ::google::protobuf::internal::ArenaStringPtr format_;
  ::google::protobuf::int32 protocolversion_;
  friend void  protobuf_InitDefaults_message_2eproto_impl();
  friend void  protobuf_AddDesc_message_2eproto_impl();
  friend void protobuf_AssignDesc_message_2eproto();
  friend void protobuf_ShutdownFile_message_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<ConnectionRequest> ConnectionRequest_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ConnectionRequest

// optional int32 protocolVersion = 1 [default = 1];
inline bool ConnectionRequest::has_protocolversion() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ConnectionRequest::set_has_protocolversion() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ConnectionRequest::clear_has_protocolversion() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ConnectionRequest::clear_protocolversion() {
  protocolversion_ = 1;
  clear_has_protocolversion();
}
inline ::google::protobuf::int32 ConnectionRequest::protocolversion() const {
  // @@protoc_insertion_point(field_get:ConnectionRequest.protocolVersion)
  return protocolversion_;
}
inline void ConnectionRequest::set_protocolversion(::google::protobuf::int32 value) {
  set_has_protocolversion();
  protocolversion_ = value;
  // @@protoc_insertion_point(field_set:ConnectionRequest.protocolVersion)
}

// required string speechkitVersion = 2;
inline bool ConnectionRequest::has_speechkitversion() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ConnectionRequest::set_has_speechkitversion() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ConnectionRequest::clear_has_speechkitversion() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ConnectionRequest::clear_speechkitversion() {
  speechkitversion_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_speechkitversion();
}
inline const ::std::string& ConnectionRequest::speechkitversion() const {
  // @@protoc_insertion_point(field_get:ConnectionRequest.speechkitVersion)
  return speechkitversion_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ConnectionRequest::set_speechkitversion(const ::std::string& value) {
  set_has_speechkitversion();
  speechkitversion_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ConnectionRequest.speechkitVersion)
}
inline void ConnectionRequest::set_speechkitversion(const char* value) {
  set_has_speechkitversion();
  speechkitversion_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ConnectionRequest.speechkitVersion)
}
inline void ConnectionRequest::set_speechkitversion(const char* value, size_t size) {
  set_has_speechkitversion();
  speechkitversion_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ConnectionRequest.speechkitVersion)
}
inline ::std::string* ConnectionRequest::mutable_speechkitversion() {
  set_has_speechkitversion();
  // @@protoc_insertion_point(field_mutable:ConnectionRequest.speechkitVersion)
  return speechkitversion_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ConnectionRequest::release_speechkitversion() {
  // @@protoc_insertion_point(field_release:ConnectionRequest.speechkitVersion)
  clear_has_speechkitversion();
  return speechkitversion_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ConnectionRequest::set_allocated_speechkitversion(::std::string* speechkitversion) {
  if (speechkitversion != NULL) {
    set_has_speechkitversion();
  } else {
    clear_has_speechkitversion();
  }
  speechkitversion_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), speechkitversion);
  // @@protoc_insertion_point(field_set_allocated:ConnectionRequest.speechkitVersion)
}

// required string serviceName = 3;
inline bool ConnectionRequest::has_servicename() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ConnectionRequest::set_has_servicename() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ConnectionRequest::clear_has_servicename() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ConnectionRequest::clear_servicename() {
  servicename_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_servicename();
}
inline const ::std::string& ConnectionRequest::servicename() const {
  // @@protoc_insertion_point(field_get:ConnectionRequest.serviceName)
  return servicename_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ConnectionRequest::set_servicename(const ::std::string& value) {
  set_has_servicename();
  servicename_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ConnectionRequest.serviceName)
}
inline void ConnectionRequest::set_servicename(const char* value) {
  set_has_servicename();
  servicename_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ConnectionRequest.serviceName)
}
inline void ConnectionRequest::set_servicename(const char* value, size_t size) {
  set_has_servicename();
  servicename_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ConnectionRequest.serviceName)
}
inline ::std::string* ConnectionRequest::mutable_servicename() {
  set_has_servicename();
  // @@protoc_insertion_point(field_mutable:ConnectionRequest.serviceName)
  return servicename_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ConnectionRequest::release_servicename() {
  // @@protoc_insertion_point(field_release:ConnectionRequest.serviceName)
  clear_has_servicename();
  return servicename_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ConnectionRequest::set_allocated_servicename(::std::string* servicename) {
  if (servicename != NULL) {
    set_has_servicename();
  } else {
    clear_has_servicename();
  }
  servicename_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), servicename);
  // @@protoc_insertion_point(field_set_allocated:ConnectionRequest.serviceName)
}

// required string uuid = 4;
inline bool ConnectionRequest::has_uuid() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ConnectionRequest::set_has_uuid() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ConnectionRequest::clear_has_uuid() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ConnectionRequest::clear_uuid() {
  uuid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_uuid();
}
inline const ::std::string& ConnectionRequest::uuid() const {
  // @@protoc_insertion_point(field_get:ConnectionRequest.uuid)
  return uuid_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ConnectionRequest::set_uuid(const ::std::string& value) {
  set_has_uuid();
  uuid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ConnectionRequest.uuid)
}
inline void ConnectionRequest::set_uuid(const char* value) {
  set_has_uuid();
  uuid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ConnectionRequest.uuid)
}
inline void ConnectionRequest::set_uuid(const char* value, size_t size) {
  set_has_uuid();
  uuid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ConnectionRequest.uuid)
}
inline ::std::string* ConnectionRequest::mutable_uuid() {
  set_has_uuid();
  // @@protoc_insertion_point(field_mutable:ConnectionRequest.uuid)
  return uuid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ConnectionRequest::release_uuid() {
  // @@protoc_insertion_point(field_release:ConnectionRequest.uuid)
  clear_has_uuid();
  return uuid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ConnectionRequest::set_allocated_uuid(::std::string* uuid) {
  if (uuid != NULL) {
    set_has_uuid();
  } else {
    clear_has_uuid();
  }
  uuid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), uuid);
  // @@protoc_insertion_point(field_set_allocated:ConnectionRequest.uuid)
}

// required string apiKey = 5;
inline bool ConnectionRequest::has_apikey() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ConnectionRequest::set_has_apikey() {
  _has_bits_[0] |= 0x00000010u;
}
inline void ConnectionRequest::clear_has_apikey() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void ConnectionRequest::clear_apikey() {
  apikey_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_apikey();
}
inline const ::std::string& ConnectionRequest::apikey() const {
  // @@protoc_insertion_point(field_get:ConnectionRequest.apiKey)
  return apikey_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ConnectionRequest::set_apikey(const ::std::string& value) {
  set_has_apikey();
  apikey_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ConnectionRequest.apiKey)
}
inline void ConnectionRequest::set_apikey(const char* value) {
  set_has_apikey();
  apikey_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ConnectionRequest.apiKey)
}
inline void ConnectionRequest::set_apikey(const char* value, size_t size) {
  set_has_apikey();
  apikey_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ConnectionRequest.apiKey)
}
inline ::std::string* ConnectionRequest::mutable_apikey() {
  set_has_apikey();
  // @@protoc_insertion_point(field_mutable:ConnectionRequest.apiKey)
  return apikey_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ConnectionRequest::release_apikey() {
  // @@protoc_insertion_point(field_release:ConnectionRequest.apiKey)
  clear_has_apikey();
  return apikey_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ConnectionRequest::set_allocated_apikey(::std::string* apikey) {
  if (apikey != NULL) {
    set_has_apikey();
  } else {
    clear_has_apikey();
  }
  apikey_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), apikey);
  // @@protoc_insertion_point(field_set_allocated:ConnectionRequest.apiKey)
}

// required string applicationName = 6;
inline bool ConnectionRequest::has_applicationname() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void ConnectionRequest::set_has_applicationname() {
  _has_bits_[0] |= 0x00000020u;
}
inline void ConnectionRequest::clear_has_applicationname() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void ConnectionRequest::clear_applicationname() {
  applicationname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_applicationname();
}
inline const ::std::string& ConnectionRequest::applicationname() const {
  // @@protoc_insertion_point(field_get:ConnectionRequest.applicationName)
  return applicationname_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ConnectionRequest::set_applicationname(const ::std::string& value) {
  set_has_applicationname();
  applicationname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ConnectionRequest.applicationName)
}
inline void ConnectionRequest::set_applicationname(const char* value) {
  set_has_applicationname();
  applicationname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ConnectionRequest.applicationName)
}
inline void ConnectionRequest::set_applicationname(const char* value, size_t size) {
  set_has_applicationname();
  applicationname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ConnectionRequest.applicationName)
}
inline ::std::string* ConnectionRequest::mutable_applicationname() {
  set_has_applicationname();
  // @@protoc_insertion_point(field_mutable:ConnectionRequest.applicationName)
  return applicationname_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ConnectionRequest::release_applicationname() {
  // @@protoc_insertion_point(field_release:ConnectionRequest.applicationName)
  clear_has_applicationname();
  return applicationname_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ConnectionRequest::set_allocated_applicationname(::std::string* applicationname) {
  if (applicationname != NULL) {
    set_has_applicationname();
  } else {
    clear_has_applicationname();
  }
  applicationname_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), applicationname);
  // @@protoc_insertion_point(field_set_allocated:ConnectionRequest.applicationName)
}

// required string device = 7;
inline bool ConnectionRequest::has_device() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void ConnectionRequest::set_has_device() {
  _has_bits_[0] |= 0x00000040u;
}
inline void ConnectionRequest::clear_has_device() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void ConnectionRequest::clear_device() {
  device_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_device();
}
inline const ::std::string& ConnectionRequest::device() const {
  // @@protoc_insertion_point(field_get:ConnectionRequest.device)
  return device_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ConnectionRequest::set_device(const ::std::string& value) {
  set_has_device();
  device_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ConnectionRequest.device)
}
inline void ConnectionRequest::set_device(const char* value) {
  set_has_device();
  device_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ConnectionRequest.device)
}
inline void ConnectionRequest::set_device(const char* value, size_t size) {
  set_has_device();
  device_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ConnectionRequest.device)
}
inline ::std::string* ConnectionRequest::mutable_device() {
  set_has_device();
  // @@protoc_insertion_point(field_mutable:ConnectionRequest.device)
  return device_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ConnectionRequest::release_device() {
  // @@protoc_insertion_point(field_release:ConnectionRequest.device)
  clear_has_device();
  return device_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ConnectionRequest::set_allocated_device(::std::string* device) {
  if (device != NULL) {
    set_has_device();
  } else {
    clear_has_device();
  }
  device_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), device);
  // @@protoc_insertion_point(field_set_allocated:ConnectionRequest.device)
}

// required string coords = 8;
inline bool ConnectionRequest::has_coords() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void ConnectionRequest::set_has_coords() {
  _has_bits_[0] |= 0x00000080u;
}
inline void ConnectionRequest::clear_has_coords() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void ConnectionRequest::clear_coords() {
  coords_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_coords();
}
inline const ::std::string& ConnectionRequest::coords() const {
  // @@protoc_insertion_point(field_get:ConnectionRequest.coords)
  return coords_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ConnectionRequest::set_coords(const ::std::string& value) {
  set_has_coords();
  coords_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ConnectionRequest.coords)
}
inline void ConnectionRequest::set_coords(const char* value) {
  set_has_coords();
  coords_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ConnectionRequest.coords)
}
inline void ConnectionRequest::set_coords(const char* value, size_t size) {
  set_has_coords();
  coords_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ConnectionRequest.coords)
}
inline ::std::string* ConnectionRequest::mutable_coords() {
  set_has_coords();
  // @@protoc_insertion_point(field_mutable:ConnectionRequest.coords)
  return coords_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ConnectionRequest::release_coords() {
  // @@protoc_insertion_point(field_release:ConnectionRequest.coords)
  clear_has_coords();
  return coords_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ConnectionRequest::set_allocated_coords(::std::string* coords) {
  if (coords != NULL) {
    set_has_coords();
  } else {
    clear_has_coords();
  }
  coords_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), coords);
  // @@protoc_insertion_point(field_set_allocated:ConnectionRequest.coords)
}

// required string topic = 9;
inline bool ConnectionRequest::has_topic() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void ConnectionRequest::set_has_topic() {
  _has_bits_[0] |= 0x00000100u;
}
inline void ConnectionRequest::clear_has_topic() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void ConnectionRequest::clear_topic() {
  topic_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_topic();
}
inline const ::std::string& ConnectionRequest::topic() const {
  // @@protoc_insertion_point(field_get:ConnectionRequest.topic)
  return topic_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ConnectionRequest::set_topic(const ::std::string& value) {
  set_has_topic();
  topic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ConnectionRequest.topic)
}
inline void ConnectionRequest::set_topic(const char* value) {
  set_has_topic();
  topic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ConnectionRequest.topic)
}
inline void ConnectionRequest::set_topic(const char* value, size_t size) {
  set_has_topic();
  topic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ConnectionRequest.topic)
}
inline ::std::string* ConnectionRequest::mutable_topic() {
  set_has_topic();
  // @@protoc_insertion_point(field_mutable:ConnectionRequest.topic)
  return topic_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ConnectionRequest::release_topic() {
  // @@protoc_insertion_point(field_release:ConnectionRequest.topic)
  clear_has_topic();
  return topic_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ConnectionRequest::set_allocated_topic(::std::string* topic) {
  if (topic != NULL) {
    set_has_topic();
  } else {
    clear_has_topic();
  }
  topic_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), topic);
  // @@protoc_insertion_point(field_set_allocated:ConnectionRequest.topic)
}

// required string lang = 10;
inline bool ConnectionRequest::has_lang() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void ConnectionRequest::set_has_lang() {
  _has_bits_[0] |= 0x00000200u;
}
inline void ConnectionRequest::clear_has_lang() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void ConnectionRequest::clear_lang() {
  lang_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_lang();
}
inline const ::std::string& ConnectionRequest::lang() const {
  // @@protoc_insertion_point(field_get:ConnectionRequest.lang)
  return lang_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ConnectionRequest::set_lang(const ::std::string& value) {
  set_has_lang();
  lang_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ConnectionRequest.lang)
}
inline void ConnectionRequest::set_lang(const char* value) {
  set_has_lang();
  lang_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ConnectionRequest.lang)
}
inline void ConnectionRequest::set_lang(const char* value, size_t size) {
  set_has_lang();
  lang_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ConnectionRequest.lang)
}
inline ::std::string* ConnectionRequest::mutable_lang() {
  set_has_lang();
  // @@protoc_insertion_point(field_mutable:ConnectionRequest.lang)
  return lang_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ConnectionRequest::release_lang() {
  // @@protoc_insertion_point(field_release:ConnectionRequest.lang)
  clear_has_lang();
  return lang_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ConnectionRequest::set_allocated_lang(::std::string* lang) {
  if (lang != NULL) {
    set_has_lang();
  } else {
    clear_has_lang();
  }
  lang_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), lang);
  // @@protoc_insertion_point(field_set_allocated:ConnectionRequest.lang)
}

// required string format = 11;
inline bool ConnectionRequest::has_format() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void ConnectionRequest::set_has_format() {
  _has_bits_[0] |= 0x00000400u;
}
inline void ConnectionRequest::clear_has_format() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void ConnectionRequest::clear_format() {
  format_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_format();
}
inline const ::std::string& ConnectionRequest::format() const {
  // @@protoc_insertion_point(field_get:ConnectionRequest.format)
  return format_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ConnectionRequest::set_format(const ::std::string& value) {
  set_has_format();
  format_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ConnectionRequest.format)
}
inline void ConnectionRequest::set_format(const char* value) {
  set_has_format();
  format_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ConnectionRequest.format)
}
inline void ConnectionRequest::set_format(const char* value, size_t size) {
  set_has_format();
  format_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ConnectionRequest.format)
}
inline ::std::string* ConnectionRequest::mutable_format() {
  set_has_format();
  // @@protoc_insertion_point(field_mutable:ConnectionRequest.format)
  return format_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ConnectionRequest::release_format() {
  // @@protoc_insertion_point(field_release:ConnectionRequest.format)
  clear_has_format();
  return format_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ConnectionRequest::set_allocated_format(::std::string* format) {
  if (format != NULL) {
    set_has_format();
  } else {
    clear_has_format();
  }
  format_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), format);
  // @@protoc_insertion_point(field_set_allocated:ConnectionRequest.format)
}

inline const ConnectionRequest* ConnectionRequest::internal_default_instance() {
  return &ConnectionRequest_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_message_2eproto__INCLUDED
