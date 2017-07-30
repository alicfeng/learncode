cmake_minimum_required(VERSION 3.8)
project(demo)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp demoFile.c Coordinate.cpp Coordinate.h index.cpp xunhuan.c demoStruct.c demoStructPoint.c demoIO.c demoFunc.c)
add_executable(demo ${SOURCE_FILES})