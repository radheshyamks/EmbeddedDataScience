#include "allTypeConstructor.hpp"
#include <cstring>
// default constructor
AllTypeConstructor::AllConstructorType::AllConstructorType(){
    m_ptr = new char[15];
    m_data = new char[15];
    strncpy(m_data, "Default String", 14);
    strncpy(m_ptr, "Default String", 14);
    m_data[15] = '\0';
    m_ptr[15] = '\0';
}

// destructor
AllTypeConstructor::AllConstructorType::~AllConstructorType(){
    if(m_data != nullptr){
        delete[] m_data;
    }
    if(m_ptr != nullptr){
        delete[] m_ptr;
    }
}