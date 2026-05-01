/* 
   File Name: constructor.cpp
 */
#include "AggressiveCow.hpp"
#include <cstdint>

namespace AggressiveCows{
    CowStallAllocation::CowStallAllocation(){
        stalls = {1, 2, 8, 4, 9};
        totalCows = 3;
    }
    CowStallAllocation::CowStallAllocation(std::vector<uint32_t>stall, uint32_t cows): stalls{stall},totalCows{cows}{}
}