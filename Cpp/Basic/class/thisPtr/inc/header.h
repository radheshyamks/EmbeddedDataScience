/**
 * @file header.h
 * @brief this file is use to convert this pointer to uint8_t pointer and access the memory of the class object
 * @Author : Radheshyam Kumar Singh
 * @Date: 11-Oct-2026
 */
#ifndef __HEADER_H__
#define __HEADER_H__
#ifdef __cplusplus
extern "C"{
#endif
#include "type.h"
#include <stdint.h>
void convert_thisPtr_to_uint8_t_ptr(uint8_t* err_code, size_t length);
void call_cpp_function(uint8_t* err_code);
#ifdef __cplusplus
}
#endif

#endif /*__HEADER_H__*/