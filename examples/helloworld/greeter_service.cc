//
//
// Tencent is pleased to support the open source community by making tRPC available.
//
// Copyright (C) 2023 THL A29 Limited, a Tencent company.
// All rights reserved.
//
// If you have downloaded a copy of the tRPC source code from Tencent,
// please note that tRPC source code is licensed under the  Apache 2.0 License,
// A copy of the Apache 2.0 License is included in this file.
//
//

#include "examples/helloworld/greeter_service.h"

#include <string>

#include "trpc/common/status.h"
#include "trpc/log/trpc_log.h"

namespace test {
namespace helloworld {

::trpc::Status GreeterServiceImpl::SayHello(::trpc::ServerContextPtr context,
                                            const ::trpc::test::helloworld::HelloRequest* request,
                                            ::trpc::test::helloworld::HelloReply* reply) {
  // Your can access more information from rpc context, eg: remote ip and port
  //TRPC_FMT_INFO("remote address: {}:{}", context->GetIp(), context->GetPort());
  //TRPC_FMT_INFO("request message: {}", request->msg());

  //reply->set_msg("ok");
  reply->set_msg(request->msg());


  return ::trpc::kSuccStatus;
}

}  // namespace helloworld
}  // namespace test
