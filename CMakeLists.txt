cmake_minimum_required(VERSION 3.8)
project(demo)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES clang/basic/main.cpp clang/demo/demoStruct.c clang/level/)
add_executable(demo ${SOURCE_FILES})