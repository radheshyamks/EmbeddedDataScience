cmake_minimum_required(VERSION 3.10)
cmake_policy(SET CMP0079 NEW)
project(
    EnumClassApp
    VERSION 1.0.0
    DESCRIPTION "This app is to Compare two enum class"
    LANGUAGES CXX
)
# include(${CMAKE_SOURCE_DIR}/src.cmake)
add_subdirectory(
    ${CMAKE_SOURCE_DIR}/src
)
add_subdirectory(
    ${CMAKE_SOURCE_DIR}/main
)
target_link_libraries(
    mainLib PUBLIC enumLib
)