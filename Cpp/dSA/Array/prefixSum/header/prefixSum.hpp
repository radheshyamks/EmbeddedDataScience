/* 
    File Name: prefixSum.hpp
    Date: 23-Apr-2026
    Description: TBD
 */

#ifndef __PREFIXSUM__
#define __PREFIXSUM__

#include <cstdint>

namespace prefixSum{
    constexpr uint8_t ARRAY_SIZE=10;
    class prefixSum_Arr{
        private:
            uint32_t Arr[ARRAY_SIZE];
            uint32_t prefixSUM[ARRAY_SIZE];
        public:
            // default Constructor
            explicit prefixSum_Arr(void);
            explicit prefixSum_Arr(uint16_t, uint16_t)=delete;
            // deleted copy constructor
            explicit prefixSum_Arr(prefixSum_Arr&)=delete;
            //deleted MOVE constructor
            explicit prefixSum_Arr(prefixSum_Arr&&)=delete;
            // deleted copy assignment operator
            prefixSum_Arr& operator=(prefixSum_Arr&)=delete;
            //deleted move assignment operator
            prefixSum_Arr& operator=(prefixSum_Arr&&)=delete;
            ~prefixSum_Arr();
            void PreFixSUM(void);
            void printArray(void);
    };
    extern prefixSum_Arr prefixSum_Arr_s;
}

#endif
