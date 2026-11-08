#include <iostream>

#ifndef FUNPTR_HPP
#define FUNPTR_HPP
namespace FunPtr{
    // typedef uint32_t(*funcPtr_t)(uint32_t);
    uint32_t addOne(uint32_t x);
    class funPtr{
        private:
            uint32_t (*funcPtr)(uint32_t);
        public:
            funPtr(uint32_t (*ptr)(uint32_t));
            void callFunc(uint32_t);
            /* destructor */
            ~funPtr();
    };
}
#endif /* FUNPTR_HPP */