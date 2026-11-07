#include <iostream>
#include "dynamic.hpp"
#if defined(_TYPES_HPP_)
#include "types.hpp"
#endif /* _TYPES_HPP_*/

int main(int argc, char* argv[], char** env){
    DynamicCast::dynamicCast*Base = new DynamicCast::DynA(10);
    DynamicCast::DynA* DerivedA = new DynamicCast::DynA(10);
    /* this typecast will return nullptr decause of downcast*/
    DynamicCast::DynB* DerivedB = dynamic_cast<DynamicCast::DynB*>(Base);
    if(DerivedB!=nullptr){
        std::cout<<"DerivedB value: "<<DerivedB->getValue()<<std::endl;
    }else{
        std::cout<<"DerivedB is nullptr"<<std::endl;
    }
    return EXIT_SUCCESS;
}