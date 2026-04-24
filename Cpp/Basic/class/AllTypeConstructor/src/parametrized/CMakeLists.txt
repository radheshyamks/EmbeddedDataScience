add_library(parametrized_lib parametrized.cpp)

message("This commands tell where to look header file")
target_include_directories(parametrized_lib PUBLIC ${CMAKE_SOURCE_DIR}/header)