/* 
  File Name: selectionSort.hpp
 */
#ifndef __SELECTIONSORT__
#define __SELECTIONSORT__
#include <cstdint>
#include <iostream>
#include <vector>

namespace selectionSort{
    class selection{
        private:
            std::vector<uint32_t> Arr;
            uint32_t size;
        public:
            selection();
            selection(std::vector<uint32_t>arr, uint32_t size);
            selection(selection&)=delete;
    };
}

#endif //__SELECTIONSORT__