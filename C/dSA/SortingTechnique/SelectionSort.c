#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#include "sortMethod.h"

// #define ARRAY_SIZE 10

void Selection_Sort(uint32_t Arr[], uint16_t size){
    for(uint16_t i=0; i<(size-1); i++){
        uint16_t min_pos = i;
        for(uint16_t j=i+1; j<size; j++){
            if(Arr[min_pos]> Arr[j]){
                min_pos = j;
            }
        }
        if(min_pos != i){
            uint32_t temp = Arr[i];
            Arr[i] = Arr[min_pos];
            Arr[min_pos] = temp;
        }
    }
    return;
}

int main(int argc, char* argv[], char** env){
    uint32_t Array[ARRAY_SIZE] = {8,0,1,4,6,3,2,5,9,7};
    uint16_t size = sizeof(Array)/sizeof(Array[0]);
    Selection_Sort(Array, size);
    for(uint8_t i=0; i<size; i++){
        printf("%u ", Array[i]);
    }
    return EXIT_SUCCESS;
}