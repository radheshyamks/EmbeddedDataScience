# add_library(main main.cpp)
add_executable(main main.cpp) # this is mendatory
target_include_directories(main PUBLIC ${CMAKE_SOURCE_DIR}/inc)