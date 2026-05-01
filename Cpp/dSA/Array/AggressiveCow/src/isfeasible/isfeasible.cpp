/* 
   File Name: isfeasible.cpp
 */

#include "AggressiveCow.hpp"
#include <cstdint>
namespace AggressiveCows{
    bool CowStallAllocation::isfeasible(uint32_t StallmaxGap){
        uint32_t CowsCount=1;
        uint32_t lastPos = stalls[0];
        for(uint32_t stall: stalls){
            if(stall-lastPos >= StallmaxGap){
                CowsCount++;
                if(CowsCount==totalCows){
                    return true;
                }
                lastPos = stall;
            }
        }
        return false;
    }
}