#include "sortMethod.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * file Name: mergeSort.c 
 * Author: Radheshyam
 * Date: 04-Feb-2026 formate -> DD-MM-YYYY
 *                                  ARRAY = {1,6,3,2,8,0,7,4,5,9}
 *                                  {1,6,3,2,8,0,7,4,5,9}
 *                                      /        \
 *                              {1,6,3,2,8}     {0,7,4,5,9} keep on deviding this sub array till one element remain
 */
typedef enum{
    ARRAY_LENGTH=10,
}mergeSortEnum;
typedef struct{
    mergeSortEnum size;
    uint32_t Array[ARRAY_SIZE];
}MergeSort_package;

int main(int argc, char* argv[], char** env){
    uint32_t Array[ARRAY_SIZE] = {9,3,6,1,4,2,0,7,5,8};

    for(uint8_t i=0; i<ARRAY_SIZE; i++){
        printf("%u ", Array[i]);
    }
    return EXIT_SUCCESS;
}