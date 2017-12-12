// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Room.proto

#ifndef PROTOBUF_Room_2eproto__INCLUDED
#define PROTOBUF_Room_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "User.pb.h"
#include "Command.pb.h"
// @@protoc_insertion_point(includes)

namespace protobuf_Room_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsRoomImpl();
void InitDefaultsRoom();
inline void InitDefaults() {
  InitDefaultsRoom();
}
}  // namespace protobuf_Room_2eproto
namespace kk {
namespace proto {
class Room;
class RoomDefaultTypeInternal;
extern RoomDefaultTypeInternal _Room_default_instance_;
}  // namespace proto
}  // namespace kk
namespace kk {
namespace proto {

// ===================================================================

class Room : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:kk.proto.Room) */ {
 public:
  Room();
  virtual ~Room();

  Room(const Room& from);

  inline Room& operator=(const Room& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Room(Room&& from) noexcept
    : Room() {
    *this = ::std::move(from);
  }

  inline Room& operator=(Room&& from) noexcept {
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

  static const ::google::protobuf::Descriptor* descriptor();
  static const Room& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Room* internal_default_instance() {
    return reinterpret_cast<const Room*>(
               &_Room_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Room* other);
  friend void swap(Room& a, Room& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Room* New() const PROTOBUF_FINAL { return New(NULL); }

  Room* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Room& from);
  void MergeFrom(const Room& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Room* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string id = 1;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 1;
  const ::std::string& id() const;
  void set_id(const ::std::string& value);
  #if LANG_CXX11
  void set_id(::std::string&& value);
  #endif
  void set_id(const char* value);
  void set_id(const char* value, size_t size);
  ::std::string* mutable_id();
  ::std::string* release_id();
  void set_allocated_id(::std::string* id);

  // optional .kk.proto.User user = 2;
  bool has_user() const;
  void clear_user();
  static const int kUserFieldNumber = 2;
  const ::kk::proto::User& user() const;
  ::kk::proto::User* release_user();
  ::kk::proto::User* mutable_user();
  void set_allocated_user(::kk::proto::User* user);

  // optional .kk.proto.Command command = 3;
  bool has_command() const;
  void clear_command();
  static const int kCommandFieldNumber = 3;
  const ::kk::proto::Command& command() const;
  ::kk::proto::Command* release_command();
  ::kk::proto::Command* mutable_command();
  void set_allocated_command(::kk::proto::Command* command);

  // @@protoc_insertion_point(class_scope:kk.proto.Room)
 private:
  void set_has_id();
  void clear_has_id();
  void set_has_user();
  void clear_has_user();
  void set_has_command();
  void clear_has_command();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr id_;
  ::kk::proto::User* user_;
  ::kk::proto::Command* command_;
  friend struct ::protobuf_Room_2eproto::TableStruct;
  friend void ::protobuf_Room_2eproto::InitDefaultsRoomImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Room

// required string id = 1;
inline bool Room::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Room::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Room::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Room::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_id();
}
inline const ::std::string& Room::id() const {
  // @@protoc_insertion_point(field_get:kk.proto.Room.id)
  return id_.GetNoArena();
}
inline void Room::set_id(const ::std::string& value) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:kk.proto.Room.id)
}
#if LANG_CXX11
inline void Room::set_id(::std::string&& value) {
  set_has_id();
  id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:kk.proto.Room.id)
}
#endif
inline void Room::set_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:kk.proto.Room.id)
}
inline void Room::set_id(const char* value, size_t size) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:kk.proto.Room.id)
}
inline ::std::string* Room::mutable_id() {
  set_has_id();
  // @@protoc_insertion_point(field_mutable:kk.proto.Room.id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Room::release_id() {
  // @@protoc_insertion_point(field_release:kk.proto.Room.id)
  clear_has_id();
  return id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Room::set_allocated_id(::std::string* id) {
  if (id != NULL) {
    set_has_id();
  } else {
    clear_has_id();
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:kk.proto.Room.id)
}

// optional .kk.proto.User user = 2;
inline bool Room::has_user() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Room::set_has_user() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Room::clear_has_user() {
  _has_bits_[0] &= ~0x00000002u;
}
inline const ::kk::proto::User& Room::user() const {
  const ::kk::proto::User* p = user_;
  // @@protoc_insertion_point(field_get:kk.proto.Room.user)
  return p != NULL ? *p : *reinterpret_cast<const ::kk::proto::User*>(
      &::kk::proto::_User_default_instance_);
}
inline ::kk::proto::User* Room::release_user() {
  // @@protoc_insertion_point(field_release:kk.proto.Room.user)
  clear_has_user();
  ::kk::proto::User* temp = user_;
  user_ = NULL;
  return temp;
}
inline ::kk::proto::User* Room::mutable_user() {
  set_has_user();
  if (user_ == NULL) {
    user_ = new ::kk::proto::User;
  }
  // @@protoc_insertion_point(field_mutable:kk.proto.Room.user)
  return user_;
}
inline void Room::set_allocated_user(::kk::proto::User* user) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(user_);
  }
  if (user) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      user = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, user, submessage_arena);
    }
    set_has_user();
  } else {
    clear_has_user();
  }
  user_ = user;
  // @@protoc_insertion_point(field_set_allocated:kk.proto.Room.user)
}

// optional .kk.proto.Command command = 3;
inline bool Room::has_command() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Room::set_has_command() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Room::clear_has_command() {
  _has_bits_[0] &= ~0x00000004u;
}
inline const ::kk::proto::Command& Room::command() const {
  const ::kk::proto::Command* p = command_;
  // @@protoc_insertion_point(field_get:kk.proto.Room.command)
  return p != NULL ? *p : *reinterpret_cast<const ::kk::proto::Command*>(
      &::kk::proto::_Command_default_instance_);
}
inline ::kk::proto::Command* Room::release_command() {
  // @@protoc_insertion_point(field_release:kk.proto.Room.command)
  clear_has_command();
  ::kk::proto::Command* temp = command_;
  command_ = NULL;
  return temp;
}
inline ::kk::proto::Command* Room::mutable_command() {
  set_has_command();
  if (command_ == NULL) {
    command_ = new ::kk::proto::Command;
  }
  // @@protoc_insertion_point(field_mutable:kk.proto.Room.command)
  return command_;
}
inline void Room::set_allocated_command(::kk::proto::Command* command) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(command_);
  }
  if (command) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      command = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, command, submessage_arena);
    }
    set_has_command();
  } else {
    clear_has_command();
  }
  command_ = command;
  // @@protoc_insertion_point(field_set_allocated:kk.proto.Room.command)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace kk

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Room_2eproto__INCLUDED
