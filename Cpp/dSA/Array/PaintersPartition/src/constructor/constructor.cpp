/* 
    File Name: constructor.cpp
 */

#include "painterPartition.hpp"
namespace BoardAllocator{
    painterpartition::painterpartition(){
        // std::vector<uint32_t>p;
        // painting area
        paintArea = {10,20,30,40};
        // default number of painters
        painters = 2;
    }
    painterpartition::painterpartition(std::vector<uint32_t> board, uint32_t persons){
        this->paintArea = board;
        this->painters = persons;
    }
}