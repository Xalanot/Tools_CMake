cmake_minimum_required(VERSION 3.14)

find_package(Catch2)

if(Catch2_FOUND)
  add_executable(mathlib_test_catch2 catch2_test.cpp)
  
  target_link_libraries(mathlib_test_catch2
    PRIVATE 
      mathlib_basic
      mathlib_advanced
      mathlib_fancy
      Catch2::Catch2
  )

  add_test(NAME catch2_test COMMAND mathlib_test_catch2)
else()
  add_executable(mathlib_test_simple simple_test.cpp)

  target_link_libraries(mathlib_test_simple 
    PRIVATE 
    mathlib_basic
    mathlib_advanced
  )

  add_test(NAME simple_test COMMAND mathlib_test_simple)
endif()
