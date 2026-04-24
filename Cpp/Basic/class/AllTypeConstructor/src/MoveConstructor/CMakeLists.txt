add_library(MoveConstructor_lib MoveConstructor.cpp)

# This command tells where to look header file
target_include_directories(MoveConstructor_lib PUBLIC ${CMAKE_SOURCE_DIR}/header)