/* 
    File Name: AggressiveCow.hpp
 */
#ifndef __AGGRESSIVECOW__
#define __AGGRESSIVECOW__
#include <iostream>
#include <cstdint>
#include <vector>

namespace AggressiveCows{
    class CowStallAllocation{
        private:
            std::vector<uint32_t> stalls;
            uint32_t totalCows;
        public:
            // default constructor
            CowStallAllocation();
            // parameterized constructor
            CowStallAllocation(std::vector<uint32_t>stall, uint32_t cows);
            // deleted copy constructor
            CowStallAllocation(CowStallAllocation&)=delete;
            // deleted move constructor
            CowStallAllocation(CowStallAllocation&&)=delete;
            // deleted copy assignment operator
            CowStallAllocation& operator=(CowStallAllocation&)=delete;
            // deleted move assignment operator
            CowStallAllocation& operator=(CowStallAllocation&&)=delete;
            void printArray(void);
            int32_t maxGapStall(void);
            bool isfeasible(uint32_t StallmaxGap);
            void operator()(std::vector<uint32_t> stall, uint32_t cows);
    };
    extern CowStallAllocation CowStallAllocation_s;
}

#endif // __AGGRESSIVECOW__