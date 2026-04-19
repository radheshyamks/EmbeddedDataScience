#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#define ALLOCATE_MEMORY(type, count)                                            \
        (                                                                       \
        /*please pass interger as an argument*/                                 \
        /*_Static_assert(__builtin_types_compatible_p(typeof(count), type)),*/  \
        (type *)malloc(sizeof(type) * (count))                                  \
        )
void* allocate_memory(size_t type_size, size_t count){
    if(count>(SIZE_MAX/type_size)){
        fprintf(stderr, "Szie overflow\n");
        return NULL;
    }
    void* ptr = (void*)malloc(type_size * count);
    if(ptr==NULL){
        fprintf(stderr, "Failed to allocate memory\n");
    }
    return ptr;
}
int main(int argc, char* argv[], char** env){
    uint32_t* ptr_u32 = (uint32_t*) allocate_memory(1, 10);
    uint16_t* ptr_u16 = ALLOCATE_MEMORY(uint16_t, 10);
    for(uint8_t i=0; i<10; i++){
        ptr_u32[i]=10*i;
    } 
    return EXIT_SUCCESS;
}