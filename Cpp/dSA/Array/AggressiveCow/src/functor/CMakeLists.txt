add_library(
    functor_lib
    functor.cpp
)

target_include_directories(functor_lib PUBLIC ${CMAKE_SOURCE_DIR}/header)