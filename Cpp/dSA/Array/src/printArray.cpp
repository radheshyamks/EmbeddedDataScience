#include <cstdint>
#include <iostream>
#include "reverse_array.hpp"
using namespace std;
void printArray(uint32_t arr[],uint32_t size){
    for(uint8_t i=0; i<size; i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"\n";
}