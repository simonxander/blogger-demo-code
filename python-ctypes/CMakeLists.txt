cmake_minimum_required(VERSION 3.10)

include_directories(.)

add_library(library SHARED
  library.cpp
)

add_library(library-python SHARED
  library-python.cpp
)
target_link_libraries(library-python library)

add_executable(executable
  main.cpp
)
target_link_libraries(executable library)
