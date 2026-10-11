cmake_minimum_required(VERSION 3.10)
project(
        thisPtrApp
        VERSION 1.0.0
        DESCRIPTION "A Simple program for this pointer convert to unsigned pointer"
        LANGUAGES C CXX
)
# Enable cross-directory linking policy
cmake_policy(SET CMP0079 NEW)
# include  header globally
include_directories($(CMAKE_SOURCE_DIR)/inc)
# add the source directory
add_subdirectory(${CMAKE_SOURCE_DIR}/err_code)
add_subdirectory(${CMAKE_SOURCE_DIR}/c2Cpp)
add_subdirectory(${CMAKE_SOURCE_DIR}/src)
add_subdirectory(${CMAKE_SOURCE_DIR}/main)
# Create final executable
# add_executable(thisPtr)
target_link_libraries(main PRIVATE thisPtr err_code c2Cpp)