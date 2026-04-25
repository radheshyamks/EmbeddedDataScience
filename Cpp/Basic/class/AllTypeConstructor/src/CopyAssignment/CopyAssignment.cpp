#include "allTypeConstructor.hpp"
#include <cstring>


AllTypeConstructor::AllConstructorType& AllTypeConstructor::AllConstructorType::operator=(const AllConstructorType& other){
    if(this != &other){
        // deallocating memory
        delete[] m_data;
        delete[] m_ptr;
        // Allocating memory  
        m_data = new char[CHAR_ARRAY_SIZE];
        m_ptr = new char[CHAR_ARRAY_SIZE];
        
        if(other.m_data != nullptr){ 
            strncpy(m_data, other.m_data, FULL_CHAR_ARRAY_SIZE-1);
            m_data[FULL_CHAR_ARRAY_SIZE] = '\0'; 
        }else{
            m_data[FULL_CHAR_ARRAY_SIZE] = '\0'; 
        }
        if(other.m_ptr){            
            strncpy(m_ptr, other.m_ptr, FULL_CHAR_ARRAY_SIZE-1);
            m_ptr[FULL_CHAR_ARRAY_SIZE] = '\0';
        }else{
            m_ptr[FULL_CHAR_ARRAY_SIZE] = '\0';
        }  
    }
    return *this;
}