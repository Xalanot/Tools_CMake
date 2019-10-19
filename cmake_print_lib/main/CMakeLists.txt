cmake_minimum_required(VERSION 3.14)

add_executable(print_main_static main.cpp)

target_link_libraries(print_main_static print_lib_static)

add_executable(print_main_shared main.cpp)

target_link_libraries(print_main_shared print_lib_shared)
