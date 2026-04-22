#include <cstdint>
#include "reverse_array.hpp"

void reverse_array::revrs_array::swap(uint32_t& first, uint32_t& second){
    uint32_t temp=first;
    first = second;
    second = temp;
}