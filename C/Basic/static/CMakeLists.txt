cmake_required_minimum(VERSION 3.10)
project(StaticBasic VERSION 1.0.0 DESCRIPTION "C Basic Project" LANGUAGES C CXX)
# add_subdirectory(${CMAKE_SOURCE_DIR}/inc)
# add_subdirectory(${CMAKE_SOURCE_DIR}/src)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)
set(CMAKE_C_EXTENSIONS OFF)
set(
    SOURCES
    ${CMAKE_SOURCE_DIR}/src/main.c
    ${CMAKE_SOURCE_DIR}/src/static.c
)
# creating an executable target named StaticBinary from the source files specified in SOURCES
add_executable(StaticBinary ${SOURCES})
# include the header files from the inc directory
target_include_directories(StaticBinary PUBLIC ${CMAKE_SOURCE_DIR}/inc)