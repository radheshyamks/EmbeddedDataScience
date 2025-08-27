#include "stdio.h"
#include <stdlib.h>
#include <stdint.h>
#include <pthread.h>
#include <time.h>
#include <unistd.h>

#define THREAD_MAX 2
uint32_t global_sum=0;
uint32_t prime[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};

void* routine(void*args){
    uint32_t index = *((uint32_t*)args);
    uint32_t sum=0;
    sleep(1);
    for(uint16_t j=0; j<5; j++){
        sum+=prime[index+j];
    }
    *((uint32_t*)args) = sum;
    return args;
}

int main(int argc, char* argv[], char** env){
    pthread_t th[THREAD_MAX];
    for(uint16_t i=0; i<THREAD_MAX; i++){
        uint32_t* a =(uint32_t*)malloc(sizeof(uint32_t)); 
        *a = i* sizeof(prime)/(2*sizeof(prime[0]));
        if(pthread_create(&th[i], NULL, &routine, a)!=0){
            printf("Failed to create thread\n");
        }
    }
    for(uint16_t i=0; i<THREAD_MAX; i++){
        uint32_t* r;
        if(pthread_join(th[i], (void**)&r)!=0){
            printf("Failed to join thread\n");
        }
        global_sum+= *r;
        free(r);
    }
    return EXIT_SUCCESS;
}