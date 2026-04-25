add_library(BinarySrch_lib 
            BinarySrchArray.cpp
            Constructor.cpp
            )

target_include_directories(BinarySrch_lib PUBLIC ${CMAKE_SOURCE_DIR}/header)