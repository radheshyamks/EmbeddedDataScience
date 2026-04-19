#include <cstdint>
#include "reverse_array.hpp"

void swap(uint32_t& first, uint32_t& second){
    uint32_t temp=first;
    first = second;
    second = temp;
}