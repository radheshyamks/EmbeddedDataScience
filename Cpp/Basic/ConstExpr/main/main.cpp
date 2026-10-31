#include <iostream>
#include "constExpr.hpp"

int main(int argc, char* argv[], char** env) {
    constexpr uint16_t radius = 5;
    uint32_t area = Area(radius);
    std::cout << "Area of circle with radius " << radius << " is: " << area << std::endl;
    return 0;
}