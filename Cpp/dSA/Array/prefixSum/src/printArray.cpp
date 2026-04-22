#include <iostream>
#include <cstdint>
#include "prefixSum.hpp"

using namespace std;
void prefixSum::prefixSum_Arr::printArray(void){
    // prefixSUM[ARRAY_SIZE]
    for(uint8_t i=0; i<ARRAY_SIZE; i++){
        std::cout<<prefixSUM[i]<<" ";
    }
    std::cout<<"\n";
}