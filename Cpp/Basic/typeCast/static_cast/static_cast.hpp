#include <iostream>
#ifndef STATIC_CAST_HPP
#define STATIC_CAST_HPP
namespace StaticCast{
    class staticCast{
        private:
            uint32_t value;
            uint32_t* ptr;
        public:
            staticCast() = default; /*default constructor*/ 
            staticCast(uint32_t val);
            void display(void)const;
            void modifyValue(uint32_t newVal);
            void ConvertToChar(void)const;
    };
    extern staticCast staticcast;
}
#endif /* STATIC_CAST_HPP */