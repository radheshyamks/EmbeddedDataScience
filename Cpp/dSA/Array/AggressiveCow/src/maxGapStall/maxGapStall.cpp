/* 
    File Name: maxGapStall.cpp
 */
#include "AggressiveCow.hpp"
#include <cstdint>
#include <algorithm>
#include <numeric>
namespace AggressiveCows{
    int32_t CowStallAllocation::maxGapStall(void){
        // uint32_t low = *max_element(stalls.begin(), stalls.end());
        // std::cout<<"Hello\n";
        sort(stalls.begin(), stalls.end());
        // for(std::vector<uint32_t>::iterator it = stalls.begin(); it!=stalls.end(); it++){
        //     std::cout<<*it<<" ";
        //     std::cout<<"Hello\n";
        // }
        // std::cout<<"\n";
        uint32_t low = stalls.front();
        uint32_t high = stalls.back()-stalls.front();
        int32_t result = -1;
        while(low<=high){
            uint32_t mid = low + (high-low)/2;
            if(isfeasible(mid)){
                result = mid;
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return result;
    }
}