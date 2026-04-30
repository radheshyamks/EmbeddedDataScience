/* 
    File Name: PainterPArtition_Functor.cpp
 */
#include "painterPartition.hpp"

// functor definition
namespace BoardAllocator{
    void painterpartition::operator()(std::vector<uint32_t> board, uint32_t persons){
        this->paintArea = board;
        this->painters = persons;
    }
}