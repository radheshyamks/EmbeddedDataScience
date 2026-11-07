#if defined( _TYPES_HPP_)
#define _TYPES_HPP_
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long uint64_t;
typedef signed char int8_t;
typedef signed short int16_t;
typedef signed int int32_t;
typedef signed long int64_t;
typedef float float32_t;
typedef double float64_t;
typedef long double float128_t;
#ifndef __FUNC_PTR__
#define __FUNC_PTR__
typedef void (*ptr)(void);
#endif /**__FUNC_PTR__ */
#endif /*_TYPES_HPP_*/