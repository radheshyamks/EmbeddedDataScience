/* 
  File Name: BookAllocator.cpp
 */
#include <numeric>
#include "BookAllocation.hpp"
namespace Allocation{
  uint32_t BookAllocator::allocate(void){
    uint32_t start = 0;
    // uint32_t end=0;
    uint32_t end = std::accumulate(books.begin(), books.end(), 0);// total page sum
    int32_t result=-1;
    // std::cout<<end<<"\n";
    // uint32_t mid = totalPagesSum/2;
    while(start<=end){
      uint32_t mid = start + (end-start)/2;
      if(isPossible(mid)){
        result = mid;
        end = mid-1;
      }else{
        start = mid+1;
      }
    }
    return result;
  }
}