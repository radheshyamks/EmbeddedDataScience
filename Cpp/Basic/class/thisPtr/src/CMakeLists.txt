add_library(thisPtr
    thisPtr.cpp
)
target_include_directories(thisPtr PUBLIC ${CMAKE_SOURCE_DIR}/inc)
target_include_directories(thisPtr PUBLIC ${CMAKE_SOURCE_DIR}/type)