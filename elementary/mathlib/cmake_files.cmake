set(mathlib_basic_SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/src/add.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/mul.cpp"
)

set(mathlib_basic_HEADERS
    "${CMAKE_CURRENT_SOURCE_DIR}/include/add.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/include/mul.h"
)

set(mathlib_advanced_SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/src/pow.cpp"
)

set(mathlib_advanced_HEADERS
    "${CMAKE_CURRENT_SOURCE_DIR}/include/pow.h"
)

set(mathlib_fancy_HEADERS
    "${CMAKE_CURRENT_SOURCE_DIR}/include/add_variadic.h"
)