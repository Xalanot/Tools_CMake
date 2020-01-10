cmake_minimum_required(VERSION 3.12)

include("cmake_files.cmake")

add_library(mathlib_basic 
  STATIC 
    ${mathlib_basic_SOURCES}
    ${mathlib_basic_HEADERS}
)

target_include_directories(mathlib_basic 
  PUBLIC 
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

add_library(mathlib_advanced
  SHARED
    ${mathlib_advanced_SOURCES}
    ${mathlib_advanced_HEADERS}
)

# create the header handling dllexport/dllimport
include(GenerateExportHeader)
generate_export_header(mathlib_advanced
    EXPORT_MACRO_NAME DLL_EXPORT
    EXPORT_FILE_NAME ${CMAKE_CURRENT_BINARY_DIR}/include/dllexport.h
)

target_include_directories(mathlib_advanced
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/include>
)

target_link_libraries(mathlib_advanced
  PRIVATE
    mathlib_basic
)

add_library(mathlib_fancy
  INTERFACE
)

target_include_directories(mathlib_fancy
  INTERFACE
   $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

target_compile_features(mathlib_fancy
    INTERFACE
      cxx_std_17)
