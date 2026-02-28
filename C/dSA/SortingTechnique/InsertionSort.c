#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <pthread.h>
/*
#include <assert.h>      
#include <ctype.h>       
#include <errno.h>       
#include <float.h>     
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <limits.h>
#include <locale.h>
#include <math.h>  
#include <setjmp.h>
#include <string.h>
#include <time.h>
*/
/* 
1. Start with the second element as the key.
2. Compare the key with elements before it.
3. Shift larger elements one position to the right.
4. Insert the key where it belongs.
5. Repeat until the array is sorted.
*/
#define ARRAY_SIZE 10
typedef struct{
    uint16_t size;
    uint32_t Array[ARRAY_SIZE];
}DataPacket;
// void Insertion_Sort(uint32_t Arr[], uint16_t size){
//     uint32_t key=0;
//     for(int idx=1, j=0; idx<size; idx++){
//         key = Arr[idx];
//         j = idx-1;
//         while(j>=0 && Arr[j]>key){
//             Arr[j+1] = Arr[j];
//             j = j-1;
//         }
//         Arr[j+1] = key;
//     }
// }
void* Insertion_Sort(void* arg){
    DataPacket*SortPtr = (DataPacket*)arg;
    uint32_t key=0;
    for(int idx=1, j=0; idx < SortPtr->size; idx++){
        key = SortPtr->Array[idx];
        j = idx-1;
        while(j>=0 && SortPtr->Array[j]>key){
            SortPtr->Array[j+1] = SortPtr->Array[j];
            j = j-1;
        }
        SortPtr->Array[j+1] = key;
    }
    return NULL;
}

int main(int argc, char* argv[], char** env){
    DataPacket ArrayToSort = {.size=ARRAY_SIZE, {6,2,8,0,1,3,5,7,9,4}};
    // uint16_t size = sizeof(Array)/sizeof(Array[0]);
    // Insertion_Sort(Array, size);
    // for(uint16_t i = 0; i<ARRAY_SIZE; i++){
    //     printf("%u ", Array[i]);
    // }
    /* Sorting using threading concept */
    pthread_t thread_id;
    if(pthread_create(&thread_id, NULL, Insertion_Sort, &ArrayToSort) !=0){
        printf("Failed to creat thread\n");
        return EXIT_FAILURE;
    }
    pthread_join(thread_id, NULL);
    for(uint16_t i = 0; i<ARRAY_SIZE; i++){
        printf("%u ", ArrayToSort.Array[i]);
    }
    return EXIT_SUCCESS;
}