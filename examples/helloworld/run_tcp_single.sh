#!/bin/bash

bazel build //examples/helloworld/...

echo "testing server at fiber runtime"
./bazel-bin/examples/helloworld/helloworld_svr --is_echo=0  --config=./examples/helloworld/conf/trpc_cpp_fiber.yaml &
