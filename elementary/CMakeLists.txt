cmake_minimum_required(VERSION 3.12)
project(cmake_print_lib)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

option(BUILD_TESTS "set this if you want to build the tests")

add_subdirectory(mathlib)

if(BUILD_TESTS)
  enable_testing()
  add_subdirectory(test)
endif()
