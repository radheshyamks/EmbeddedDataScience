add_library(default_lib default.cpp)
target_link_directories(default_lib PUBLIC ${CMAKE_SOURCE_DIR}/header)