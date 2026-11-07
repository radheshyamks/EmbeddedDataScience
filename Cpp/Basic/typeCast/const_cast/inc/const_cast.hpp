/**
 * @file const_cast.hpp
 * @brief This file contains the definition of the constCast class, which demonstrates the use of const_cast in C++.
 * @author radheshyam
 * @date 07-Nov-2026
 */
#include <iostream>
#include "types.hpp"
#if !defined(CONST_CAST_HPP)
#define CONST_CAST_HPP
namespace ConstCast {
    class constCast{
        private:
            uint32_t value;
            const uint32_t* ptr;
        public:
            constCast() = default; /*default constructor*/ 
            constCast(uint32_t val);
            void display(void)const;
            void modifyValue(uint32_t newVal);
    };
    extern constCast constcast;
}
#endif /* CONST_CAST_HPP */