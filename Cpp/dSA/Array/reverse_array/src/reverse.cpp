#include <cstdint>
#include <iostream>
#include "reverse_array.hpp"

using namespace std;
namespace reverse_array{
    revrs_array revrs_array_s;
}
reverse_array::revrs_array::~revrs_array(){
    std::cout<<"destructor\n";
}
reverse_array::revrs_array::revrs_array(void){
    uint32_t temp_arr[ARRAY_SIZE]={2,4,7,0,1,3,6,5,8,9};
    for(uint8_t i=0; i<ARRAY_SIZE; i++){
        Arr[i] = temp_arr[i];
    }
}
void reverse_array::revrs_array::reverse_array(void){
    uint8_t start=0;
    uint8_t end=ARRAY_SIZE-1;
    while(start<=end){
        swap(Arr[start], Arr[end]);
        start++;
        end--;
    }
}