#include <iostream>
#include <cstdint>

#include "BookAllocation.hpp"
namespace Allocation{
    BookAllocator BookAllocator_s;
}
int main(int argc, char* argv[], char** env){
    // for book allocator problem this array should be in ascending order only
    std::vector<uint32_t> v = {10,20,30,40,50,60,70}; //
    uint32_t students = 4;
    Allocation::BookAllocator_s(v, students);
    uint16_t result =  Allocation::BookAllocator_s.allocate();
    // Allocation::BookAllocator_s.printArray();
    std::cout<<"result = "<<result<<"\n";
    return EXIT_SUCCESS;
}