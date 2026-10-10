/* 
* file name: this_hdr.hpp
* Description: this file is use to convert this pointer to uint8_t pointer and access the memory of the class object
*
*/
#if !defined(__THIS_HDR__)
#define __THIS_HDR__
#ifdef __cplusplus
extern "C"{
#endif
#include <stdint.h>
extern void convert_thisPtr_to_uint8_t_ptr(uint8_t* err_code, size_t length);
#ifdef __cplusplus
}
#endif


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