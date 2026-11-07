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
    DynamicCast::DynA* DerivedA2 = dynamic_cast<DynamicCast::DynA*>(Base1);
    DynamicCast::DynB* DerivedB2 = dynamic_cast<DynamicCast::DynB*>(Base2);
    if(DerivedA2!=nullptr){
        std::cout<<"DerivedA2 value: "<<DerivedA2->getValue()<<std::endl;
    }else{
        std::cout<<"DerivedA2 is nullptr"<<std::endl;
    }
    if(DerivedB2!=nullptr){
        std::cout<<"DerivedB2 value: "<<DerivedB2->getValue()<<std::endl;
    }else{
        std::cout<<"DerivedB2 is nullptr"<<std::endl;
    }
    /* upcast */
    DynamicCast::dynamicCast* Base3 = dynamic_cast<DynamicCast::dynamicCast*>(DerivedA);
    DynamicCast::dynamicCast* Base4 = dynamic_cast<DynamicCast::dynamicCast*>(DerivedB);
    if(Base3!=nullptr){
        std::cout<<"Base3 value: "<<Base3->getValue()<<std::endl;
    }else{
        std::cout<<"Base3 is nullptr"<<std::endl;
    }
    if(Base4!=nullptr){
        std::cout<<"Base4 value: "<<Base4->getValue()<<std::endl;
    }else{
        std::cout<<"Base4 is nullptr"<<std::endl;
    }
    return EXIT_SUCCESS;
}