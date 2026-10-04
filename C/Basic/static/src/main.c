#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "static_hdr.h"
int main(int argc, char* argv[], char** env){
    for(int i = 0; i < STATIC_VARIABLE_COUNTER_H; i++){
        uint32_t total_count =static_variable_counter();
    }
    return EXIT_SUCCESS;
}