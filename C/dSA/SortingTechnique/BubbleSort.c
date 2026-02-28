/*
 *  Bubble Sort ->  Bubble Sort is one of the simplest sorting algorithms. 
 *  It works by repeatedly comparing adjacent elements in a list and swapping them if they are in the wrong order. 
 *  This process continues until the list is sorted.
 * Steps:
 *  1. Start at the beginning of the list.
 *  2. Compare the first two elements:
 *  3. If the first is greater than the second, swap them.
 *  4. Move to the next pair and repeat.
 *  5. Continue until the end of the list (this completes one "pass").
 *  6. After each pass, the largest element "bubbles up" to its correct position at the end.
 *  7. Repeat passes until no swaps are needed.

 * */

#include "stdio.h"
#include "stdint.h"
#include "stdlib.h"

#define ARRAY_SIZE 10
typedef uint8_t bool;
#define false (1!=1)
#define true !(1!=1)
/* Sorting in Ascending order*/
void BubbleSort(uint32_t A[], uint16_t size){
    for(uint16_t idx_i=0; idx_i<size; idx_i++){
        bool swapped = false;
        for(uint16_t idx_j=0; idx_j<(size-idx_i-1); idx_j++){
            if(A[idx_j] > A[idx_j+1]){
                uint32_t tmp = A[idx_j];
                A[idx_j] = A[idx_j+1];
                A[idx_j+1] = tmp;
                swapped = true;
            }
        }
        if(!swapped) break;
    }
}

int main(int argc, char* argv[], char** env){
    uint32_t Array[ARRAY_SIZE] = {7,4,9,8,1,3,2,0,6,5};
    uint16_t size = sizeof(Array)/sizeof(Array[0]);
    BubbleSort(Array, size);
    for(uint16_t i=0; i<ARRAY_SIZE; i++){
        printf("%u ", Array[i]);
    }
    return EXIT_SUCCESS;
}