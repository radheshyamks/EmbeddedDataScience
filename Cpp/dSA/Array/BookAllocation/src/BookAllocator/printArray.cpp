/* 
    File Name: printArray.cpp
 */
#include "BookAllocation.hpp"
#include <iostream>

void Allocation::BookAllocator::printArray(void){
    std::cout<<"books pages vector[] = ";
    for(std::vector<uint32_t>::iterator it=books.begin(); it!= books.end(); it++){
        std::cout<<*it<<" ";
    }
    std::cout<<"\n";
}