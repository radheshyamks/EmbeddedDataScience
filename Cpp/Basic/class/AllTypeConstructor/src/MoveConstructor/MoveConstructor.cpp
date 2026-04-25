#include "allTypeConstructor.hpp"
#include <cstring>
#include <iostream>
using std::cout;
// Move Cosntructor
AllTypeConstructor::AllConstructorType::AllConstructorType(AllConstructorType&& other){
    m_data = other.m_data;
    m_ptr = other.m_ptr;
    other.m_data=nullptr;
    other.m_ptr=nullptr;
    cout<<"Move Constructor\n"; 
}