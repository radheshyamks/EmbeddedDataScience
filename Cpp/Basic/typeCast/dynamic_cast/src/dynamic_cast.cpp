/**
 * @file dynamic_cast.cpp
 * @brief This file contains the implementation of the dynamic_cast operator in C++.
 * @author Radheshyam
 * @date 07-Nov-2026
 */
#include <iostream>
#include "dynamic.hpp"
#if defined(_TYPES_HPP_)
#include "types.hpp"
#endif /* _TYPES_HPP_*/
namespace DynamicCast{
    /* parameterized constructor */
    dynamicCast::dynamicCast(uint16_t value):m_value{value}{
        std::cout<<"Parameterized constructor called"<<std::endl;
    }
    /* copy constructor */
    dynamicCast::dynamicCast(const dynamicCast& other): m_value{other.m_value}{
        std::cout<<"Copy constructor called"<<std::endl;
    }
    /* move constructor*/
    dynamicCast::dynamicCast(dynamicCast&& other)noexcept: m_value(other.m_value){
        std::cout<<"Move constructor called"<<std::endl;
        other.m_value=0;
    }
    /* copy assignment operator */
    dynamicCast& dynamicCast::operator=(const dynamicCast& other){
        if(this!=&other){
            this->m_value=other.m_value;
        }
        return *this;
    }
    /* move assignment operator*/
    dynamicCast& dynamicCast::operator=(dynamicCast&& other)noexcept{
        if(this!=&other){
            m_value=other.m_value;
            other.m_value=0;
        }
        return *this;
    }
    dynamicCast::~dynamicCast(){
        std::cout<<"Destructor called"<<std::endl;
    }
    uint16_t dynamicCast::getValue(void)const{
        return this->m_value;
    }
    void dynamicCast::setValue(uint16_t value){
        this->m_value=value;
    }
    DynA::DynA(uint16_t value):dynamicCast(value){
        std::cout<<"DynA parameterized constructor called"<<std::endl;
    }
    DynA::~DynA(){
        std::cout<<"DynA destructor called"<<std::endl;
    }
    uint16_t DynA::getValue(void)const{
        return dynamicCast::getValue();
    }
    void DynA::setValue(uint16_t value){
        dynamicCast::setValue(value);
    }
    DynB::DynB(uint16_t value):dynamicCast(value){
        std::cout<<"DynB parameterized constructor called"<<std::endl;
    }
    DynB::~DynB(){
        std::cout<<"DynB destructor called"<<std::endl;
    }
    uint16_t DynB::getValue(void)const{
        return dynamicCast::getValue();
    }
    void DynB::setValue(uint16_t value){
        dynamicCast::setValue(value);
    }
    extern dynamicCast dynamicCast_p;
    extern DynA DynA_p;
    extern DynB DynB_p; 
}