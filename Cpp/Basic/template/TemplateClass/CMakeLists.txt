cmake_minimum_required(VERSION 3.10)

project(
    classTemp
    VERSION 1.0.0
    DESCRIPTION "A simple C++ project demonstrating class templates"
    HOMEPAGE_URL "https://example.com/classTemp"
    LANGUAGES C CXX
)
# include(src.cmake)
add_definitions(
    -D__ARITHMETIC__
)
cmake_policy(SET CMP0079 NEW)
add_subdirectory(${CMAKE_SOURCE_DIR}/main)
add_subdirectory(${CMAKE_SOURCE_DIR}/src)
target_link_libraries(
    mainlib TempClassLib
)