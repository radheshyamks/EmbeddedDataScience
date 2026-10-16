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

# foo()
# Foo()
# FOO()
# cmake_language(CALL foo)