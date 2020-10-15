cmake_minimum_required(VERSION 3.14)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled ${SOURCE_FILES} main.cpp factorial.cpp factorial.h)