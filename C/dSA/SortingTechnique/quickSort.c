#include "sortMethod.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
typedef struct{
    uint16_t size;
    uint32_t Array[ARRAY_SIZE];
}quickSort_Data;
/* Swapping two values */
void swap(uint32_t* val1, uint32_t* val2){
    if((val1 != NULL) && (val2 != NULL)){
        uint32_t tmp = *val1;
        *val1 = *val2;
        *val2 = tmp;
    }
}
void QuickSort(uint32_t Arr[], uint16_t size){
    srand(time(NULL));
    QuickSort_recur(Arr, 0, size-1);
}

uint16_t partition(uint32_t Arr[], uint16_t low, uint16_t high){
    uint16_t i=low;
    uint16_t pivot_index = low + ((uint16_t)rand())%(high-low);
    if(pivot_index != high){
        swap(&Arr[pivot_index], &Arr[high]);
    }
    uint32_t pivot_value = Arr[high];
    for(uint16_t j=low; j<high; j++){
        if(Arr[j]<= pivot_value){
            swap(&Arr[j], &Arr[i]);
            i++;
        }
    }
    swap(&Arr[i], &Arr[high]);
    return i;
}
void QuickSort_recur(uint32_t Arr[], uint16_t low, uint16_t high){
    if(low < high){
        uint16_t pivot_index = partition(Arr, low, high);
        QuickSort_recur(Arr, low, pivot_index-1);
        QuickSort_recur(Arr, pivot_index+1, high);
    }
}

int main(int argc, char* argv[], char ** env){
    quickSort_Data Quickdata = {.size = ARRAY_SIZE, .Array={8,5,0,1,6,4,7,9,2,3}};
    QuickSort(Quickdata.Array, Quickdata.size);

    for(uint16_t i=0; i < Quickdata.size; i++){
        printf("%u ", Quickdata.Array[i]);
    }
    printf("\n");
    return EXIT_SUCCESS;
}