#include <iostream>
#include <cstdint>
#include "prefixSum.hpp"

int main(int argc, char* argv[], char** env){
    prefixSum::prefixSum_Arr_s.PreFixSUM();    
    prefixSum::prefixSum_Arr_s.printArray();    
    return EXIT_SUCCESS;
}