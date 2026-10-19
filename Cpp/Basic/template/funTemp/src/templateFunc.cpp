/**
 * @file templateFunc.cpp
 * @brief This is a source file that implements a template function that takes two parameters of different types and prints them to the console. It also includes a specialization that deletes the function if both parameters are not arithmetic types.
 * @Author : Radheshyam
 * @Date : 17-Oct-2026
 */
#include <iostream>
#include "tmphdr.hpp"
#include "type.hpp"
#include <type_traits>
// Explicit instantiations for the arithmetic combinations you want to support
// template void funTemp<int, int>(int, int);
// template void funTemp<double, double>(double, double);
// template void funTemp<int, double>(int, double);

// template <typename T1, typename T2, typename std::enable_if_t<std::is_arithmetic<T1>::value && std::is_arithmetic<T2>::value, int>::type> 
// void funTemp(T1 a, T2 b){
//     std::cout<<"Value of a: "<<a<<std::endl;
//     std::cout<<"Value of b: "<<b<<std::endl;
// }
template <typename T>
T Arith_Template(T a, T b) {
    std::cout << "Value of a: " << a << std::endl;
    std::cout << "Value of b: " << b << std::endl;
    return a + b; // Example operation
}
template float Arith_Template(float a, float b);
template int_t Arith_Template(int_t a, int_t b);
template ushort_t Arith_Template(ushort_t a, ushort_t b);
template double Arith_Template(double a, double b);

// template <typename T1, typename T2, 
//           typename std::enable_if<!std::is_arithmetic<T1>::value && !std::is_arithmetic<T2>::value, int>::type> 
// void funTemp(T1 a, T2 b) {
//     std::cout << "Non-arithmetic types accepted!\n";
// }
// template <typename T1, typename T2, 
//           std::enable_if_t<!std::is_arithmetic<T1>::value && !std::is_arithmetic<T2>::value, int>> 
// void funTemp(T1 a, T2 b) {
//     // Implementation here
// }