add_library(parametrized_lib parametrized.cpp)

target_link_directories(parametrized_lib PUBLIC ${CMAKE_SOURCE_DIR}/header)