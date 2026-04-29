/* 
    File Name: bookAllocatorFunctor.cpp
 */

#include <cstdint>
#include "BookAllocation.hpp"

// functor in cpp
void Allocation::BookAllocator::operator()(std::vector<uint32_t> v, uint32_t s){
    this->books = v;
    this->students = s;
}