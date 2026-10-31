cmake_minimum_required(VERSION 3.10)
project(
    ConstExprApp
    VERSION 1.0
    DESCRIPTION "A simple C++ project demonstrating the use of constexpr"
    LANGUAGES CXX C
)
cmake_policy(SET CMP0079 NEW)
include(${CMAKE_SOURCE_DIR}/src.cmake)
add_subdirectory(${CMAKE_SOURCE_DIR}/main)
add_subdirectory(${CMAKE_SOURCE_DIR}/src)
target_link_libraries(constEprMain PUBLIC ConstExprLib)