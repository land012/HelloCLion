cmake_minimum_required(VERSION 3.7)
project(HelloCLion)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp randdemo.cpp arraydemo.cpp stringdemo.cpp pointdemo.cpp pointdemo.h filedemo.cpp)
add_executable(HelloCLion ${SOURCE_FILES})