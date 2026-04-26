cmake_minimum_required(VERSION 3.10.0)

project(AppBinSearch
        VERSION 1.0.0
        DESCRIPTION "Simple program of Binary Search"
        LANGUAGES CXX
)

# Adjust this path to where Dr. Memory is installed
set(DrMemoryPath "C:/Program Files (x86)/Dr. Memory/bin")

# Make sure CMake can find it
find_program(DRMEMORY_EXE drmemory PATHS "${DrMemoryPath}" NO_DEFAULT_PATH)
if(NOT DRMEMORY_EXE)
    message(FATAL_ERROR "Dr. Memory not found in ${DrMemoryPath}")
elseif(DRMEMORY_EXE)
    message("Dr. Memory found in ${DrMemoryPath}")
endif()


if(WIN32)
    message("This is WINDOWS platform")
    include_directories(${CMAKE_SOURCE_DIR}/header)
    add_subdirectory(${CMAKE_SOURCE_DIR}/src)
endif()