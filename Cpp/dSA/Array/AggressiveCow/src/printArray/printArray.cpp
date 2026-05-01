/* 
  File Name: printArray.cpp
 */
#include "AggressiveCow.hpp"
#include <cstdint>
namespace AggressiveCows{
    void CowStallAllocation::printArray(void){
        for(uint32_t stall: stalls){
            std::cout<<stall<<" ";
        }
        std::cout<<"\n";
    }
}

