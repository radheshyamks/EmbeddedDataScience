/* 
    File Name: PrintArray.cpp
 */

#include "binary.hpp"

uint16_t BinarySearch::BinaryArray::get_first_index(void) const{
    return static_cast<uint16_t>(first_idx_pos);
}
uint16_t BinarySearch::BinaryArray::get_last_index(void) const{
    return static_cast<uint16_t>(last_idx_pos);
}

void BinarySearch::BinaryArray::print_first_index(void)const{
    std::cout<<"first_idx_pos: "<<static_cast<uint32_t>(this->first_idx_pos)<<"\n";
}
void BinarySearch::BinaryArray::print_last_index(void)const{
    std::cout<<"last_idx_pos: "<<static_cast<uint32_t>(this->last_idx_pos)<<"\n";
}
void BinarySearch::BinaryArray::PrintArra(void) const{
    for(uint8_t i=0; i<ARRAY_SIZE; i++){
        std::cout<<m_data[i]<<" ";
    }
    std::cout<<"\n";
}
void BinarySearch::BinaryArray::print_total_occurance(void)const{
    std::cout<<"Total occurance: "<<static_cast<uint32_t>((last_idx_pos-first_idx_pos)+1)<<"\n";
}