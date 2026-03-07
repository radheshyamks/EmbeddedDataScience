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
void mergeSort(uint32_t Arr[], uint16_t size){

    mergeSort_Recursion(Arr, 0, size-1);
}
/* brief: this function slipts the array into single element
 * param1: array address
 * param2: fisrt index of array
 * param3: last index of array 
 */
void mergeSort_Recursion(uint32_t Arr[], uint16_t left_most, uint16_t right_most){
    if(left_most< right_most){
        uint16_t mid = left_most + (right_most-left_most)/2;
        mergeSort_Recursion(Arr, left_most, mid);
        mergeSort_Recursion(Arr, mid+1, right_most);
        mergeSorted_Array(Arr, left_most, mid, right_most);
    }
}
void mergeSorted_Array(uint32_t Arr[], uint16_t left, uint16_t mid, uint16_t right){
    uint16_t left_length = mid-left+1;
    uint16_t right_length = right-mid;
    uint32_t temp_left[left_length];
    uint32_t temp_right[right_length];
    /* copying the left array element to temp_left array */
    for(uint16_t i=0; i<left_length; i++){
        temp_left[i] = Arr[left+i];
    }
    /* copying the right array element to temp_right array */
    for(uint16_t i=0; i< right_length; i++){
        temp_right[i] = Arr[mid+1+i];
    }
    uint16_t i, j, k;
    for(i=0, j=0, k=left;k<=right;k++){
        if((i<left_length) && ((j>=right_length) || temp_left[i]<=temp_right[j])){
            Arr[k] = temp_left[i];
            i++;
        }else{
            Arr[k] = temp_right[j];
            j++;
        }
    }
}

int main(int argc, char* argv[], char** env){
    uint32_t Array[ARRAY_SIZE] = {9,3,6,1,4,2,0,7,5,8};
    /* Size of array */
    uint16_t size = sizeof(Array)/sizeof(Array[0]);

    mergeSort(Array, size);

    for(uint8_t i=0; i<ARRAY_SIZE; i++){
        printf("%u ", Array[i]);
    }
    return EXIT_SUCCESS;
}