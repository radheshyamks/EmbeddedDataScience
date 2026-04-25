#include "allTypeConstructor.hpp"
#include <cstring>

// Copy Constructor
AllTypeConstructor::AllConstructorType::AllConstructorType(AllConstructorType& other){
    m_data = new char[CHAR_ARRAY_SIZE];
    m_ptr = new char[CHAR_ARRAY_SIZE];
    if(other.m_data!=nullptr){
        strncpy(m_data, other.m_data, FULL_CHAR_ARRAY_SIZE);
        m_data[FULL_CHAR_ARRAY_SIZE] = '\0';
    }else{
        m_data[0]='\0';
    }
    if(other.m_ptr!=nullptr){
        strncpy(m_data, other.m_ptr, FULL_CHAR_ARRAY_SIZE);
        m_ptr[FULL_CHAR_ARRAY_SIZE] = '\0';
    }else{
        m_ptr[0]='\0';
    }
}