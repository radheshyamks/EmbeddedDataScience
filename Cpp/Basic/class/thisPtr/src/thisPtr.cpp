#include <iostream>
#include <cstdint>
#include "this_hdr.hpp"
ThisPtr::cThisPtr::cThisPtr() {
    std::cout << "Constructor called" << std::endl;
    this->mem1 = 0xDEADBEEF;
}
ThisPtr::cThisPtr::~cThisPtr(){
    std::cout << "Destructor called" << std::endl;
}
void ThisPtr::cThisPtr::printThis(void)const{
    // printf("this pointer: %x\n", this->mem1);
    std::cout<<"this pointer:0x"<<std::hex<<std::uppercase<<reinterpret_cast<uintptr_t>(this)<<std::endl;
    std::cout<<"mem1 addr   :0x"<<std::hex<<std::uppercase<<reinterpret_cast<uintptr_t>(&(this->mem1))<<std::endl;
    std::cout<<"mem1        :0x"<<std::hex<<std::uppercase<<this->mem1<<std::endl;
}

void ThisPtr::cThisPtr::call_thisPtr(size_t length){
    convert_thisPtr_to_uint8_t_ptr(const_cast<uint8_t*>(reinterpret_cast<const uint8_t*>(this)), length);
}
size_t ThisPtr::cThisPtr::getSize(void)const{
    return sizeof(this->mem1);
}