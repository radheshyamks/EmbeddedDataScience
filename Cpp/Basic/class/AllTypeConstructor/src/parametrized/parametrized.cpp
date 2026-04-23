#include "allTypeConstructor.hpp"
#include <cstring>
#include <iostream>
// default constructor
AllTypeConstructor::AllConstructorType::AllConstructorType(const char* data, const char* ptr){
    m_ptr = new char[15];
    m_data = new char[15];
    strncpy(m_data, data, 14);
    strncpy(m_ptr, ptr, 14);
    m_data[15] = '\0';
    m_ptr[15] = '\0';
}

void AllTypeConstructor::AllConstructorType::printArray(void){
    std::cout<<m_data<<" "<<m_ptr<<"\n";
    // std::cout<<m_ptr<<"\n";
}