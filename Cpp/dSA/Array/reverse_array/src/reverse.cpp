#include <cstdint>
#include "reverse_array.hpp"

void reverse_array(uint32_t arr[], uint16_t size){
    uint8_t start=0;
    uint8_t end=size-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}