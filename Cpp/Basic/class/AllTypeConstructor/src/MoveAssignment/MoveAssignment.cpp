#include "allTypeConstructor.hpp"
#include <cstring>


AllTypeConstructor::AllConstructorType& AllTypeConstructor::AllConstructorType::operator=(AllConstructorType&& other){
    if(this != &other){
        // delete[] m_data;
        if(other.m_data != nullptr){
            if(this->m_data != nullptr){
                strncpy(m_data, other.m_data, 15);
                m_data[15] = '\0';
            }else{
                m_data = new char[15];
                strncpy(m_data, other.m_data, 15);
                m_data[15] = '\0';
            }        
            other.m_data=nullptr;
        }
    }
    return *this;
}