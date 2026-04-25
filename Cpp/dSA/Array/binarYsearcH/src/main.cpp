/* 
    file name: main.cpp
 */
#include <iostream>
#include <cstdint>
#include "binary.hpp"
#include <vector>
namespace BinarySearch{
    uint32_t arr[ARRAY_SIZE] = {2,3,3,4,5,6,7,8,9,10};
    BinaryArray binaryArray_t;
    BinaryArray binaryArray_m(arr);
}
int main(int argc, char* argv[], char** env){
    // std::vector<uint32_t>v = {1,2,3,4,5,6};
    uint32_t*p = new uint32_t[BinarySearch::ARRAY_SIZE];
    uint32_t key=10;
    BinarySearch::binaryArray_t.Find_Occurance_Index(key);
    BinarySearch::binaryArray_t.print_index();
    key=3;
    BinarySearch::binaryArray_m.Find_Occurance_Index(key);
    BinarySearch::binaryArray_m.print_index();
    return EXIT_SUCCESS;
}