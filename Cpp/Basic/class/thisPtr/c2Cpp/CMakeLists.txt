add_library(c2Cpp c2Cpp.cpp)
target_include_directories(c2Cpp PUBLIC ${CMAKE_SOURCE_DIR}/inc)
target_include_directories(c2Cpp PUBLIC ${CMAKE_SOURCE_DIR}/type)