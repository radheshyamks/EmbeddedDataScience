cmake_minimum_required(VERSION 3.10)
project(funTempApp
        VERSION 1.0.0
        DESCRIPTION "funTempApp"
        LANGUAGES CXX
)
message(STATUS "CMAKE_BUILD_TYPE: ${CMAKE_BUILD_TYPE}")
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()
function(build_type message)
endfunction()
# function(foo)
#   <commands>
# endfunction()
# can be invoked through any of
# ~
# foo()
# Foo()
# FOO()
# cmake_language(CALL foo)
# set( SOURCES
#      main.cpp
#      tempfun.cpp
# )
# add_executable(funTempApp ${SOURCES})
cmake_policy(SET CMP0079 NEW)
add_subdirectory(${CMAKE_SOURCE_DIR}/main)
add_subdirectory(${CMAKE_SOURCE_DIR}/src)
target_link_libraries(mainLib PUBLIC tempfun)