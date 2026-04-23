#include "allTypeConstructor.hpp"
#include <cstring>


AllTypeConstructor::AllConstructorType::AllConstructorType(AllConstructorType& other){
    if(this != &other){
        if(m_data != nullptr && other.m_data != nullptr){
            strncpy(m_data, other.m_data, 15);
        }
    }
   
}