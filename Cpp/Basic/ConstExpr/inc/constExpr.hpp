/**
 * @file constExpr.hpp
 * @brief This file contains the declaration of the Circle function and the definition of the PI constant.
 * @author Radheshyam
 * @date 27-oct-2026
 */
#if !defined(_TYPES_HPP_)
#define _TYPES_HPP_
#include "types.hpp"
#endif /* _TYPES_HPP_ */

#if !defined(_CONSTEXPR_HPP_)
#define _CONSTEXPR_HPP_
#define PI 3.14159
extern uint16_t Area(uint16_t _r);
constexpr uint16_t Circle(uint16_t _r) {
    return PI * _r * _r;
}
#endif /* _CONSTEXPR_HPP_ */