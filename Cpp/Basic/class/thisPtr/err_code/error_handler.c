// #include "this_hdr.hpp"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

void convert_thisPtr_to_uint8_t_ptr(uint8_t* err_code, size_t length){
    // Convert the this pointer to a uint8_t pointer
    // uint8_t* this_ptr = reinterpret_cast<uint8_t*>(err_code);
    // Access the memory of the class object using the uint8_t pointer
    for (size_t i = 0; i < length; ++i) {
        // Print the memory content in hexadecimal format
        printf("Memory at offset %zu: add: 0x%p  value: 0x%02X\n", i, &err_code[i],err_code[i]);
    }
}