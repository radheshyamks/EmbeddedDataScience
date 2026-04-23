/* 
    File Name: allTypeConstructor.hpp
 */
#ifndef __ALLTYPE_CONSTRUCTOR__
#define __ALLTYPE_CONSTRUCTOR__
#include <cstdint>
#include <iostream>
namespace AllTypeConstructor{
    constexpr uint8_t ARRAY_SIZE=10;
    class AllConstructorType{
        private:
            char* m_data;
            char* m_ptr;
        public:
            // default Constructor
            AllConstructorType();
            //paramemeterized Constructor
            AllConstructorType(const char* data,const char* ptr);
            // Copy Constructor
            AllConstructorType(AllConstructorType& other);
            // Move Assignment Constructor
            AllConstructorType(AllConstructorType&& other);
            //Copy Assignment operator
            AllConstructorType& operator=(const AllConstructorType& other);
            //Move Assignment Operator
            AllConstructorType& operator=(AllConstructorType&& other);
            // destructor
            ~AllConstructorType();
            // print array
            void printArray(void);
    };
    extern AllConstructorType AllConstructorType_s;
}
#endif //__ALLTYPE_CONSTRUCTOR__