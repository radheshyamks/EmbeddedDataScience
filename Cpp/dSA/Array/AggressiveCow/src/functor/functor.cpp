/* 
    File Name: functor.cpp
 */
#include "AggressiveCow.hpp"
#include <vector>
#include <cstdint>
namespace AggressiveCows{
    void CowStallAllocation::operator()(std::vector<uint32_t> stall, uint32_t cows){
        stalls = stall;
        totalCows = cows;
    }
}