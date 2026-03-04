/* Find minumum number from Given two arrays */
/**
 * File Name: findMin.c 
 * Author: Radheshyam
 * Date: 04-Feb-2026
 * */
#include <stdio.h>
#include <stdint.h>
#include <Stdlib.h>

#define ARRAY1_SIZE 5
#define ARRAY2_SIZE 5
/* typedef enum{
    ARRAY1_SIZE=5,
    ARRAY2_SIZE=5,
}; */
uint32_t find_min(uint32_t Arr[], uint16_t size){
    uint32_t min=0;
    min = Arr[0];
    for(uint16_t i=1; i<size; i++){
        if(min>Arr[i]){
            min = Arr[i];
        }
    }
    return min;
}
int main(int argc, char* argv[], char** env){
    uint32_t Arr1[ARRAY1_SIZE] = {3,2,1,7,0};
    uint32_t Arr2[ARRAY2_SIZE] = {4,6,5,8,9};

    uint32_t min1 = find_min(Arr1, ARRAY1_SIZE);
    uint32_t min2 = find_min(Arr2, ARRAY2_SIZE);
    if(min1>=min2){
        printf("min2 = %u\n", min2);
    }else{
        printf("min1 = %u\n", min1);
    }

    return EXIT_SUCCESS;
}