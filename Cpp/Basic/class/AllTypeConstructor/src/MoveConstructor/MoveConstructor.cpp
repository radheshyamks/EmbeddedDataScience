#include "allTypeConstructor.hpp"
#include <cstring>

// Move Cosntructor
AllTypeConstructor::AllConstructorType::AllConstructorType(AllConstructorType&& other){
    if(this != &other){
        if(other.m_data != nullptr){
            if(m_data != nullptr){
                strncpy(m_data, other.m_data, CHAR_ARRAY_SIZE);
                m_data[15] = '\0';
            }else{
                m_data = new char[15];
                strncpy(m_data, other.m_data, 14);
                m_data[15] = '\0';
            }
            other.m_data=nullptr;
       }
    }
   
}