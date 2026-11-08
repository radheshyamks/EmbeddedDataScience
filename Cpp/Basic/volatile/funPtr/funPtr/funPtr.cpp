#include <iostream>
#include "funPtr.hpp"
namespace FunPtr{
    funPtr::funPtr(uint32_t (*fptr)(uint32_t)):funcPtr(fptr){
        std::cout<<"funPtr constructor called"<<std::endl;
    }
    void funPtr::callFunc(uint32_t x){
        std::cout<<"funPtr callFunc called"<<std::endl;
        uint32_t result = funcPtr(x);
        std::cout<<"Result: "<<result<<std::endl;
    }
    funPtr::~funPtr(){
        std::cout<<"funPtr destructor called"<<std::endl;
    }
    uint32_t addOne(uint32_t x) {
        return x + 1;
    }
    extern funPtr funptr;
}