#include <iostream>
#include "templateClass.hpp"
#include "types.hpp"
template class TemplateClass::TmpClass<uint16_t>;
template class TemplateClass::TmpClass<uint32_t>;
template class TemplateClass::TmpClass<float32_t>;
template class TemplateClass::TmpClass<float64_t>;
template class TemplateClass::TmpClass<std::string>;
namespace TemplateClass{
    extern TmpClass<uint16_t> TmpClass_Int;
    extern TmpClass<float32_t> TmpClass_Float;
    extern TmpClass<std::string> TmpClass_String;
}
int main(int argc, char* argv[], char** env){
    TemplateClass::TmpClass<uint16_t> TmpClass_Int(10u);
    TemplateClass::TmpClass<float32_t> TmpClass_Float(3.14f);
    TemplateClass::TmpClass<float64_t> TmpClass_Double(10.01010);
    TemplateClass::TmpClass<std::string> TmpClass_String("Hello, World!");
    TmpClass_Int.set_value(100);
    TmpClass_Float.set_value(2.718f);
    TmpClass_String.set_value("Template Class Example");
    TmpClass_Double.set_value(20.2020);
    uint16_t int_value = TmpClass_Int.get_value();
    float32_t float_value = TmpClass_Float.get_value();
    std::string string_value = TmpClass_String.get_value();
    std::cout<<"Integer Value: "<<int_value<<std::endl;
    std::cout<<"Float Value: "<<float_value<<std::endl;
    std::cout<<"String Value: "<<string_value<<std::endl;
    std::cout<<"Double Value: "<<TmpClass_Double.get_value()<<std::endl;
    return EXIT_SUCCESS;
}