# command to run cmake: 
#   1) cmake .. -G "MinGW Makefiles"
#   2) mingw32-make
# this is root CMakeLists.txt
cmake_minimum_required(VERSION 3.10)
project(ArrayReverse 
        VERSION 1.0.0
        DESCRIPTION "A simple reverse array project"
        LANGUAGES CXX)

#set the Cpp standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

#including header folder
include_directories(${CMAKE_SOURCE_DIR}/header)
# including source file in subdirecotry
add_subdirectory(${CMAKE_SOURCE_DIR}/src)