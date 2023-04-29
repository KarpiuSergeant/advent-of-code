cmake_minimum_required(VERSION 3.25)
project(01)

set(CMAKE_CXX_STANDARD 23)

set(SRC_FILES main.cpp)
add_executable(01 ${SRC_FILES})

include_directories(lib)
add_subdirectory(lib)

target_link_libraries(01 01_lib)

add_subdirectory(tests)