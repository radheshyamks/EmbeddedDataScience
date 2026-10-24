#if !defined(__TYPES_HPP__)
#define __TYPES_HPP__
#ifdef __ARITHMETIC__
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef signed short int16_t;
typedef signed int int32_t;
typedef signed long long int64_t;
typedef float float32_t;
typedef double float64_t;
typedef long double float128_t;
#endif /* __Arithmetic__ */
typedef bool bool_t;
typedef enum{
    FALSE = 0,
    TRUE = 1
} bool_enum_t;
typedef enum{
    SUCCESS = 0,
    FAILURE = 1
} status_t;
typedef enum{
    LOW = 0,
    HIGH = 1
} level_t;
typedef enum{
    OFF = 0,
    ON = 1
} state_t;
typedef enum{
    DISABLE = 0,
    ENABLE = 1
} enable_t;
typedef enum{
    IDLE = 0,
    BUSY = 1
} busy_t;
typedef enum{
    ERROR = -1,
    OK = 0
} error_t;
typedef enum{
    NO = 0,
    YES = 1
} yes_no_t;
typedef enum{
    NONE = 0,
    SOME = 1
} option_t;
typedef enum{
    LOW_PRIORITY = 0,
    MEDIUM_PRIORITY = 1,
    HIGH_PRIORITY = 2
} priority_t;
typedef enum{
    READ = 0,
    WRITE = 1
} rw_t;
typedef enum{
    INPUT = 0,
    OUTPUT = 1
} io_t;
typedef enum{
    LITTLE_ENDIAN = 0,
    BIG_ENDIAN = 1
} endian_t;
typedef enum{
    NO_ERROR = 0,
    ERROR_OCCURRED = 1
} error_hndlr_t;
typedef void(*VoidFuncPtr)();
#endif /*__TYPE_HPP__*/