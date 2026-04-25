#include "allTypeConstructor.hpp"
#include <cstring>
#include <iostream>

using std::cout;
// default constructor
AllTypeConstructor::AllConstructorType::AllConstructorType(){
    m_ptr = new char[CHAR_ARRAY_SIZE];
    m_data = new char[CHAR_ARRAY_SIZE];
    strncpy(m_data, "Default String", FULL_CHAR_ARRAY_SIZE);
    strncpy(m_ptr, "Default String", FULL_CHAR_ARRAY_SIZE);
    m_data[FULL_CHAR_ARRAY_SIZE] = '\0';
    m_ptr[FULL_CHAR_ARRAY_SIZE] = '\0';
    std::cout<<"default Constructor\n";
}

// destructor
AllTypeConstructor::AllConstructorType::~AllConstructorType(){
    if(m_data != nullptr){
        delete[] m_data;
    }
    if(m_ptr != nullptr){
        delete[] m_ptr;
    }
    std::cout<<"Destructor\n";
}