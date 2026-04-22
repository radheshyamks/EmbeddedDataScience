#include <iostream>
#include <cstdint>
#include "prefixSum.hpp"

namespace prefixSum{
    prefixSum_Arr prefixSum_Arr_s;
}

//default constructor
prefixSum::prefixSum_Arr::prefixSum_Arr(void){
    uint32_t temp[ARRAY_SIZE]={0,1,2,3,4,5,6,7,8,9};
    // uint32_t temp[ARRAY_SIZE]={2,7,6,9,0,1,5,4,8,3};
    for(uint8_t i=0; i<ARRAY_SIZE; i++){
        Arr[i]=temp[i];
    }
}
// destructor
prefixSum::prefixSum_Arr::~prefixSum_Arr(){
    std::cout<<"Destructor\n";
}
void prefixSum::prefixSum_Arr::PreFixSUM(void){
    prefixSUM[0]=Arr[0];
    for(uint8_t i=1; i<ARRAY_SIZE; i++){
        prefixSUM[i] = prefixSUM[i-1]+Arr[i];
    }
}