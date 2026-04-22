#include <cstdint>
#include "reverse_array.hpp"
namespace reverse_array{
    revrs_array revrs_array_s;
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