/*
    File Name: array.cpp
*/
#include <iostream>
#include <cstdint>
#include <thread>
#include "reverse_array.hpp"

using namespace std;
int main(int argc, char* argv[], char** env){
    std::cout<<"Before reverse\n";
    reverse_array::revrs_array_s.printArray();
    reverse_array::revrs_array_s.reverse_array();
    std::cout<<"After reverse\n";
    reverse_array::revrs_array_s.printArray();
    return EXIT_SUCCESS;
}