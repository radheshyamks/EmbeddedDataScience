#include "allTypeConstructor.hpp"
#include <cstring>


AllTypeConstructor::AllConstructorType::AllConstructorType(AllConstructorType&& other){
    if(this != &other){
        if(other.m_data != nullptr){
            if(m_data != nullptr){
                strncpy(m_data, other.m_data, 15);
            }else{
                m_data = new char[15];
                strncpy(m_data, other.m_data, 15);
            }
            delete[] other.m_data;
       }
    }
   
}