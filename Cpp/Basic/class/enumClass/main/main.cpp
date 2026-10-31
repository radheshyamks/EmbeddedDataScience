/**
 * @file main.cpp
 * @brief main function
 * @date 31-Oct-2026
 */
#include "enumClass.hpp"
#include <iostream>
namespace ColorEnum{
    Color Color_s;
}
int main(int argc, char* argv[], char** env){
    ColorEnum::Color_s.print();
    ColorEnum::Color_s.update_color1(ColorEnum::Coulor1::GREEN);
    ColorEnum::Color_s.update_color2(ColorEnum::Coulor2::CYAN);
    ColorEnum::Coulor1 c1= ColorEnum::Color_s.get_color1<ColorEnum::Coulor1>();
    ColorEnum::Coulor2 c2= ColorEnum::Color_s.get_color2<ColorEnum::Coulor2>();
    std::cout<<"c1: "<<static_cast<uint16_t>(c1)<<"\n";
    std::cout<<"c2: "<<static_cast<uint16_t>(c2)<<"\n";
    return EXIT_SUCCESS;
}