cmake_minimum_required(VERSION 3.8)
project(demo)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES clang/basic/main.cpp clang/basic/demoFile.c clang/basic/Coordinate.cpp clang/basic/Coordinate.h clang/basic/index.cpp xunhuan.c clang/basic/demoStruct.c clang/basic/demoStructPoint.c clang/basic/demoIO.c clang/basic/demoFunc.c)
add_executable(demo ${SOURCE_FILES})