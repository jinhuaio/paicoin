// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: verifier.proto

#include "verifier.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace pai {
namespace pouw {
namespace verification {
class RequestDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Request>
      _instance;
} _Request_default_instance_;
class ResponseDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Response>
      _instance;
} _Response_default_instance_;
}  // namespace verification
}  // namespace pouw
}  // namespace pai
namespace protobuf_verifier_2eproto {
static void InitDefaultsRequest() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::pai::pouw::verification::_Request_default_instance_;
    new (ptr) ::pai::pouw::verification::Request();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::pai::pouw::verification::Request::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Request =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsRequest}, {}};

static void InitDefaultsResponse() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::pai::pouw::verification::_Response_default_instance_;
    new (ptr) ::pai::pouw::verification::Response();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::pai::pouw::verification::Response::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Response =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsResponse}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Request.base);
  ::google::protobuf::internal::InitSCC(&scc_info_Response.base);
}

::google::protobuf::Metadata file_level_metadata[2];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::pai::pouw::verification::Request, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::pai::pouw::verification::Request, msg_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::pai::pouw::verification::Request, model_hash_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::pai::pouw::verification::Request, msg_next_id_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::pai::pouw::verification::Response, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::pai::pouw::verification::Response, code_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::pai::pouw::verification::Response, description_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::pai::pouw::verification::Request)},
  { 8, -1, sizeof(::pai::pouw::verification::Response)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::pai::pouw::verification::_Request_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::pai::pouw::verification::_Response_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "verifier.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\016verifier.proto\022\025pai.pouw.verification\""
      "B\n\007Request\022\016\n\006msg_id\030\001 \001(\t\022\022\n\nmodel_hash"
      "\030\002 \001(\t\022\023\n\013msg_next_id\030\003 \001(\t\"\263\001\n\010Response"
      "\0228\n\004code\030\001 \001(\0162*.pai.pouw.verification.R"
      "esponse.ReturnCode\022\023\n\013description\030\002 \001(\t\""
      "X\n\nReturnCode\022\021\n\rGENERAL_ERROR\020\000\022\007\n\002OK\020\310"
      "\001\022\020\n\013BAD_REQUEST\020\220\003\022\016\n\tNOT_FOUND\020\224\003\022\014\n\007I"
      "NVALID\020\246\0032W\n\010Verifier\022K\n\006Verify\022\036.pai.po"
      "uw.verification.Request\032\037.pai.pouw.verif"
      "ication.Response\"\000b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 386);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "verifier.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_verifier_2eproto
namespace pai {
namespace pouw {
namespace verification {
const ::google::protobuf::EnumDescriptor* Response_ReturnCode_descriptor() {
  protobuf_verifier_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_verifier_2eproto::file_level_enum_descriptors[0];
}
bool Response_ReturnCode_IsValid(int value) {
  switch (value) {
    case 0:
    case 200:
    case 400:
    case 404:
    case 422:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const Response_ReturnCode Response::GENERAL_ERROR;
const Response_ReturnCode Response::OK;
const Response_ReturnCode Response::BAD_REQUEST;
const Response_ReturnCode Response::NOT_FOUND;
const Response_ReturnCode Response::INVALID;
const Response_ReturnCode Response::ReturnCode_MIN;
const Response_ReturnCode Response::ReturnCode_MAX;
const int Response::ReturnCode_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void Request::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Request::kMsgIdFieldNumber;
const int Request::kModelHashFieldNumber;
const int Request::kMsgNextIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Request::Request()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_verifier_2eproto::scc_info_Request.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:pai.pouw.verification.Request)
}
Request::Request(const Request& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  msg_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.msg_id().size() > 0) {
    msg_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.msg_id_);
  }
  model_hash_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.model_hash().size() > 0) {
    model_hash_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.model_hash_);
  }
  msg_next_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.msg_next_id().size() > 0) {
    msg_next_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.msg_next_id_);
  }
  // @@protoc_insertion_point(copy_constructor:pai.pouw.verification.Request)
}

void Request::SharedCtor() {
  msg_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  model_hash_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  msg_next_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

Request::~Request() {
  // @@protoc_insertion_point(destructor:pai.pouw.verification.Request)
  SharedDtor();
}

void Request::SharedDtor() {
  msg_id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  model_hash_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  msg_next_id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Request::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Request::descriptor() {
  ::protobuf_verifier_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_verifier_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Request& Request::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_verifier_2eproto::scc_info_Request.base);
  return *internal_default_instance();
}


void Request::Clear() {
// @@protoc_insertion_point(message_clear_start:pai.pouw.verification.Request)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  msg_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  model_hash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  msg_next_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool Request::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:pai.pouw.verification.Request)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string msg_id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_msg_id()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->msg_id().data(), static_cast<int>(this->msg_id().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "pai.pouw.verification.Request.msg_id"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string model_hash = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_model_hash()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->model_hash().data(), static_cast<int>(this->model_hash().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "pai.pouw.verification.Request.model_hash"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string msg_next_id = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_msg_next_id()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->msg_next_id().data(), static_cast<int>(this->msg_next_id().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "pai.pouw.verification.Request.msg_next_id"));
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:pai.pouw.verification.Request)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:pai.pouw.verification.Request)
  return false;
#undef DO_
}

void Request::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:pai.pouw.verification.Request)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string msg_id = 1;
  if (this->msg_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->msg_id().data(), static_cast<int>(this->msg_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "pai.pouw.verification.Request.msg_id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->msg_id(), output);
  }

  // string model_hash = 2;
  if (this->model_hash().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->model_hash().data(), static_cast<int>(this->model_hash().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "pai.pouw.verification.Request.model_hash");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->model_hash(), output);
  }

  // string msg_next_id = 3;
  if (this->msg_next_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->msg_next_id().data(), static_cast<int>(this->msg_next_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "pai.pouw.verification.Request.msg_next_id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->msg_next_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:pai.pouw.verification.Request)
}

::google::protobuf::uint8* Request::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:pai.pouw.verification.Request)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string msg_id = 1;
  if (this->msg_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->msg_id().data(), static_cast<int>(this->msg_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "pai.pouw.verification.Request.msg_id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->msg_id(), target);
  }

  // string model_hash = 2;
  if (this->model_hash().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->model_hash().data(), static_cast<int>(this->model_hash().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "pai.pouw.verification.Request.model_hash");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->model_hash(), target);
  }

  // string msg_next_id = 3;
  if (this->msg_next_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->msg_next_id().data(), static_cast<int>(this->msg_next_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "pai.pouw.verification.Request.msg_next_id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->msg_next_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:pai.pouw.verification.Request)
  return target;
}

size_t Request::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:pai.pouw.verification.Request)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string msg_id = 1;
  if (this->msg_id().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->msg_id());
  }

  // string model_hash = 2;
  if (this->model_hash().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->model_hash());
  }

  // string msg_next_id = 3;
  if (this->msg_next_id().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->msg_next_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Request::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:pai.pouw.verification.Request)
  GOOGLE_DCHECK_NE(&from, this);
  const Request* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Request>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:pai.pouw.verification.Request)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:pai.pouw.verification.Request)
    MergeFrom(*source);
  }
}

void Request::MergeFrom(const Request& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:pai.pouw.verification.Request)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.msg_id().size() > 0) {

    msg_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.msg_id_);
  }
  if (from.model_hash().size() > 0) {

    model_hash_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.model_hash_);
  }
  if (from.msg_next_id().size() > 0) {

    msg_next_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.msg_next_id_);
  }
}

void Request::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:pai.pouw.verification.Request)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Request::CopyFrom(const Request& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:pai.pouw.verification.Request)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Request::IsInitialized() const {
  return true;
}

void Request::Swap(Request* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Request::InternalSwap(Request* other) {
  using std::swap;
  msg_id_.Swap(&other->msg_id_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  model_hash_.Swap(&other->model_hash_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  msg_next_id_.Swap(&other->msg_next_id_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Request::GetMetadata() const {
  protobuf_verifier_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_verifier_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void Response::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Response::kCodeFieldNumber;
const int Response::kDescriptionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Response::Response()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_verifier_2eproto::scc_info_Response.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:pai.pouw.verification.Response)
}
Response::Response(const Response& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  description_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.description().size() > 0) {
    description_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.description_);
  }
  code_ = from.code_;
  // @@protoc_insertion_point(copy_constructor:pai.pouw.verification.Response)
}

void Response::SharedCtor() {
  description_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  code_ = 0;
}

Response::~Response() {
  // @@protoc_insertion_point(destructor:pai.pouw.verification.Response)
  SharedDtor();
}

void Response::SharedDtor() {
  description_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Response::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Response::descriptor() {
  ::protobuf_verifier_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_verifier_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Response& Response::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_verifier_2eproto::scc_info_Response.base);
  return *internal_default_instance();
}


void Response::Clear() {
// @@protoc_insertion_point(message_clear_start:pai.pouw.verification.Response)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  description_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  code_ = 0;
  _internal_metadata_.Clear();
}

bool Response::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:pai.pouw.verification.Response)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .pai.pouw.verification.Response.ReturnCode code = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_code(static_cast< ::pai::pouw::verification::Response_ReturnCode >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string description = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_description()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->description().data(), static_cast<int>(this->description().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "pai.pouw.verification.Response.description"));
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:pai.pouw.verification.Response)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:pai.pouw.verification.Response)
  return false;
#undef DO_
}

void Response::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:pai.pouw.verification.Response)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .pai.pouw.verification.Response.ReturnCode code = 1;
  if (this->code() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->code(), output);
  }

  // string description = 2;
  if (this->description().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->description().data(), static_cast<int>(this->description().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "pai.pouw.verification.Response.description");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->description(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:pai.pouw.verification.Response)
}

::google::protobuf::uint8* Response::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:pai.pouw.verification.Response)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .pai.pouw.verification.Response.ReturnCode code = 1;
  if (this->code() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->code(), target);
  }

  // string description = 2;
  if (this->description().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->description().data(), static_cast<int>(this->description().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "pai.pouw.verification.Response.description");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->description(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:pai.pouw.verification.Response)
  return target;
}

size_t Response::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:pai.pouw.verification.Response)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string description = 2;
  if (this->description().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->description());
  }

  // .pai.pouw.verification.Response.ReturnCode code = 1;
  if (this->code() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->code());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Response::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:pai.pouw.verification.Response)
  GOOGLE_DCHECK_NE(&from, this);
  const Response* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Response>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:pai.pouw.verification.Response)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:pai.pouw.verification.Response)
    MergeFrom(*source);
  }
}

void Response::MergeFrom(const Response& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:pai.pouw.verification.Response)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.description().size() > 0) {

    description_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.description_);
  }
  if (from.code() != 0) {
    set_code(from.code());
  }
}

void Response::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:pai.pouw.verification.Response)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Response::CopyFrom(const Response& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:pai.pouw.verification.Response)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Response::IsInitialized() const {
  return true;
}

void Response::Swap(Response* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Response::InternalSwap(Response* other) {
  using std::swap;
  description_.Swap(&other->description_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(code_, other->code_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Response::GetMetadata() const {
  protobuf_verifier_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_verifier_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace verification
}  // namespace pouw
}  // namespace pai
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::pai::pouw::verification::Request* Arena::CreateMaybeMessage< ::pai::pouw::verification::Request >(Arena* arena) {
  return Arena::CreateInternal< ::pai::pouw::verification::Request >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::pai::pouw::verification::Response* Arena::CreateMaybeMessage< ::pai::pouw::verification::Response >(Arena* arena) {
  return Arena::CreateInternal< ::pai::pouw::verification::Response >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)