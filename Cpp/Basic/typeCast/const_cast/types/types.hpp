#if defined(__TYPES_HPP__)
typedef const int* const ConstIntPtr;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef long long int64_t;
typedef long int32_t;
typedef short int16_t;
typedef char int8_t;
typedef float float32_t;
typedef double float64_t;
typedef long double float128_t;
typedef void* voidPtr;
#if !defined(__FUNCT_PTR__)
#define __FUNCT_PTR__
typedef void (*FunctPtr)(void);
#endif /* __FUNCT_PTR__ */
#endif /* __TYPES_HPP__ */