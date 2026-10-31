/**
 * @file src.cpp
 * @brief defined color class functions
 */
#include "enumClass.hpp"
#include <iostream>

namespace ColorEnum{
    Color::Color(): C{Coulor1::RED}, S{Coulor2::BLACK}{}
    Color::~Color(){
        std::cout<<"Destructor\n";
    }
    void Color::color_match(void)const{
        if(static_cast<uint16_t>(C)==static_cast<uint16_t>(S)){
            std::cout<<"Both having same color\n";
        }else{
            std::cout<<"differenct color\n";
        }
    }
    void Color::print(void)const{
        std::cout<<"C: "<< static_cast<uint16_t>(C) <<"\n";
        std::cout<<"S: "<< static_cast<uint16_t>(S) <<"\n";
    }
    void Color::update_color1(Coulor1 c){
        this->C=c;
    }
    void Color::update_color2(Coulor2 s){
        this->S = s;
    }
}