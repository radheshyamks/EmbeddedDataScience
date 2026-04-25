#include "allTypeConstructor.hpp"
#include <cstring>
#include <iostream>

using std::cout;
// parameterized constructor
AllTypeConstructor::AllConstructorType::AllConstructorType(const char* data, const char* ptr){
    m_ptr = new char[CHAR_ARRAY_SIZE];
    m_data = new char[CHAR_ARRAY_SIZE];
    strncpy(m_data, data, FULL_CHAR_ARRAY_SIZE);
    strncpy(m_ptr, ptr, FULL_CHAR_ARRAY_SIZE);
    m_data[FULL_CHAR_ARRAY_SIZE] = '\0';
    m_ptr[FULL_CHAR_ARRAY_SIZE] = '\0';
    std::cout<<"parameterized constructor\n";
}

void AllTypeConstructor::AllConstructorType::printArray(void){
    std::cout<<m_data<<" "<<m_ptr<<"\n";
    // std::cout<<m_ptr<<"\n";
}