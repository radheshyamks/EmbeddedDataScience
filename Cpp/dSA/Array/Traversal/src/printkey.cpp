/*
  File Name: printkey.cpp
*/
#include <iostream>
#include <cstdint>
#include "traversal.hpp"
using namespace std;
void array::ArrayTraverse::printkey(uint32_t key){
    std::cout<<"Key Found\n";
    std::cout<<"key: "<<key<<"\n";
}
void array::ArrayTraverse::InvalidKey(void){
    std::cout<<"Invalid Key\n";
    std::cout<<"Key Not fount\n";
}