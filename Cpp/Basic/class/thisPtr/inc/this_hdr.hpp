/* 
* file name: this_hdr.hpp
* Description: this file is use to convert this pointer to uint8_t pointer and access the memory of the class object
*
*/
#include "type.h"
#include <stdint.h>
#if !defined(__THIS_HDR__)
#define __THIS_HDR__
// extern "C" void convert_thisPtr_to_uint8_t_ptr(uint8_t* err_code, size_t length);
#if defined(__cplusplus)
extern "C++"{
#endif
namespace ThisPtr{
    class cThisPtr{
        public:
                cThisPtr();
                ~cThisPtr();
                void printThis(void)const;
                size_t getSize(void)const;
                uint32_t getMem1(void)const;
                void call_thisPtr(size_t length);
        private:
            uint32_t mem1;
            //uint8_t mem2;
    };
}

#if defined(__cplusplus)
}
#endif /**/
#endif /*__THIS_HDR__*/