/**
 * Date: 11-Oct-2026
 * Author: Radheshyam Kumar Singh
 * File Name: c2Cpp.cpp
 * Description: This file is used to implement the functions declared in the header file this_hdr.hpp. It converts uint8_t pointer to object again.
 * 
 */
#include "this_hdr.hpp"
#include <stdint.h>
#include<iostream>
#include "header.h"
void call_cpp_function(uint8_t* err_code){
    ThisPtr::cThisPtr obj = *(reinterpret_cast<ThisPtr::cThisPtr*>(err_code));
    uint32_t mem = obj.getMem1();
    std::cout<<"mem value:0x"<<std::hex<<std::uppercase<<mem<<std::endl;
}