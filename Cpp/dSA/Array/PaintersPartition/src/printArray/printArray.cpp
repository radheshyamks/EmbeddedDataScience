/* 
    File Name: printArray.cpp
 */
#include "painterPartition.hpp"
namespace BoardAllocator{
    void painterpartition::printArray(){
        for(std::vector<uint32_t>::iterator it = paintArea.begin(); it!=paintArea.end(); it++){
            std::cout<<*it<<" ";
        }
        // for(uint32_t area: paintArea){
        //     std::cout<<area<<" ";
        // }
        std::cout<<"\n";
    }
}