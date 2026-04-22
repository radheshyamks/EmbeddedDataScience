/*
    File Name: reverse_array.hpp
*/

#ifndef REVERSE_ARRAY
#define REVERSE_ARRAY
#include <cstdint>
namespace reverse_array{
    constexpr uint8_t ARRAY_SIZE=10;
    class revrs_array{
        private:
            uint32_t Arr[ARRAY_SIZE];
        public:
            // default constructor
            explicit revrs_array(void);
            //deleted parameterized constructor
            explicit revrs_array(uint32_t)=delete;
            explicit revrs_array(uint32_t, uint32_t)=delete;
            // deleted Copy Contructor
            explicit revrs_array(revrs_array&)=delete;
            // deleted Move Contructor
            explicit revrs_array(revrs_array&&)=delete;
            // deleted copy assinment operator
            revrs_array operator=(revrs_array&)=delete;
            // deleted move assignment operator
            revrs_array operator=(revrs_array&&)=delete;
            virtual ~revrs_array();
            void reverse_array(void);
            void swap(uint32_t& first, uint32_t& second);
            void printArray(void);
    };
    extern revrs_array revrs_array_s;
}
#endif //REVERSE_ARRAY