/* 
    File Name: BinarySrchArray.cpp
    Date: 25-Apr-2026
    Author: Radheshyam
    Description: This file will perform operation to find the index of given key value using binary search algorithm 
    when array is in sorted form.
 */
#include "binary.hpp"
#include <cstdint>

void BinarySearch::BinaryArray::Find_Occurance_Index(uint32_t key){
    // uint32_t start=0, end=(ARRAY_SIZE-1);
    // uint32_t mid = start + (end-start)/2;
    first_idx_pos = find_first_occurance_index(0, (ARRAY_SIZE-1), (0 + ((ARRAY_SIZE-1)-0)/2), key);
    last_idx_pos = find_last_occurance_index(0, (ARRAY_SIZE-1), (0 + ((ARRAY_SIZE-1)-0)/2), key);
    // std::cout<<"idx_pos: "<<static_cast<uint32_t>(idx_pos)<<"\n";
}