/*
  File Name: fetch_key.cpp
*/

#include <iostream>
#include <cstdint>
#include <limits>
#include <vector>
#include "traversal.hpp"
uint32_t array::ArrayTraverse::fetch_key(uint32_t key){
    //std::vector<uint32_t> v={};
    for(uint8_t i=0; i<ARRAY_SIZE; i++){
        if(Arr[i] == key){
            //v.push_back(key);
            //v.push_back(true);
            return key;
        }
    }
    return INT32_MAX;    
}