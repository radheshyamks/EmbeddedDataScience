add_library(err_code error_handler.c)
target_include_directories(err_code PUBLIC ${CMAKE_SOURCE_DIR}/inc)