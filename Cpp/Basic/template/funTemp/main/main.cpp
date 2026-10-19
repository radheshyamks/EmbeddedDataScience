#include <iostream>
#include "tmphdr.hpp"
#include "type.hpp"

int main() {
    float f1 = 1.5f, f2 = 2.5f;
    int_t i1 = 10, i2 = 20;
    ushort_t us1 = 100, us2 = 200;
    double d1 = 3.14, d2 = 2.71;

    std::cout << "Calling Arith_Template with float:\n";
    std::cout<<"Float: "<<Arith_Template<float>(f1, f2)<<"\n";

    std::cout << "\nCalling Arith_Template with int:\n";
    std::cout<<"int_t: "<<Arith_Template<int_t>(i1, i2)<<"\n";

    std::cout << "\nCalling Arith_Template with ushort_t:\n";
    std::cout<<"ushort_t: "<<Arith_Template<ushort_t>(us1, us2)<<"\n";

    std::cout << "\nCalling Arith_Template with double:\n";
    std::cout<<"double: "<<Arith_Template<double>(d1, d2)<<"\n";

    return 0;
}