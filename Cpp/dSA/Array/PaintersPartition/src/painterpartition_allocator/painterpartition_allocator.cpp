/* 
    File Name: painterpartition_allocator.cpp
 */

#include "painterPartition.hpp"
#include <numeric>
#include <algorithm>
#include <iostream>
using namespace std;
namespace BoardAllocator{
    // this function will find minimum time
    int32_t painterpartition::painterpartition_allocator(void){
        // max_element will find the highest element
        uint32_t low = *max_element(paintArea.begin(), paintArea.end());
        //  accumulate function will find sum of all elements
        uint32_t high = accumulate(paintArea.begin(), paintArea.end(), 0);
        uint32_t result = high;
        // std::cout<<"low: "<<low<<"\n";
        // std::cout<<"high: "<<high<<"\n";
        // std::cout<<"mid: "<<mid<<"\n";
        while(low<=high){
            uint32_t mid = low + (high-low)/2;
            if(isPossible(mid)){
                result = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return result;
    }
}