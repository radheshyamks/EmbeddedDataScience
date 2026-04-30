/* 
  file Name: BookAllocation.hpp
  Description:  The DSA Book Allocation Algorithm is a classic problem solved using Binary Search on the Answer, 
                where the goal is to allocate books to students such that the maximum number of pages assigned to any student 
                is minimized. 
                The key is to balance fairness (no student overloaded) while respecting constraints like contiguous allocation.
Problem Statement
You are given:
An array arr[] where each element represents the number of pages in a book.
An integer k representing the number of students.
Rules:
1) Each student must get at least one book.
2) Books must be allocated in contiguous order (no skipping).
3) The objective is to minimize the maximum pages assigned to any student.
If k > number of books, allocation is impossible → return -1.
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