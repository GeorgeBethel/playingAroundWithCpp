cmake_minimum_required(VERSION 3.1)

project(cmake_build_lib)

include_directories(.)

add_library(cmake_build cmake_build.cpp)

add_executable(main main.cpp)

target_link_libraries(main cmake_build)