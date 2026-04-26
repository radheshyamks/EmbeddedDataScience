/* 
    File name: binary.hpp
 */
#include <cstdint>
#include <iostream>

#ifndef __BINARY_SEARCH__
#define __BINARY_SEARCH__

namespace BinarySearch{
    constexpr uint8_t ARRAY_SIZE=10;
    extern uint32_t arr[ARRAY_SIZE];
    class BinaryArray{
        private:
            uint32_t* m_data;
            uint8_t first_idx_pos;
            uint8_t last_idx_pos;
            bool owns_data;
        public:
        // deleting constructors
        BinaryArray();
        // deleted Copy Constructor
        BinaryArray(BinaryArray&)=delete;
        // deleted move constructor
        BinaryArray(BinaryArray&&)=delete;
        // deleted parameterized constructor        
        BinaryArray(uint32_t, uint32_t)=delete;
        BinaryArray(uint32_t*p);
        // deleted copy assignment operator        
        BinaryArray& operator=(BinaryArray&)=delete;  
        // deleted Move assignment operator      
        BinaryArray& operator=(BinaryArray&&)=delete;
        void Find_Occurance_Index(uint32_t key);
        uint8_t find_first_occurance_index(uint32_t start, uint32_t end, uint32_t mid, uint32_t key);
        uint8_t find_last_occurance_index(uint32_t start, uint32_t end, uint32_t mid, uint32_t key);
        uint16_t get_first_index(void)const;
        uint16_t get_last_index(void)const;
        void print_first_index(void)const; 
        void print_last_index(void)const;
        void print_total_occurance(void)const;
        void PrintArra(void)const;
        ~BinaryArray();
    };
    extern BinaryArray binaryArray_t;
}

#endif //__BINARY_SEARCH__