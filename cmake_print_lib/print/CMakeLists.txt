cmake_minimum_required(VERSION 3.14)

add_library(print_lib_static STATIC src/print.cpp)
target_include_directories(print_lib_static PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_library(print_lib_shared SHARED src/print.cpp)
target_include_directories(print_lib_shared PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
