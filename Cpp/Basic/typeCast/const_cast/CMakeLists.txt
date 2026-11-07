cmake_minimum_required(VERSION 3.10)
cmake_policy(SET CMP0079 NEW)
project(
    constApp
    VERSION 1.0
    DESCRIPTION "const_cast example"
    LANGUAGES CXX C
)
include(${CMAKE_SOURCE_DIR}/src.cmake)
add_subdirectory(${CMAKE_SOURCE_DIR}/main)
add_subdirectory(${CMAKE_SOURCE_DIR}/src)

target_link_libraries(
    mainLib
    PRIVATE
    constLib
)