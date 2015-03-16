// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cluster.proto

#ifndef PROTOBUF_cluster_2eproto__INCLUDED
#define PROTOBUF_cluster_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

namespace singa {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_cluster_2eproto();
void protobuf_AssignDesc_cluster_2eproto();
void protobuf_ShutdownFile_cluster_2eproto();

class ClusterProto;

// ===================================================================

class ClusterProto : public ::google::protobuf::Message {
 public:
  ClusterProto();
  virtual ~ClusterProto();

  ClusterProto(const ClusterProto& from);

  inline ClusterProto& operator=(const ClusterProto& from) {
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
  static const ClusterProto& default_instance();

  void Swap(ClusterProto* other);

  // implements Message ----------------------------------------------

  ClusterProto* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ClusterProto& from);
  void MergeFrom(const ClusterProto& from);
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

  // optional int32 nworkers = 1;
  inline bool has_nworkers() const;
  inline void clear_nworkers();
  static const int kNworkersFieldNumber = 1;
  inline ::google::protobuf::int32 nworkers() const;
  inline void set_nworkers(::google::protobuf::int32 value);

  // optional int32 nservers = 2;
  inline bool has_nservers() const;
  inline void clear_nservers();
  static const int kNserversFieldNumber = 2;
  inline ::google::protobuf::int32 nservers() const;
  inline void set_nservers(::google::protobuf::int32 value);

  // optional int32 start_port = 3 [default = 6723];
  inline bool has_start_port() const;
  inline void clear_start_port();
  static const int kStartPortFieldNumber = 3;
  inline ::google::protobuf::int32 start_port() const;
  inline void set_start_port(::google::protobuf::int32 value);

  // optional int32 nprocs_per_group = 5 [default = 1];
  inline bool has_nprocs_per_group() const;
  inline void clear_nprocs_per_group();
  static const int kNprocsPerGroupFieldNumber = 5;
  inline ::google::protobuf::int32 nprocs_per_group() const;
  inline void set_nprocs_per_group(::google::protobuf::int32 value);

  // optional int32 nthreads_per_procs = 6 [default = 1];
  inline bool has_nthreads_per_procs() const;
  inline void clear_nthreads_per_procs();
  static const int kNthreadsPerProcsFieldNumber = 6;
  inline ::google::protobuf::int32 nthreads_per_procs() const;
  inline void set_nthreads_per_procs(::google::protobuf::int32 value);

  // optional int32 nthreads_per_server = 7 [default = 1];
  inline bool has_nthreads_per_server() const;
  inline void clear_nthreads_per_server();
  static const int kNthreadsPerServerFieldNumber = 7;
  inline ::google::protobuf::int32 nthreads_per_server() const;
  inline void set_nthreads_per_server(::google::protobuf::int32 value);

  // required string workspace = 10;
  inline bool has_workspace() const;
  inline void clear_workspace();
  static const int kWorkspaceFieldNumber = 10;
  inline const ::std::string& workspace() const;
  inline void set_workspace(const ::std::string& value);
  inline void set_workspace(const char* value);
  inline void set_workspace(const char* value, size_t size);
  inline ::std::string* mutable_workspace();
  inline ::std::string* release_workspace();
  inline void set_allocated_workspace(::std::string* workspace);

  // optional string vis_subfolder = 11 [default = "vis"];
  inline bool has_vis_subfolder() const;
  inline void clear_vis_subfolder();
  static const int kVisSubfolderFieldNumber = 11;
  inline const ::std::string& vis_subfolder() const;
  inline void set_vis_subfolder(const ::std::string& value);
  inline void set_vis_subfolder(const char* value);
  inline void set_vis_subfolder(const char* value, size_t size);
  inline ::std::string* mutable_vis_subfolder();
  inline ::std::string* release_vis_subfolder();
  inline void set_allocated_vis_subfolder(::std::string* vis_subfolder);

  // optional string log_subfolder = 12 [default = "log"];
  inline bool has_log_subfolder() const;
  inline void clear_log_subfolder();
  static const int kLogSubfolderFieldNumber = 12;
  inline const ::std::string& log_subfolder() const;
  inline void set_log_subfolder(const ::std::string& value);
  inline void set_log_subfolder(const char* value);
  inline void set_log_subfolder(const char* value, size_t size);
  inline ::std::string* mutable_log_subfolder();
  inline ::std::string* release_log_subfolder();
  inline void set_allocated_log_subfolder(::std::string* log_subfolder);

  // optional bool synchronous = 15 [default = false];
  inline bool has_synchronous() const;
  inline void clear_synchronous();
  static const int kSynchronousFieldNumber = 15;
  inline bool synchronous() const;
  inline void set_synchronous(bool value);

  // optional int32 largest_message = 20 [default = 1048576];
  inline bool has_largest_message() const;
  inline void clear_largest_message();
  static const int kLargestMessageFieldNumber = 20;
  inline ::google::protobuf::int32 largest_message() const;
  inline void set_largest_message(::google::protobuf::int32 value);

  // optional float bandwidth = 21 [default = 100];
  inline bool has_bandwidth() const;
  inline void clear_bandwidth();
  static const int kBandwidthFieldNumber = 21;
  inline float bandwidth() const;
  inline void set_bandwidth(float value);

  // @@protoc_insertion_point(class_scope:singa.ClusterProto)
 private:
  inline void set_has_nworkers();
  inline void clear_has_nworkers();
  inline void set_has_nservers();
  inline void clear_has_nservers();
  inline void set_has_start_port();
  inline void clear_has_start_port();
  inline void set_has_nprocs_per_group();
  inline void clear_has_nprocs_per_group();
  inline void set_has_nthreads_per_procs();
  inline void clear_has_nthreads_per_procs();
  inline void set_has_nthreads_per_server();
  inline void clear_has_nthreads_per_server();
  inline void set_has_workspace();
  inline void clear_has_workspace();
  inline void set_has_vis_subfolder();
  inline void clear_has_vis_subfolder();
  inline void set_has_log_subfolder();
  inline void clear_has_log_subfolder();
  inline void set_has_synchronous();
  inline void clear_has_synchronous();
  inline void set_has_largest_message();
  inline void clear_has_largest_message();
  inline void set_has_bandwidth();
  inline void clear_has_bandwidth();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 nworkers_;
  ::google::protobuf::int32 nservers_;
  ::google::protobuf::int32 start_port_;
  ::google::protobuf::int32 nprocs_per_group_;
  ::google::protobuf::int32 nthreads_per_procs_;
  ::google::protobuf::int32 nthreads_per_server_;
  ::std::string* workspace_;
  ::std::string* vis_subfolder_;
  static ::std::string* _default_vis_subfolder_;
  ::std::string* log_subfolder_;
  static ::std::string* _default_log_subfolder_;
  bool synchronous_;
  ::google::protobuf::int32 largest_message_;
  float bandwidth_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(12 + 31) / 32];

  friend void  protobuf_AddDesc_cluster_2eproto();
  friend void protobuf_AssignDesc_cluster_2eproto();
  friend void protobuf_ShutdownFile_cluster_2eproto();

  void InitAsDefaultInstance();
  static ClusterProto* default_instance_;
};
// ===================================================================


// ===================================================================

// ClusterProto

// optional int32 nworkers = 1;
inline bool ClusterProto::has_nworkers() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ClusterProto::set_has_nworkers() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ClusterProto::clear_has_nworkers() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ClusterProto::clear_nworkers() {
  nworkers_ = 0;
  clear_has_nworkers();
}
inline ::google::protobuf::int32 ClusterProto::nworkers() const {
  return nworkers_;
}
inline void ClusterProto::set_nworkers(::google::protobuf::int32 value) {
  set_has_nworkers();
  nworkers_ = value;
}

// optional int32 nservers = 2;
inline bool ClusterProto::has_nservers() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ClusterProto::set_has_nservers() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ClusterProto::clear_has_nservers() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ClusterProto::clear_nservers() {
  nservers_ = 0;
  clear_has_nservers();
}
inline ::google::protobuf::int32 ClusterProto::nservers() const {
  return nservers_;
}
inline void ClusterProto::set_nservers(::google::protobuf::int32 value) {
  set_has_nservers();
  nservers_ = value;
}

// optional int32 start_port = 3 [default = 6723];
inline bool ClusterProto::has_start_port() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ClusterProto::set_has_start_port() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ClusterProto::clear_has_start_port() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ClusterProto::clear_start_port() {
  start_port_ = 6723;
  clear_has_start_port();
}
inline ::google::protobuf::int32 ClusterProto::start_port() const {
  return start_port_;
}
inline void ClusterProto::set_start_port(::google::protobuf::int32 value) {
  set_has_start_port();
  start_port_ = value;
}

// optional int32 nprocs_per_group = 5 [default = 1];
inline bool ClusterProto::has_nprocs_per_group() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ClusterProto::set_has_nprocs_per_group() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ClusterProto::clear_has_nprocs_per_group() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ClusterProto::clear_nprocs_per_group() {
  nprocs_per_group_ = 1;
  clear_has_nprocs_per_group();
}
inline ::google::protobuf::int32 ClusterProto::nprocs_per_group() const {
  return nprocs_per_group_;
}
inline void ClusterProto::set_nprocs_per_group(::google::protobuf::int32 value) {
  set_has_nprocs_per_group();
  nprocs_per_group_ = value;
}

// optional int32 nthreads_per_procs = 6 [default = 1];
inline bool ClusterProto::has_nthreads_per_procs() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ClusterProto::set_has_nthreads_per_procs() {
  _has_bits_[0] |= 0x00000010u;
}
inline void ClusterProto::clear_has_nthreads_per_procs() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void ClusterProto::clear_nthreads_per_procs() {
  nthreads_per_procs_ = 1;
  clear_has_nthreads_per_procs();
}
inline ::google::protobuf::int32 ClusterProto::nthreads_per_procs() const {
  return nthreads_per_procs_;
}
inline void ClusterProto::set_nthreads_per_procs(::google::protobuf::int32 value) {
  set_has_nthreads_per_procs();
  nthreads_per_procs_ = value;
}

// optional int32 nthreads_per_server = 7 [default = 1];
inline bool ClusterProto::has_nthreads_per_server() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void ClusterProto::set_has_nthreads_per_server() {
  _has_bits_[0] |= 0x00000020u;
}
inline void ClusterProto::clear_has_nthreads_per_server() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void ClusterProto::clear_nthreads_per_server() {
  nthreads_per_server_ = 1;
  clear_has_nthreads_per_server();
}
inline ::google::protobuf::int32 ClusterProto::nthreads_per_server() const {
  return nthreads_per_server_;
}
inline void ClusterProto::set_nthreads_per_server(::google::protobuf::int32 value) {
  set_has_nthreads_per_server();
  nthreads_per_server_ = value;
}

// required string workspace = 10;
inline bool ClusterProto::has_workspace() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void ClusterProto::set_has_workspace() {
  _has_bits_[0] |= 0x00000040u;
}
inline void ClusterProto::clear_has_workspace() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void ClusterProto::clear_workspace() {
  if (workspace_ != &::google::protobuf::internal::kEmptyString) {
    workspace_->clear();
  }
  clear_has_workspace();
}
inline const ::std::string& ClusterProto::workspace() const {
  return *workspace_;
}
inline void ClusterProto::set_workspace(const ::std::string& value) {
  set_has_workspace();
  if (workspace_ == &::google::protobuf::internal::kEmptyString) {
    workspace_ = new ::std::string;
  }
  workspace_->assign(value);
}
inline void ClusterProto::set_workspace(const char* value) {
  set_has_workspace();
  if (workspace_ == &::google::protobuf::internal::kEmptyString) {
    workspace_ = new ::std::string;
  }
  workspace_->assign(value);
}
inline void ClusterProto::set_workspace(const char* value, size_t size) {
  set_has_workspace();
  if (workspace_ == &::google::protobuf::internal::kEmptyString) {
    workspace_ = new ::std::string;
  }
  workspace_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ClusterProto::mutable_workspace() {
  set_has_workspace();
  if (workspace_ == &::google::protobuf::internal::kEmptyString) {
    workspace_ = new ::std::string;
  }
  return workspace_;
}
inline ::std::string* ClusterProto::release_workspace() {
  clear_has_workspace();
  if (workspace_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = workspace_;
    workspace_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void ClusterProto::set_allocated_workspace(::std::string* workspace) {
  if (workspace_ != &::google::protobuf::internal::kEmptyString) {
    delete workspace_;
  }
  if (workspace) {
    set_has_workspace();
    workspace_ = workspace;
  } else {
    clear_has_workspace();
    workspace_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string vis_subfolder = 11 [default = "vis"];
inline bool ClusterProto::has_vis_subfolder() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void ClusterProto::set_has_vis_subfolder() {
  _has_bits_[0] |= 0x00000080u;
}
inline void ClusterProto::clear_has_vis_subfolder() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void ClusterProto::clear_vis_subfolder() {
  if (vis_subfolder_ != _default_vis_subfolder_) {
    vis_subfolder_->assign(*_default_vis_subfolder_);
  }
  clear_has_vis_subfolder();
}
inline const ::std::string& ClusterProto::vis_subfolder() const {
  return *vis_subfolder_;
}
inline void ClusterProto::set_vis_subfolder(const ::std::string& value) {
  set_has_vis_subfolder();
  if (vis_subfolder_ == _default_vis_subfolder_) {
    vis_subfolder_ = new ::std::string;
  }
  vis_subfolder_->assign(value);
}
inline void ClusterProto::set_vis_subfolder(const char* value) {
  set_has_vis_subfolder();
  if (vis_subfolder_ == _default_vis_subfolder_) {
    vis_subfolder_ = new ::std::string;
  }
  vis_subfolder_->assign(value);
}
inline void ClusterProto::set_vis_subfolder(const char* value, size_t size) {
  set_has_vis_subfolder();
  if (vis_subfolder_ == _default_vis_subfolder_) {
    vis_subfolder_ = new ::std::string;
  }
  vis_subfolder_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ClusterProto::mutable_vis_subfolder() {
  set_has_vis_subfolder();
  if (vis_subfolder_ == _default_vis_subfolder_) {
    vis_subfolder_ = new ::std::string(*_default_vis_subfolder_);
  }
  return vis_subfolder_;
}
inline ::std::string* ClusterProto::release_vis_subfolder() {
  clear_has_vis_subfolder();
  if (vis_subfolder_ == _default_vis_subfolder_) {
    return NULL;
  } else {
    ::std::string* temp = vis_subfolder_;
    vis_subfolder_ = const_cast< ::std::string*>(_default_vis_subfolder_);
    return temp;
  }
}
inline void ClusterProto::set_allocated_vis_subfolder(::std::string* vis_subfolder) {
  if (vis_subfolder_ != _default_vis_subfolder_) {
    delete vis_subfolder_;
  }
  if (vis_subfolder) {
    set_has_vis_subfolder();
    vis_subfolder_ = vis_subfolder;
  } else {
    clear_has_vis_subfolder();
    vis_subfolder_ = const_cast< ::std::string*>(_default_vis_subfolder_);
  }
}

// optional string log_subfolder = 12 [default = "log"];
inline bool ClusterProto::has_log_subfolder() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void ClusterProto::set_has_log_subfolder() {
  _has_bits_[0] |= 0x00000100u;
}
inline void ClusterProto::clear_has_log_subfolder() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void ClusterProto::clear_log_subfolder() {
  if (log_subfolder_ != _default_log_subfolder_) {
    log_subfolder_->assign(*_default_log_subfolder_);
  }
  clear_has_log_subfolder();
}
inline const ::std::string& ClusterProto::log_subfolder() const {
  return *log_subfolder_;
}
inline void ClusterProto::set_log_subfolder(const ::std::string& value) {
  set_has_log_subfolder();
  if (log_subfolder_ == _default_log_subfolder_) {
    log_subfolder_ = new ::std::string;
  }
  log_subfolder_->assign(value);
}
inline void ClusterProto::set_log_subfolder(const char* value) {
  set_has_log_subfolder();
  if (log_subfolder_ == _default_log_subfolder_) {
    log_subfolder_ = new ::std::string;
  }
  log_subfolder_->assign(value);
}
inline void ClusterProto::set_log_subfolder(const char* value, size_t size) {
  set_has_log_subfolder();
  if (log_subfolder_ == _default_log_subfolder_) {
    log_subfolder_ = new ::std::string;
  }
  log_subfolder_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ClusterProto::mutable_log_subfolder() {
  set_has_log_subfolder();
  if (log_subfolder_ == _default_log_subfolder_) {
    log_subfolder_ = new ::std::string(*_default_log_subfolder_);
  }
  return log_subfolder_;
}
inline ::std::string* ClusterProto::release_log_subfolder() {
  clear_has_log_subfolder();
  if (log_subfolder_ == _default_log_subfolder_) {
    return NULL;
  } else {
    ::std::string* temp = log_subfolder_;
    log_subfolder_ = const_cast< ::std::string*>(_default_log_subfolder_);
    return temp;
  }
}
inline void ClusterProto::set_allocated_log_subfolder(::std::string* log_subfolder) {
  if (log_subfolder_ != _default_log_subfolder_) {
    delete log_subfolder_;
  }
  if (log_subfolder) {
    set_has_log_subfolder();
    log_subfolder_ = log_subfolder;
  } else {
    clear_has_log_subfolder();
    log_subfolder_ = const_cast< ::std::string*>(_default_log_subfolder_);
  }
}

// optional bool synchronous = 15 [default = false];
inline bool ClusterProto::has_synchronous() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void ClusterProto::set_has_synchronous() {
  _has_bits_[0] |= 0x00000200u;
}
inline void ClusterProto::clear_has_synchronous() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void ClusterProto::clear_synchronous() {
  synchronous_ = false;
  clear_has_synchronous();
}
inline bool ClusterProto::synchronous() const {
  return synchronous_;
}
inline void ClusterProto::set_synchronous(bool value) {
  set_has_synchronous();
  synchronous_ = value;
}

// optional int32 largest_message = 20 [default = 1048576];
inline bool ClusterProto::has_largest_message() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void ClusterProto::set_has_largest_message() {
  _has_bits_[0] |= 0x00000400u;
}
inline void ClusterProto::clear_has_largest_message() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void ClusterProto::clear_largest_message() {
  largest_message_ = 1048576;
  clear_has_largest_message();
}
inline ::google::protobuf::int32 ClusterProto::largest_message() const {
  return largest_message_;
}
inline void ClusterProto::set_largest_message(::google::protobuf::int32 value) {
  set_has_largest_message();
  largest_message_ = value;
}

// optional float bandwidth = 21 [default = 100];
inline bool ClusterProto::has_bandwidth() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void ClusterProto::set_has_bandwidth() {
  _has_bits_[0] |= 0x00000800u;
}
inline void ClusterProto::clear_has_bandwidth() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void ClusterProto::clear_bandwidth() {
  bandwidth_ = 100;
  clear_has_bandwidth();
}
inline float ClusterProto::bandwidth() const {
  return bandwidth_;
}
inline void ClusterProto::set_bandwidth(float value) {
  set_has_bandwidth();
  bandwidth_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace singa

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cluster_2eproto__INCLUDED