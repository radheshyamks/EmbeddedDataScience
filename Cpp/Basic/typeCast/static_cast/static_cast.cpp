#include <iostream>
#include "static_cast.hpp"
namespace StaticCast{
    staticCast::staticCast(uint32_t val):value(val),ptr(&value){
        std::cout<<"staticCast constructor called with value: "<<value<<std::endl;
    }
    void staticCast::display(void)const{
        std::cout<<"Value: "<<value<<std::endl;
        std::cout<<"Pointer: "<<*ptr<<std::endl;
    }
    void staticCast::ConvertToChar(void)const{
        uint8_t charValue = static_cast<uint8_t>(value);
        // for(uint8_t i=0; i<sizeof(value); i++){
        //     std::cout<<"Byte: "<<static_cast<int>(*(charPtr+i))<<std::endl;
        // }
        std::cout<<"Converted value to char: "<<charValue<<std::endl;
    }
    void staticCast::modifyValue(uint32_t newVal){
        value = newVal;
    }
    extern staticCast staticcast;
}