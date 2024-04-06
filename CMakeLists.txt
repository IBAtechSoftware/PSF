cmake_minimum_required(VERSION 3.27)

project(PortableSaveFile)

find_package(Protobuf REQUIRED)

include_directories("include")
include_directories(psf_proto)

add_library(psf SHARED src/psf.cpp psf_proto/proto/psf.pb.cc)
target_link_libraries(psf protobuf)

add_executable(example src_example/example.cpp)
target_link_libraries(example psf)