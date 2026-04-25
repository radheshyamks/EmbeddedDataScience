#include "binary.hpp"
#include <cstdint>
#include <iostream>

BinarySearch::BinaryArray::BinaryArray(): owns_data{true}{
    m_data = new uint32_t[ARRAY_SIZE];
    for(uint8_t i=0; i<ARRAY_SIZE; i++){
        m_data[i] = (i+1)*2;
    }
}
BinarySearch::BinaryArray::BinaryArray(uint32_t*p=nullptr): m_data{p}, owns_data{false}{
}
BinarySearch::BinaryArray::~BinaryArray(){
    if(owns_data && m_data != nullptr){
        delete[] m_data;
    }
}