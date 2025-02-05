#!/bin/bash

bazel build //examples/helloworld/...

echo "testing server at fiber runtime"
./bazel-bin/examples/helloworld/helloworld_svr --config=./examples/helloworld/conf/trpc_cpp_fiber.yaml &
sleep 1
time ./bazel-bin/examples/helloworld/test/fiber_client --client_config=./examples/helloworld/test/conf/trpc_cpp_fiber.yaml
killall helloworld_svr
