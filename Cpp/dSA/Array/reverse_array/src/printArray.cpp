#include <cstdint>
#include <iostream>
#include "reverse_array.hpp"
using namespace std;
void reverse_array::revrs_array::printArray(void){
    for(uint8_t i=0; i<ARRAY_SIZE; i++){
        std::cout<<Arr[i]<<" ";
    }
    std::cout<<"\n";
}