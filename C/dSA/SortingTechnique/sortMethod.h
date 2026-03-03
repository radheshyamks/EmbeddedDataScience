/*File Name: sortMethod.h */
#include "stdint.h"
#ifndef __SORT__
#define __SORT__
#define ARRAY_SIZE 10
// function delcaration
void BubbleSort(uint32_t A[], uint16_t size);
void Selection_Sort(uint32_t Arr[], uint16_t size);
void* Insertion_Sort(void* arg);
// void Insertion_Sort(uint32_t Arr[], uint16_t size);
void mergeSort(uint32_t Arr[], uint16_t size);
void mergeSort_Recursion(uint32_t Arr[], uint16_t left, uint16_t right);
void mergeSorted_Array(uint32_t Arr[], uint16_t left, uint16_t mid, uint16_t right);
#endif