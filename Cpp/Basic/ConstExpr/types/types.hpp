#if defined(_TYPES_HPP_)
#define _TYPES_HPP_

typedef unsigned short int uint16_t;
typedef short int int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;
typedef unsigned long long int uint64_t;
typedef long long int int64_t;
typedef unsigned char uint8_t;
typedef char int8_t;
typedef float float32_t;
typedef double float64_t;
typedef long double float128_t;
typedef bool bool_t;
typedef void void_t;
#if defined(_FPTR_T_)
typedef void(*func_ptr_t)(void);
#endif /* _FPTR_T_ */

#endif /* _TYPE_HPP_ */