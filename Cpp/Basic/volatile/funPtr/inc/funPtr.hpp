#include <iostream>
#include "types.hpp"
#ifndef FUNPTR_HPP
#define FUNPTR_HPP
namespace FunPtr{
    enum class FuncType: uint8_t{
        ADD_ONE,
        ADD_TWO,
    };
    typedef uint32_t(*funcPtr_t)(uint32_t);
    uint32_t addOne(uint32_t x);
    uint32_t addTwo(uint32_t x);
    class funPtr{
        private:
            uint32_t m_result;
            uint32_t (*funcPtr)(uint32_t);
        public:
            funPtr(uint32_t (*ptr)(uint32_t));
            uint32_t (*getFuncPtr())(uint32_t);
            uint32_t (*OptFuncPtr(bool))(uint32_t);
            void callFunc(uint32_t);
            uint8_t getSizeof(void)const;
            /* destructor */
            ~funPtr();
    };
}
#endif /* FUNPTR_HPP */