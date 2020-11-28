cmake_minimum_required(VERSION 3.16)
project(vmt_hook)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS             "${CMAKE_CXX_FLAGS} -m32 -Wall -Wextra")

add_executable(${PROJECT_NAME}  main.cpp Hook.cpp)