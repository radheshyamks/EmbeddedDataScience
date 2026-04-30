/* 
    File Name: painterPartition.hpp
    Description:
        The Painter’s Partition Problem is a classic optimization problem in DSA where the 
        goal is to allocate boards among painters so that the maximum time taken by any painter is minimized, 
        using the technique of Binary Search on the Answer.
 */
#ifndef __PAINTERPARTITION__
#define __PAINTERPARTITION__
#include <iostream>
#include <cstdint>
#include <vector>
namespace BoardAllocator{
    class painterpartition{
        private:
            std::vector<uint32_t> paintArea;
            uint32_t painters;
        public:
            // default constructor
            painterpartition();
            // parameterized constructor
            painterpartition(std::vector<uint32_t> board, uint32_t persons);
            // copy constructor
            painterpartition(painterpartition&)=delete;
            // Move constructor
            painterpartition(painterpartition&&)=delete;
            // copy assignment operator
            painterpartition& operator=(painterpartition&)=delete;
            // move assignment operator
            painterpartition& operator=(painterpartition&&)=delete;
            // methods
            bool isPossible(uint32_t maxArea);
            // print array
            void printArray(void);
            // 
            int32_t painterpartition_allocator(void);
            // functor
            void operator()(std::vector<uint32_t> board, uint32_t persons);
            
    };
    extern painterpartition painterpartition_s;
}
#endif //__PAINTERPARTITION__