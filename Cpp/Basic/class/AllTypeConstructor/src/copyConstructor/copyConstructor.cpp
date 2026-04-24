#include "allTypeConstructor.hpp"
#include <cstring>

// Copy Constructor
AllTypeConstructor::AllConstructorType::AllConstructorType(AllConstructorType& other){
    if(this != &other){
        if(m_data != nullptr && other.m_data != nullptr){
            strncpy(m_data, other.m_data, 15);
        }
    }
   
}