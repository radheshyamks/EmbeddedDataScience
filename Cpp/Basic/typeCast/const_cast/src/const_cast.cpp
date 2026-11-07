#include <iostream>
#include "const_cast.hpp"

namespace ConstCast{
    constCast::constCast(uint32_t val): value(val), ptr(&value){
        std::cout << "constCast object created with value: " << value << std::endl;
    }
    void constCast::display(void) const{
        std::cout << "*ptr: " << *ptr << std::endl;
        std::cout<< "value: " << value << std::endl;
    }
    void constCast::modifyValue(uint32_t newVal){
        uint32_t* modifiablePtr = const_cast<uint32_t*>(ptr);
        *modifiablePtr = newVal;
        std::cout << "Value modified to: " << *modifiablePtr << std::endl;
    }
}