/* 
    File Name: main.cpp
 */
#include "AggressiveCow.hpp"
#include <cstdint>
#include <iostream>

namespace AggressiveCows{
    CowStallAllocation CowStallAllocation_s;
}

int main(int argc, char* argv[], char** env){
   uint32_t result = AggressiveCows::CowStallAllocation_s.maxGapStall();
   AggressiveCows::CowStallAllocation_s.printArray();
   std::cout<<"result: "<<result<<"\n";
    return EXIT_SUCCESS;
}