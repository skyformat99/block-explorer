// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: NameData.proto

#ifndef PROTOBUF_NameData_2eproto__INCLUDED
#define PROTOBUF_NameData_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "ExData.pb.h"
// @@protoc_insertion_point(includes)

namespace fantasybit {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_NameData_2eproto();
void protobuf_AssignDesc_NameData_2eproto();
void protobuf_ShutdownFile_NameData_2eproto();

class FantasyNameBal;
class FantasyBitAward;
class FantasyBitPnl;
class FantasyBitProj;
class GameFantasyBitProj;

// ===================================================================

class FantasyNameBal : public ::google::protobuf::Message {
 public:
  FantasyNameBal();
  virtual ~FantasyNameBal();

  FantasyNameBal(const FantasyNameBal& from);

  inline FantasyNameBal& operator=(const FantasyNameBal& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const FantasyNameBal& default_instance();

  void Swap(FantasyNameBal* other);

  // implements Message ----------------------------------------------

  FantasyNameBal* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FantasyNameBal& from);
  void MergeFrom(const FantasyNameBal& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string name = 10;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 10;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // optional string public_key = 20;
  inline bool has_public_key() const;
  inline void clear_public_key();
  static const int kPublicKeyFieldNumber = 20;
  inline const ::std::string& public_key() const;
  inline void set_public_key(const ::std::string& value);
  inline void set_public_key(const char* value);
  inline void set_public_key(const char* value, size_t size);
  inline ::std::string* mutable_public_key();
  inline ::std::string* release_public_key();
  inline void set_allocated_public_key(::std::string* public_key);

  // optional uint64 bits = 30;
  inline bool has_bits() const;
  inline void clear_bits();
  static const int kBitsFieldNumber = 30;
  inline ::google::protobuf::uint64 bits() const;
  inline void set_bits(::google::protobuf::uint64 value);

  // optional int64 stake = 40;
  inline bool has_stake() const;
  inline void clear_stake();
  static const int kStakeFieldNumber = 40;
  inline ::google::protobuf::int64 stake() const;
  inline void set_stake(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:fantasybit.FantasyNameBal)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_public_key();
  inline void clear_has_public_key();
  inline void set_has_bits();
  inline void clear_has_bits();
  inline void set_has_stake();
  inline void clear_has_stake();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* name_;
  ::std::string* public_key_;
  ::google::protobuf::uint64 bits_;
  ::google::protobuf::int64 stake_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_NameData_2eproto();
  friend void protobuf_AssignDesc_NameData_2eproto();
  friend void protobuf_ShutdownFile_NameData_2eproto();

  void InitAsDefaultInstance();
  static FantasyNameBal* default_instance_;
};
// -------------------------------------------------------------------

class FantasyBitAward : public ::google::protobuf::Message {
 public:
  FantasyBitAward();
  virtual ~FantasyBitAward();

  FantasyBitAward(const FantasyBitAward& from);

  inline FantasyBitAward& operator=(const FantasyBitAward& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const FantasyBitAward& default_instance();

  void Swap(FantasyBitAward* other);

  // implements Message ----------------------------------------------

  FantasyBitAward* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FantasyBitAward& from);
  void MergeFrom(const FantasyBitAward& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string name = 10;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 10;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // optional int32 proj = 20;
  inline bool has_proj() const;
  inline void clear_proj();
  static const int kProjFieldNumber = 20;
  inline ::google::protobuf::int32 proj() const;
  inline void set_proj(::google::protobuf::int32 value);

  // optional uint64 award = 30;
  inline bool has_award() const;
  inline void clear_award();
  static const int kAwardFieldNumber = 30;
  inline ::google::protobuf::uint64 award() const;
  inline void set_award(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:fantasybit.FantasyBitAward)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_proj();
  inline void clear_has_proj();
  inline void set_has_award();
  inline void clear_has_award();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* name_;
  ::google::protobuf::uint64 award_;
  ::google::protobuf::int32 proj_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_NameData_2eproto();
  friend void protobuf_AssignDesc_NameData_2eproto();
  friend void protobuf_ShutdownFile_NameData_2eproto();

  void InitAsDefaultInstance();
  static FantasyBitAward* default_instance_;
};
// -------------------------------------------------------------------

class FantasyBitPnl : public ::google::protobuf::Message {
 public:
  FantasyBitPnl();
  virtual ~FantasyBitPnl();

  FantasyBitPnl(const FantasyBitPnl& from);

  inline FantasyBitPnl& operator=(const FantasyBitPnl& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const FantasyBitPnl& default_instance();

  void Swap(FantasyBitPnl* other);

  // implements Message ----------------------------------------------

  FantasyBitPnl* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FantasyBitPnl& from);
  void MergeFrom(const FantasyBitPnl& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .fantasybit.SettlePos spos = 20;
  inline bool has_spos() const;
  inline void clear_spos();
  static const int kSposFieldNumber = 20;
  inline const ::fantasybit::SettlePos& spos() const;
  inline ::fantasybit::SettlePos* mutable_spos();
  inline ::fantasybit::SettlePos* release_spos();
  inline void set_allocated_spos(::fantasybit::SettlePos* spos);

  // optional int64 pnl = 30;
  inline bool has_pnl() const;
  inline void clear_pnl();
  static const int kPnlFieldNumber = 30;
  inline ::google::protobuf::int64 pnl() const;
  inline void set_pnl(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:fantasybit.FantasyBitPnl)
 private:
  inline void set_has_spos();
  inline void clear_has_spos();
  inline void set_has_pnl();
  inline void clear_has_pnl();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::fantasybit::SettlePos* spos_;
  ::google::protobuf::int64 pnl_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_NameData_2eproto();
  friend void protobuf_AssignDesc_NameData_2eproto();
  friend void protobuf_ShutdownFile_NameData_2eproto();

  void InitAsDefaultInstance();
  static FantasyBitPnl* default_instance_;
};
// -------------------------------------------------------------------

class FantasyBitProj : public ::google::protobuf::Message {
 public:
  FantasyBitProj();
  virtual ~FantasyBitProj();

  FantasyBitProj(const FantasyBitProj& from);

  inline FantasyBitProj& operator=(const FantasyBitProj& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const FantasyBitProj& default_instance();

  void Swap(FantasyBitProj* other);

  // implements Message ----------------------------------------------

  FantasyBitProj* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FantasyBitProj& from);
  void MergeFrom(const FantasyBitProj& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string name = 10;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 10;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // optional int32 proj = 20;
  inline bool has_proj() const;
  inline void clear_proj();
  static const int kProjFieldNumber = 20;
  inline ::google::protobuf::int32 proj() const;
  inline void set_proj(::google::protobuf::int32 value);

  // optional string playerid = 30;
  inline bool has_playerid() const;
  inline void clear_playerid();
  static const int kPlayeridFieldNumber = 30;
  inline const ::std::string& playerid() const;
  inline void set_playerid(const ::std::string& value);
  inline void set_playerid(const char* value);
  inline void set_playerid(const char* value, size_t size);
  inline ::std::string* mutable_playerid();
  inline ::std::string* release_playerid();
  inline void set_allocated_playerid(::std::string* playerid);

  // @@protoc_insertion_point(class_scope:fantasybit.FantasyBitProj)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_proj();
  inline void clear_has_proj();
  inline void set_has_playerid();
  inline void clear_has_playerid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* name_;
  ::std::string* playerid_;
  ::google::protobuf::int32 proj_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_NameData_2eproto();
  friend void protobuf_AssignDesc_NameData_2eproto();
  friend void protobuf_ShutdownFile_NameData_2eproto();

  void InitAsDefaultInstance();
  static FantasyBitProj* default_instance_;
};
// -------------------------------------------------------------------

class GameFantasyBitProj : public ::google::protobuf::Message {
 public:
  GameFantasyBitProj();
  virtual ~GameFantasyBitProj();

  GameFantasyBitProj(const GameFantasyBitProj& from);

  inline GameFantasyBitProj& operator=(const GameFantasyBitProj& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const GameFantasyBitProj& default_instance();

  void Swap(GameFantasyBitProj* other);

  // implements Message ----------------------------------------------

  GameFantasyBitProj* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const GameFantasyBitProj& from);
  void MergeFrom(const GameFantasyBitProj& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string gameid = 10;
  inline bool has_gameid() const;
  inline void clear_gameid();
  static const int kGameidFieldNumber = 10;
  inline const ::std::string& gameid() const;
  inline void set_gameid(const ::std::string& value);
  inline void set_gameid(const char* value);
  inline void set_gameid(const char* value, size_t size);
  inline ::std::string* mutable_gameid();
  inline ::std::string* release_gameid();
  inline void set_allocated_gameid(::std::string* gameid);

  // repeated .fantasybit.FantasyBitProj home = 20;
  inline int home_size() const;
  inline void clear_home();
  static const int kHomeFieldNumber = 20;
  inline const ::fantasybit::FantasyBitProj& home(int index) const;
  inline ::fantasybit::FantasyBitProj* mutable_home(int index);
  inline ::fantasybit::FantasyBitProj* add_home();
  inline const ::google::protobuf::RepeatedPtrField< ::fantasybit::FantasyBitProj >&
      home() const;
  inline ::google::protobuf::RepeatedPtrField< ::fantasybit::FantasyBitProj >*
      mutable_home();

  // repeated .fantasybit.FantasyBitProj away = 30;
  inline int away_size() const;
  inline void clear_away();
  static const int kAwayFieldNumber = 30;
  inline const ::fantasybit::FantasyBitProj& away(int index) const;
  inline ::fantasybit::FantasyBitProj* mutable_away(int index);
  inline ::fantasybit::FantasyBitProj* add_away();
  inline const ::google::protobuf::RepeatedPtrField< ::fantasybit::FantasyBitProj >&
      away() const;
  inline ::google::protobuf::RepeatedPtrField< ::fantasybit::FantasyBitProj >*
      mutable_away();

  // @@protoc_insertion_point(class_scope:fantasybit.GameFantasyBitProj)
 private:
  inline void set_has_gameid();
  inline void clear_has_gameid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* gameid_;
  ::google::protobuf::RepeatedPtrField< ::fantasybit::FantasyBitProj > home_;
  ::google::protobuf::RepeatedPtrField< ::fantasybit::FantasyBitProj > away_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_NameData_2eproto();
  friend void protobuf_AssignDesc_NameData_2eproto();
  friend void protobuf_ShutdownFile_NameData_2eproto();

  void InitAsDefaultInstance();
  static GameFantasyBitProj* default_instance_;
};
// ===================================================================


// ===================================================================

// FantasyNameBal

// optional string name = 10;
inline bool FantasyNameBal::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void FantasyNameBal::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void FantasyNameBal::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void FantasyNameBal::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& FantasyNameBal::name() const {
  return *name_;
}
inline void FantasyNameBal::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void FantasyNameBal::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void FantasyNameBal::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* FantasyNameBal::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* FantasyNameBal::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void FantasyNameBal::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string public_key = 20;
inline bool FantasyNameBal::has_public_key() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void FantasyNameBal::set_has_public_key() {
  _has_bits_[0] |= 0x00000002u;
}
inline void FantasyNameBal::clear_has_public_key() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void FantasyNameBal::clear_public_key() {
  if (public_key_ != &::google::protobuf::internal::kEmptyString) {
    public_key_->clear();
  }
  clear_has_public_key();
}
inline const ::std::string& FantasyNameBal::public_key() const {
  return *public_key_;
}
inline void FantasyNameBal::set_public_key(const ::std::string& value) {
  set_has_public_key();
  if (public_key_ == &::google::protobuf::internal::kEmptyString) {
    public_key_ = new ::std::string;
  }
  public_key_->assign(value);
}
inline void FantasyNameBal::set_public_key(const char* value) {
  set_has_public_key();
  if (public_key_ == &::google::protobuf::internal::kEmptyString) {
    public_key_ = new ::std::string;
  }
  public_key_->assign(value);
}
inline void FantasyNameBal::set_public_key(const char* value, size_t size) {
  set_has_public_key();
  if (public_key_ == &::google::protobuf::internal::kEmptyString) {
    public_key_ = new ::std::string;
  }
  public_key_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* FantasyNameBal::mutable_public_key() {
  set_has_public_key();
  if (public_key_ == &::google::protobuf::internal::kEmptyString) {
    public_key_ = new ::std::string;
  }
  return public_key_;
}
inline ::std::string* FantasyNameBal::release_public_key() {
  clear_has_public_key();
  if (public_key_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = public_key_;
    public_key_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void FantasyNameBal::set_allocated_public_key(::std::string* public_key) {
  if (public_key_ != &::google::protobuf::internal::kEmptyString) {
    delete public_key_;
  }
  if (public_key) {
    set_has_public_key();
    public_key_ = public_key;
  } else {
    clear_has_public_key();
    public_key_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional uint64 bits = 30;
inline bool FantasyNameBal::has_bits() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void FantasyNameBal::set_has_bits() {
  _has_bits_[0] |= 0x00000004u;
}
inline void FantasyNameBal::clear_has_bits() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void FantasyNameBal::clear_bits() {
  bits_ = GOOGLE_ULONGLONG(0);
  clear_has_bits();
}
inline ::google::protobuf::uint64 FantasyNameBal::bits() const {
  return bits_;
}
inline void FantasyNameBal::set_bits(::google::protobuf::uint64 value) {
  set_has_bits();
  bits_ = value;
}

// optional int64 stake = 40;
inline bool FantasyNameBal::has_stake() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void FantasyNameBal::set_has_stake() {
  _has_bits_[0] |= 0x00000008u;
}
inline void FantasyNameBal::clear_has_stake() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void FantasyNameBal::clear_stake() {
  stake_ = GOOGLE_LONGLONG(0);
  clear_has_stake();
}
inline ::google::protobuf::int64 FantasyNameBal::stake() const {
  return stake_;
}
inline void FantasyNameBal::set_stake(::google::protobuf::int64 value) {
  set_has_stake();
  stake_ = value;
}

// -------------------------------------------------------------------

// FantasyBitAward

// optional string name = 10;
inline bool FantasyBitAward::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void FantasyBitAward::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void FantasyBitAward::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void FantasyBitAward::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& FantasyBitAward::name() const {
  return *name_;
}
inline void FantasyBitAward::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void FantasyBitAward::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void FantasyBitAward::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* FantasyBitAward::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* FantasyBitAward::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void FantasyBitAward::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int32 proj = 20;
inline bool FantasyBitAward::has_proj() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void FantasyBitAward::set_has_proj() {
  _has_bits_[0] |= 0x00000002u;
}
inline void FantasyBitAward::clear_has_proj() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void FantasyBitAward::clear_proj() {
  proj_ = 0;
  clear_has_proj();
}
inline ::google::protobuf::int32 FantasyBitAward::proj() const {
  return proj_;
}
inline void FantasyBitAward::set_proj(::google::protobuf::int32 value) {
  set_has_proj();
  proj_ = value;
}

// optional uint64 award = 30;
inline bool FantasyBitAward::has_award() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void FantasyBitAward::set_has_award() {
  _has_bits_[0] |= 0x00000004u;
}
inline void FantasyBitAward::clear_has_award() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void FantasyBitAward::clear_award() {
  award_ = GOOGLE_ULONGLONG(0);
  clear_has_award();
}
inline ::google::protobuf::uint64 FantasyBitAward::award() const {
  return award_;
}
inline void FantasyBitAward::set_award(::google::protobuf::uint64 value) {
  set_has_award();
  award_ = value;
}

// -------------------------------------------------------------------

// FantasyBitPnl

// optional .fantasybit.SettlePos spos = 20;
inline bool FantasyBitPnl::has_spos() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void FantasyBitPnl::set_has_spos() {
  _has_bits_[0] |= 0x00000001u;
}
inline void FantasyBitPnl::clear_has_spos() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void FantasyBitPnl::clear_spos() {
  if (spos_ != NULL) spos_->::fantasybit::SettlePos::Clear();
  clear_has_spos();
}
inline const ::fantasybit::SettlePos& FantasyBitPnl::spos() const {
  return spos_ != NULL ? *spos_ : *default_instance_->spos_;
}
inline ::fantasybit::SettlePos* FantasyBitPnl::mutable_spos() {
  set_has_spos();
  if (spos_ == NULL) spos_ = new ::fantasybit::SettlePos;
  return spos_;
}
inline ::fantasybit::SettlePos* FantasyBitPnl::release_spos() {
  clear_has_spos();
  ::fantasybit::SettlePos* temp = spos_;
  spos_ = NULL;
  return temp;
}
inline void FantasyBitPnl::set_allocated_spos(::fantasybit::SettlePos* spos) {
  delete spos_;
  spos_ = spos;
  if (spos) {
    set_has_spos();
  } else {
    clear_has_spos();
  }
}

// optional int64 pnl = 30;
inline bool FantasyBitPnl::has_pnl() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void FantasyBitPnl::set_has_pnl() {
  _has_bits_[0] |= 0x00000002u;
}
inline void FantasyBitPnl::clear_has_pnl() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void FantasyBitPnl::clear_pnl() {
  pnl_ = GOOGLE_LONGLONG(0);
  clear_has_pnl();
}
inline ::google::protobuf::int64 FantasyBitPnl::pnl() const {
  return pnl_;
}
inline void FantasyBitPnl::set_pnl(::google::protobuf::int64 value) {
  set_has_pnl();
  pnl_ = value;
}

// -------------------------------------------------------------------

// FantasyBitProj

// optional string name = 10;
inline bool FantasyBitProj::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void FantasyBitProj::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void FantasyBitProj::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void FantasyBitProj::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& FantasyBitProj::name() const {
  return *name_;
}
inline void FantasyBitProj::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void FantasyBitProj::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void FantasyBitProj::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* FantasyBitProj::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* FantasyBitProj::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void FantasyBitProj::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int32 proj = 20;
inline bool FantasyBitProj::has_proj() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void FantasyBitProj::set_has_proj() {
  _has_bits_[0] |= 0x00000002u;
}
inline void FantasyBitProj::clear_has_proj() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void FantasyBitProj::clear_proj() {
  proj_ = 0;
  clear_has_proj();
}
inline ::google::protobuf::int32 FantasyBitProj::proj() const {
  return proj_;
}
inline void FantasyBitProj::set_proj(::google::protobuf::int32 value) {
  set_has_proj();
  proj_ = value;
}

// optional string playerid = 30;
inline bool FantasyBitProj::has_playerid() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void FantasyBitProj::set_has_playerid() {
  _has_bits_[0] |= 0x00000004u;
}
inline void FantasyBitProj::clear_has_playerid() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void FantasyBitProj::clear_playerid() {
  if (playerid_ != &::google::protobuf::internal::kEmptyString) {
    playerid_->clear();
  }
  clear_has_playerid();
}
inline const ::std::string& FantasyBitProj::playerid() const {
  return *playerid_;
}
inline void FantasyBitProj::set_playerid(const ::std::string& value) {
  set_has_playerid();
  if (playerid_ == &::google::protobuf::internal::kEmptyString) {
    playerid_ = new ::std::string;
  }
  playerid_->assign(value);
}
inline void FantasyBitProj::set_playerid(const char* value) {
  set_has_playerid();
  if (playerid_ == &::google::protobuf::internal::kEmptyString) {
    playerid_ = new ::std::string;
  }
  playerid_->assign(value);
}
inline void FantasyBitProj::set_playerid(const char* value, size_t size) {
  set_has_playerid();
  if (playerid_ == &::google::protobuf::internal::kEmptyString) {
    playerid_ = new ::std::string;
  }
  playerid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* FantasyBitProj::mutable_playerid() {
  set_has_playerid();
  if (playerid_ == &::google::protobuf::internal::kEmptyString) {
    playerid_ = new ::std::string;
  }
  return playerid_;
}
inline ::std::string* FantasyBitProj::release_playerid() {
  clear_has_playerid();
  if (playerid_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = playerid_;
    playerid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void FantasyBitProj::set_allocated_playerid(::std::string* playerid) {
  if (playerid_ != &::google::protobuf::internal::kEmptyString) {
    delete playerid_;
  }
  if (playerid) {
    set_has_playerid();
    playerid_ = playerid;
  } else {
    clear_has_playerid();
    playerid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// GameFantasyBitProj

// optional string gameid = 10;
inline bool GameFantasyBitProj::has_gameid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GameFantasyBitProj::set_has_gameid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GameFantasyBitProj::clear_has_gameid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GameFantasyBitProj::clear_gameid() {
  if (gameid_ != &::google::protobuf::internal::kEmptyString) {
    gameid_->clear();
  }
  clear_has_gameid();
}
inline const ::std::string& GameFantasyBitProj::gameid() const {
  return *gameid_;
}
inline void GameFantasyBitProj::set_gameid(const ::std::string& value) {
  set_has_gameid();
  if (gameid_ == &::google::protobuf::internal::kEmptyString) {
    gameid_ = new ::std::string;
  }
  gameid_->assign(value);
}
inline void GameFantasyBitProj::set_gameid(const char* value) {
  set_has_gameid();
  if (gameid_ == &::google::protobuf::internal::kEmptyString) {
    gameid_ = new ::std::string;
  }
  gameid_->assign(value);
}
inline void GameFantasyBitProj::set_gameid(const char* value, size_t size) {
  set_has_gameid();
  if (gameid_ == &::google::protobuf::internal::kEmptyString) {
    gameid_ = new ::std::string;
  }
  gameid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* GameFantasyBitProj::mutable_gameid() {
  set_has_gameid();
  if (gameid_ == &::google::protobuf::internal::kEmptyString) {
    gameid_ = new ::std::string;
  }
  return gameid_;
}
inline ::std::string* GameFantasyBitProj::release_gameid() {
  clear_has_gameid();
  if (gameid_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = gameid_;
    gameid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void GameFantasyBitProj::set_allocated_gameid(::std::string* gameid) {
  if (gameid_ != &::google::protobuf::internal::kEmptyString) {
    delete gameid_;
  }
  if (gameid) {
    set_has_gameid();
    gameid_ = gameid;
  } else {
    clear_has_gameid();
    gameid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// repeated .fantasybit.FantasyBitProj home = 20;
inline int GameFantasyBitProj::home_size() const {
  return home_.size();
}
inline void GameFantasyBitProj::clear_home() {
  home_.Clear();
}
inline const ::fantasybit::FantasyBitProj& GameFantasyBitProj::home(int index) const {
  return home_.Get(index);
}
inline ::fantasybit::FantasyBitProj* GameFantasyBitProj::mutable_home(int index) {
  return home_.Mutable(index);
}
inline ::fantasybit::FantasyBitProj* GameFantasyBitProj::add_home() {
  return home_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::fantasybit::FantasyBitProj >&
GameFantasyBitProj::home() const {
  return home_;
}
inline ::google::protobuf::RepeatedPtrField< ::fantasybit::FantasyBitProj >*
GameFantasyBitProj::mutable_home() {
  return &home_;
}

// repeated .fantasybit.FantasyBitProj away = 30;
inline int GameFantasyBitProj::away_size() const {
  return away_.size();
}
inline void GameFantasyBitProj::clear_away() {
  away_.Clear();
}
inline const ::fantasybit::FantasyBitProj& GameFantasyBitProj::away(int index) const {
  return away_.Get(index);
}
inline ::fantasybit::FantasyBitProj* GameFantasyBitProj::mutable_away(int index) {
  return away_.Mutable(index);
}
inline ::fantasybit::FantasyBitProj* GameFantasyBitProj::add_away() {
  return away_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::fantasybit::FantasyBitProj >&
GameFantasyBitProj::away() const {
  return away_;
}
inline ::google::protobuf::RepeatedPtrField< ::fantasybit::FantasyBitProj >*
GameFantasyBitProj::mutable_away() {
  return &away_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace fantasybit

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_NameData_2eproto__INCLUDED