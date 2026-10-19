add_library(
            tempfun
            templateFunc.cpp
)
target_include_directories(tempfun PUBLIC ${CMAKE_SOURCE_DIR}/inc)
target_include_directories(tempfun PUBLIC ${CMAKE_SOURCE_DIR}/type)