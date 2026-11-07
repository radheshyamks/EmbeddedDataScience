#include <iostream>
#include "dynamic.hpp"
#if defined(_TYPES_HPP_)
#include "types.hpp"
#endif /* _TYPES_HPP_*/

int main(int argc, char* argv[], char** env){
    DynamicCast::dynamicCast*Base1 = new DynamicCast::DynA(10);
    DynamicCast::dynamicCast*Base2 = new DynamicCast::DynB(20);
    DynamicCast::DynA* DerivedA = new DynamicCast::DynA(10);
    DynamicCast::DynB* DerivedB = new DynamicCast::DynB(20);
    /* this typecast will return nullptr decause of downcast*/
    DynamicCast::DynB* DerivedB1 = dynamic_cast<DynamicCast::DynB*>(Base1);
    if(DerivedB1!=nullptr){
        std::cout<<"DerivedB1 value: "<<DerivedB1->getValue()<<std::endl;
    }else{
        std::cout<<"DerivedB1 is nullptr"<<std::endl;
    }
    /* this typecast will return nullptr decause of downcast*/
    DynamicCast::DynA* DerivedA1 = dynamic_cast<DynamicCast::DynA*>(Base2);
    if(DerivedA1!=nullptr){
        std::cout<<"DerivedA1 value: "<<DerivedA1->getValue()<<std::endl;
    }else{
        std::cout<<"DerivedA1 is nullptr"<<std::endl;
    }
    return EXIT_SUCCESS;
}