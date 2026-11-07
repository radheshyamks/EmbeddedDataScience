/**
 * @file dynamic.hpp
 * @brief This file contains the definition of the dynamic_cast operator in C++.
 * @author Radheshyam
 * @date 01-Nov-2026
 */
#ifndef _DYNAMIC_CAST_HPP_
#define _DYNAMIC_CAST_HPP_
#include <iostream>
#if defined(_TYPES_HPP_)
#include "types.hpp"
#endif /* _TYPES_HPP_*/
namespace DynamicCast{
    class dynamicCast{
        private:
            uint16_t m_value;
        public:
            /* default constructor*/
            dynamicCast()=default;
            /* parameterized constructor */
            dynamicCast(uint16_t value);
            /* copy constructor */
            dynamicCast(const dynamicCast& other);
            /* move constructor */
            dynamicCast(dynamicCast&& other) noexcept;
            /* copy assignment operator */
            dynamicCast& operator=(const dynamicCast& other);
            /* Move assugnment operator */
            dynamicCast& operator=(dynamicCast&& other)noexcept;
            /* destructor */
            virtual ~dynamicCast();
            /* member function to get the value */
            uint16_t getValue(void)const;
            /* member function to set the value */
            void setValue(uint16_t value);
    };
    class DynA: public dynamicCast{
        // private:
        //     uint16_t a_value;
        public:
            DynA()=default;
            DynA(uint16_t value);
            ~DynA();
            uint16_t getValue(void)const;
            void setValue(uint16_t value);
    };
    class DynB: public dynamicCast{
        // private:
        //     uint16_t b_value;
        public:
            DynB()=default;
            DynB(uint16_t value);
            ~DynB();
            uint16_t getValue(void)const;
            void setValue(uint16_t value);
    };
}
#endif /** _DYNAMIC_CAST_HPP_ */