/*
    File Name: Traversal.cpp
*/
#include <cstdint>
#include <iostream>
#include "traversal.hpp"
namespace array{
    ArrayTraverse arrayTraverse_e;
}
void array::ArrayTraverse::Array_Traversal(uint32_t key){
    if(fetch_key(key)==key){
        printkey(key);
        return;
    }else{
        InvalidKey();
        return;
    }
}