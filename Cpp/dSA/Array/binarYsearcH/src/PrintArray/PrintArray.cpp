/* 
    File Name: PrintArray.cpp
 */

#include "binary.hpp"

uint8_t BinarySearch::BinaryArray::get_index(void) const{
    return idx_pos;
}

void BinarySearch::BinaryArray::print_index(void)const{
    std::cout<<"idx_pos: "<<static_cast<uint32_t>(this->idx_pos)<<"\n";
}
void BinarySearch::BinaryArray::PrintArra(void) const{
    for(uint8_t i=0; i<ARRAY_SIZE; i++){
        std::cout<<m_data[i]<<" ";
    }
    std::cout<<"\n";
}