add_library(ConstExprLib ConstExpr.cpp)
target_include_directories(
    ConstExprLib 
    PUBLIC 
    ${CMAKE_SOURCE_DIR}/inc 
    ${CMAKE_SOURCE_DIR}/types
)