/* 
  file Name: BookAllocation.hpp
 */
#ifndef __BOOKALLOCATION__
#include <iostream>
#include <cstdint>
#include <vector>
namespace Allocation{
    class BookAllocator{
        private:
            std::vector<uint32_t>books;
            uint32_t students;
        public:
            // default constructor
            BookAllocator();
            // parameterized constructor
            BookAllocator(std::vector<uint32_t> v, uint32_t s);
            // copy constructor
            BookAllocator(BookAllocator&)=delete;
            // Move constructor
            BookAllocator(BookAllocator&&)=delete;
            // copy assignment operator
            BookAllocator& operator=(BookAllocator&)=delete;
            // Move assignment operator
            BookAllocator& operator=(BookAllocator&&)=delete;
            ~BookAllocator();
            bool isPossible(uint32_t maxPages);
            uint32_t allocate(void);
            void operator()(std::vector<uint32_t> v, uint32_t s);
            void printArray(void);
    };
    extern BookAllocator BookAllocator_s;
}


#endif //__BOOKALLOCATION__