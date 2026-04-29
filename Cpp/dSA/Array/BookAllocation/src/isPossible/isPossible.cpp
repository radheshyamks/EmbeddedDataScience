/* 
  File Name: isPossible.cpp
 */

#include "BookAllocation.hpp"

bool Allocation::BookAllocator::isPossible(uint32_t maxPages){
  uint32_t PageSum=0;
  uint32_t st = 1;
  for(uint32_t Bookpages: books){
    if(PageSum+Bookpages<=maxPages){
      PageSum += Bookpages;
    }else{
      st++;
      if(st>students || Bookpages > maxPages){
        return false;
      }
      PageSum = Bookpages;
    }
  }
  return true;
}