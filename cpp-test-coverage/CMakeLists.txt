cmake_minimum_required(VERSION 3.10)

SET(GCC_COVERAGE_COMPILE_FLAGS "-g -O0 -coverage")
SET(GCC_COVERAGE_LINK_FLAGS "-coverage")
SET(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}")
SET(CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} ${GCC_COVERAGE_LINK_FLAGS}")

include_directories(.)

add_library(library SHARED
  library.cpp
)

add_executable(test-all
  test.cpp
)
target_link_libraries(test-all library)
