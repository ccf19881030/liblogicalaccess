// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: iks.proto

#include "iks.pb.h"
#include "iks.grpc.pb.h"

#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>

static const char* IKSService_method_names[] = {
  "/IKSService/GenRandom",
  "/IKSService/AESEncrypt",
  "/IKSService/AESDecrypt",
  "/IKSService/DESFireISOAuth1",
  "/IKSService/DESFireISOAuth2",
  "/IKSService/DESFireAESAuth1",
  "/IKSService/DESFireAESAuth2",
  "/IKSService/DESFireChangeKey",
};

std::unique_ptr< IKSService::Stub> IKSService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< IKSService::Stub> stub(new IKSService::Stub(channel));
  return stub;
}

IKSService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_GenRandom_(IKSService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_AESEncrypt_(IKSService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_AESDecrypt_(IKSService_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DESFireISOAuth1_(IKSService_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DESFireISOAuth2_(IKSService_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DESFireAESAuth1_(IKSService_method_names[5], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DESFireAESAuth2_(IKSService_method_names[6], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DESFireChangeKey_(IKSService_method_names[7], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status IKSService::Stub::GenRandom(::grpc::ClientContext* context, const ::CMSG_GenRandom& request, ::SMSG_GenRandom* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GenRandom_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::SMSG_GenRandom>* IKSService::Stub::AsyncGenRandomRaw(::grpc::ClientContext* context, const ::CMSG_GenRandom& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::SMSG_GenRandom>::Create(channel_.get(), cq, rpcmethod_GenRandom_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::SMSG_GenRandom>* IKSService::Stub::PrepareAsyncGenRandomRaw(::grpc::ClientContext* context, const ::CMSG_GenRandom& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::SMSG_GenRandom>::Create(channel_.get(), cq, rpcmethod_GenRandom_, context, request, false);
}

::grpc::Status IKSService::Stub::AESEncrypt(::grpc::ClientContext* context, const ::CMSG_AESOperation& request, ::SMSG_AESResult* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_AESEncrypt_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::SMSG_AESResult>* IKSService::Stub::AsyncAESEncryptRaw(::grpc::ClientContext* context, const ::CMSG_AESOperation& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::SMSG_AESResult>::Create(channel_.get(), cq, rpcmethod_AESEncrypt_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::SMSG_AESResult>* IKSService::Stub::PrepareAsyncAESEncryptRaw(::grpc::ClientContext* context, const ::CMSG_AESOperation& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::SMSG_AESResult>::Create(channel_.get(), cq, rpcmethod_AESEncrypt_, context, request, false);
}

::grpc::Status IKSService::Stub::AESDecrypt(::grpc::ClientContext* context, const ::CMSG_AESOperation& request, ::SMSG_AESResult* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_AESDecrypt_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::SMSG_AESResult>* IKSService::Stub::AsyncAESDecryptRaw(::grpc::ClientContext* context, const ::CMSG_AESOperation& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::SMSG_AESResult>::Create(channel_.get(), cq, rpcmethod_AESDecrypt_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::SMSG_AESResult>* IKSService::Stub::PrepareAsyncAESDecryptRaw(::grpc::ClientContext* context, const ::CMSG_AESOperation& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::SMSG_AESResult>::Create(channel_.get(), cq, rpcmethod_AESDecrypt_, context, request, false);
}

::grpc::Status IKSService::Stub::DESFireISOAuth1(::grpc::ClientContext* context, const ::CMSG_DesfireISOAuth_Step1& request, ::SMSG_DesfireISOAuth_Step1* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_DESFireISOAuth1_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::SMSG_DesfireISOAuth_Step1>* IKSService::Stub::AsyncDESFireISOAuth1Raw(::grpc::ClientContext* context, const ::CMSG_DesfireISOAuth_Step1& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::SMSG_DesfireISOAuth_Step1>::Create(channel_.get(), cq, rpcmethod_DESFireISOAuth1_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::SMSG_DesfireISOAuth_Step1>* IKSService::Stub::PrepareAsyncDESFireISOAuth1Raw(::grpc::ClientContext* context, const ::CMSG_DesfireISOAuth_Step1& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::SMSG_DesfireISOAuth_Step1>::Create(channel_.get(), cq, rpcmethod_DESFireISOAuth1_, context, request, false);
}

::grpc::Status IKSService::Stub::DESFireISOAuth2(::grpc::ClientContext* context, const ::CMSG_DesfireAuth_Step2& request, ::SMSG_DesfireAuth_Step2* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_DESFireISOAuth2_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::SMSG_DesfireAuth_Step2>* IKSService::Stub::AsyncDESFireISOAuth2Raw(::grpc::ClientContext* context, const ::CMSG_DesfireAuth_Step2& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::SMSG_DesfireAuth_Step2>::Create(channel_.get(), cq, rpcmethod_DESFireISOAuth2_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::SMSG_DesfireAuth_Step2>* IKSService::Stub::PrepareAsyncDESFireISOAuth2Raw(::grpc::ClientContext* context, const ::CMSG_DesfireAuth_Step2& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::SMSG_DesfireAuth_Step2>::Create(channel_.get(), cq, rpcmethod_DESFireISOAuth2_, context, request, false);
}

::grpc::Status IKSService::Stub::DESFireAESAuth1(::grpc::ClientContext* context, const ::CMSG_DesfireAESAuth_Step1& request, ::SMSG_DesfireAESAuth_Step1* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_DESFireAESAuth1_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::SMSG_DesfireAESAuth_Step1>* IKSService::Stub::AsyncDESFireAESAuth1Raw(::grpc::ClientContext* context, const ::CMSG_DesfireAESAuth_Step1& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::SMSG_DesfireAESAuth_Step1>::Create(channel_.get(), cq, rpcmethod_DESFireAESAuth1_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::SMSG_DesfireAESAuth_Step1>* IKSService::Stub::PrepareAsyncDESFireAESAuth1Raw(::grpc::ClientContext* context, const ::CMSG_DesfireAESAuth_Step1& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::SMSG_DesfireAESAuth_Step1>::Create(channel_.get(), cq, rpcmethod_DESFireAESAuth1_, context, request, false);
}

::grpc::Status IKSService::Stub::DESFireAESAuth2(::grpc::ClientContext* context, const ::CMSG_DesfireAuth_Step2& request, ::SMSG_DesfireAuth_Step2* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_DESFireAESAuth2_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::SMSG_DesfireAuth_Step2>* IKSService::Stub::AsyncDESFireAESAuth2Raw(::grpc::ClientContext* context, const ::CMSG_DesfireAuth_Step2& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::SMSG_DesfireAuth_Step2>::Create(channel_.get(), cq, rpcmethod_DESFireAESAuth2_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::SMSG_DesfireAuth_Step2>* IKSService::Stub::PrepareAsyncDESFireAESAuth2Raw(::grpc::ClientContext* context, const ::CMSG_DesfireAuth_Step2& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::SMSG_DesfireAuth_Step2>::Create(channel_.get(), cq, rpcmethod_DESFireAESAuth2_, context, request, false);
}

::grpc::Status IKSService::Stub::DESFireChangeKey(::grpc::ClientContext* context, const ::CMSG_DesfireChangeKey& request, ::SMSG_DesfireChangeKey* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_DESFireChangeKey_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::SMSG_DesfireChangeKey>* IKSService::Stub::AsyncDESFireChangeKeyRaw(::grpc::ClientContext* context, const ::CMSG_DesfireChangeKey& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::SMSG_DesfireChangeKey>::Create(channel_.get(), cq, rpcmethod_DESFireChangeKey_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::SMSG_DesfireChangeKey>* IKSService::Stub::PrepareAsyncDESFireChangeKeyRaw(::grpc::ClientContext* context, const ::CMSG_DesfireChangeKey& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::SMSG_DesfireChangeKey>::Create(channel_.get(), cq, rpcmethod_DESFireChangeKey_, context, request, false);
}

IKSService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      IKSService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< IKSService::Service, ::CMSG_GenRandom, ::SMSG_GenRandom>(
          std::mem_fn(&IKSService::Service::GenRandom), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      IKSService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< IKSService::Service, ::CMSG_AESOperation, ::SMSG_AESResult>(
          std::mem_fn(&IKSService::Service::AESEncrypt), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      IKSService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< IKSService::Service, ::CMSG_AESOperation, ::SMSG_AESResult>(
          std::mem_fn(&IKSService::Service::AESDecrypt), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      IKSService_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< IKSService::Service, ::CMSG_DesfireISOAuth_Step1, ::SMSG_DesfireISOAuth_Step1>(
          std::mem_fn(&IKSService::Service::DESFireISOAuth1), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      IKSService_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< IKSService::Service, ::CMSG_DesfireAuth_Step2, ::SMSG_DesfireAuth_Step2>(
          std::mem_fn(&IKSService::Service::DESFireISOAuth2), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      IKSService_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< IKSService::Service, ::CMSG_DesfireAESAuth_Step1, ::SMSG_DesfireAESAuth_Step1>(
          std::mem_fn(&IKSService::Service::DESFireAESAuth1), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      IKSService_method_names[6],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< IKSService::Service, ::CMSG_DesfireAuth_Step2, ::SMSG_DesfireAuth_Step2>(
          std::mem_fn(&IKSService::Service::DESFireAESAuth2), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      IKSService_method_names[7],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< IKSService::Service, ::CMSG_DesfireChangeKey, ::SMSG_DesfireChangeKey>(
          std::mem_fn(&IKSService::Service::DESFireChangeKey), this)));
}

IKSService::Service::~Service() {
}

::grpc::Status IKSService::Service::GenRandom(::grpc::ServerContext* context, const ::CMSG_GenRandom* request, ::SMSG_GenRandom* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IKSService::Service::AESEncrypt(::grpc::ServerContext* context, const ::CMSG_AESOperation* request, ::SMSG_AESResult* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IKSService::Service::AESDecrypt(::grpc::ServerContext* context, const ::CMSG_AESOperation* request, ::SMSG_AESResult* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IKSService::Service::DESFireISOAuth1(::grpc::ServerContext* context, const ::CMSG_DesfireISOAuth_Step1* request, ::SMSG_DesfireISOAuth_Step1* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IKSService::Service::DESFireISOAuth2(::grpc::ServerContext* context, const ::CMSG_DesfireAuth_Step2* request, ::SMSG_DesfireAuth_Step2* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IKSService::Service::DESFireAESAuth1(::grpc::ServerContext* context, const ::CMSG_DesfireAESAuth_Step1* request, ::SMSG_DesfireAESAuth_Step1* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IKSService::Service::DESFireAESAuth2(::grpc::ServerContext* context, const ::CMSG_DesfireAuth_Step2* request, ::SMSG_DesfireAuth_Step2* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IKSService::Service::DESFireChangeKey(::grpc::ServerContext* context, const ::CMSG_DesfireChangeKey* request, ::SMSG_DesfireChangeKey* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


