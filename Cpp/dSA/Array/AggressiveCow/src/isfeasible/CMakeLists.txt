add_library(
    isfeasible_lib
    isfeasible.cpp
)

target_include_directories(isfeasible_lib PUBLIC ${CMAKE_SOURCE_DIR}/header)