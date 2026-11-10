#include <iostream>
#include "funPtr.hpp"
#include "types.hpp"
namespace FunPtr{
    funPtr::funPtr(uint32_t (*fptr)(uint32_t)):funcPtr(fptr){
        std::cout<<"funPtr constructor called"<<std::endl;
    }
    void funPtr::callFunc(uint32_t x){
        std::cout<<"funPtr callFunc called"<<std::endl;
        m_result = funcPtr(x);
        std::cout<<"Result: "<<m_result<<std::endl;
    }
    funPtr::~funPtr(){
        std::cout<<"funPtr destructor called"<<std::endl;
    }
    uint32_t addOne(uint32_t x) {
        return x + 1;
    }
    uint32_t addTwo(uint32_t x){
        return x + 2;
    }
    uint32_t (*funPtr::getFuncPtr())(uint32_t x){
        return &addOne;
    }
    uint32_t (*funPtr::OptFuncPtr(bool condition))(uint32_t x){
        return (condition==true)?&addOne:&addTwo;
    }
    uint8_t funPtr::getSizeof(void)const{
        return sizeof(FuncType);
    }
    extern funPtr funptr;
}