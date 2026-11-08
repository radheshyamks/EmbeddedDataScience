cmake_minimum_required(VERSION 3.10)
cmake_policy(SET CMP0079 NEW)
project(
    uniqPtr
    VERSION 1.0
    DESCRIPTION "uniqPtr"
    LANGUAGES CXX C
)

include(${CMAKE_SOURCE_DIR}/src.cmake)
add_subdirectory(
    ${CMAKE_SOURCE_DIR}/src
)
add_subdirectory(
    ${CMAKE_SOURCE_DIR}/main
)

target_link_libraries(
    mainLib
    PRIVATE
    uniqPtrLib
)