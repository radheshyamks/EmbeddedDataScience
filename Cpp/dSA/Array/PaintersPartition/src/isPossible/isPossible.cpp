/* 
    File Name: isPossible.cpp
 */

#include "painterPartition.hpp"

namespace BoardAllocator{
    bool painterpartition::isPossible(uint32_t maxArea){
        uint32_t painter=1;
        uint32_t BoardAreaSum = 0;
        for(uint32_t area: paintArea){
            if((BoardAreaSum+area)<=maxArea){
                BoardAreaSum+=area;
            }else{
                painter++;
                if(painter>painters || area>maxArea){
                    return false;
                }
                BoardAreaSum = area;
            }
        }
        return true;
    }
}