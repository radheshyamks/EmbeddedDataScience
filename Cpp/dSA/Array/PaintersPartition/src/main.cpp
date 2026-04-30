/* 
    File name: main.cpp
 */

#include "painterPartition.hpp"
namespace BoardAllocator{
    painterpartition painterpartition_s;
}

int main(int argc, char* argv[], char** env){
    std::vector<uint32_t> board = {10,20,40,40};
    uint32_t painters = 2;
    BoardAllocator::painterpartition_s(board, painters);
    uint32_t result = BoardAllocator::painterpartition_s.painterpartition_allocator();
    BoardAllocator::painterpartition_s.printArray();
    std::cout<<"result: "<<result<<"\n";
    return EXIT_SUCCESS;
}