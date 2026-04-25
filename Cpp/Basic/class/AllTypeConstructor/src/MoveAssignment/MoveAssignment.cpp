#include "allTypeConstructor.hpp"
#include <cstring>


AllTypeConstructor::AllConstructorType& AllTypeConstructor::AllConstructorType::operator=(AllConstructorType&& other){
    if(this != &other){
        delete[] m_data;
        delete[] m_ptr;
        m_data = other.m_data;
        m_ptr = other.m_ptr;     
        other.m_data=nullptr;
        other.m_ptr=nullptr;
    }
    return *this;
}