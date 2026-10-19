/**
 * @file tmphdr.hpp
 * @brief This is a header file for a template function that takes two parameters of different types and prints them to the console. It also includes a specialization that deletes the function if both parameters are not arithmetic types.
 * @Author : Radheshyam
 * @Date : 17-Oct-2026
 */
#ifndef __TMPHDR_HPP__
#define __TMPHDR_HPP__
#include <iostream>
#include <type_traits>
// extern int g_i;
// template <typename T1, typename T2> void funTemp(T1 a, T2 b);
// template <typename T1, typename T2, std::enable_if<!std::is_arithmetic<T1>::value && !std::is_arithmetic<T2>::value, int>::type = 0> void funTemp(T1, T2);
// template <typename T1, typename T2, 
//         typename std::enable_if<std::is_arithmetic<T1>::value && std::is_arithmetic<T2>::value, int>::type = 0> 
// void funTemp(T1, T2);
// template <typename T1, typename T2, 
//           typename std::enable_if_t<std::is_arithmetic<T1>::value && std::is_arithmetic<T2>::value, int> = 0>
// void funTemp(T1, T2);

// template <typename T1, typename T2, 
//         typename std::enable_if<!std::is_arithmetic<T1>::value && !std::is_arithmetic<T2>::value, int>::type = 0> 
// void funTemp(T1, T2);
template <typename T> T Arith_Template(T a, T b);
#endif /*__TMPHDR_HPP__*/