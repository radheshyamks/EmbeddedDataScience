/*
    File Name: array.cpp
*/
#include <iostream>
#include <cstdint>
#include <thread>
#include "reverse_array.hpp"

using namespace std;
int main(int argc, char* argv[], char** env){
    uint32_t Array[ARRAY_SIZE]= {1,5,4,3,8,0,6,7,2,9};
    std::cout<<"Before reverse\n";
    printArray(Array, ARRAY_SIZE);
    reverse_array(Array, ARRAY_SIZE);
    std::cout<<"After reverse\n";
    printArray(Array, ARRAY_SIZE);
    return EXIT_SUCCESS;
}