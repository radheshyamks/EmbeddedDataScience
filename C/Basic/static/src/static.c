#include <stdlib.h>
#include <stdio.h>
#include "static_hdr.h"
#include <stdint.h>
// static variable to keep track of the count
uint32_t static_variable_counter(void) {
    static uint32_t count = 0; // static variable to keep track of the count
    count++;
    printf("Static variable count: %u\n", count);
    return count;
}