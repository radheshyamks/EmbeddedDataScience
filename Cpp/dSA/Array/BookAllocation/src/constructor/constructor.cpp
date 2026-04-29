/* 
    File Name: constructor.cpp
 */

#include <cstdint>
#include "BookAllocation.hpp"

Allocation::BookAllocator::BookAllocator(){
    books = {3,10,15,20};
    // default students
    students = 2;
}
Allocation::BookAllocator::BookAllocator(std::vector<uint32_t> v, uint32_t s){
    books = v;
    students = s;
}

Allocation::BookAllocator::~BookAllocator(){
    std::cout<<"Destructor\n";
}
