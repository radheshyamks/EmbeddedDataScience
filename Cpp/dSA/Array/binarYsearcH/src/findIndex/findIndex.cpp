/* 
    File Name: findIndex.cpp
 */
#include "binary.hpp"
#include <cstdint>
uint8_t BinarySearch::BinaryArray::find_first_occurance_index(uint32_t start, uint32_t end, uint32_t mid, uint32_t key){
    int32_t pos=-1;
    while(start<=end){
        if(m_data[mid]==key){
            // start = mid+1;
            pos = mid;
            if(mid==0)break;
            end = mid-1;
        }else if(m_data[mid]> key){
            end = mid-1;
        }else{
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return (pos==-1)? UINT8_MAX: static_cast<uint8_t>(pos);
}

uint8_t BinarySearch::BinaryArray::find_last_occurance_index(uint32_t start, uint32_t end, uint32_t mid, uint32_t key){
    int32_t pos=-1;
    while(start<=end){
        if(m_data[mid]==key){
            // start = mid+1;
            pos = mid;
            start = mid+1;
        }else if(m_data[mid]> key){
            end = mid-1;
        }else{
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return (pos==-1)? UINT8_MAX: static_cast<uint8_t>(pos);
}