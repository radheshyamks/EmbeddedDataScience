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
/* merge sort */
void mergeSort(uint32_t Arr[], uint16_t size);
void mergeSort_Recursion(uint32_t Arr[], uint16_t left_most, uint16_t right_most);
void mergeSorted_Array(uint32_t Arr[], uint16_t left, uint16_t mid, uint16_t right);
/* Quick Sort */
void QuickSort(uint32_t Arr[], uint16_t size);
void swap(uint32_t* val1, uint32_t* val2);
uint16_t partition(uint32_t Arr[], uint16_t low, uint16_t high);
void QuickSort_recur(uint32_t Arr[], uint16_t low, uint16_t high);
#endif