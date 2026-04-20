/*
  File Name: traversal.hpp
*/

#ifndef __ARRAY_TRAVERSAL__
#define __ARRAY_TRAVERSAL__
#include <cstdint>
#define ARRAY_SIZE 10
namespace array{
  class ArrayTraverse{
    private:
      uint32_t Arr[ARRAY_SIZE];
    public:
      void Array_Traversal(uint32_t key);
      uint32_t fetch_key(uint32_t key);
      void printkey(uint32_t key);
      void InvalidKey(void);
      explicit ArrayTraverse(const ArrayTraverse&)=delete;// forbid copy constructor
      explicit ArrayTraverse(ArrayTraverse&&)=delete; // forbid move constructor
      explicit ArrayTraverse(uint32_t)=delete;
      explicit ArrayTraverse(uint32_t, uint32_t)=delete;
      explicit ArrayTraverse(void){ // allow default constructor
        uint32_t temp[ARRAY_SIZE] = {1,7,6,9,0,5,2,3,8,4};
        for(uint8_t i=0; i<ARRAY_SIZE; i++){
          Arr[i]=temp[i];
        }
        
      }
      ArrayTraverse operator=(const ArrayTraverse&) = delete; // forbid copy assignment
      ArrayTraverse operator=(ArrayTraverse&&)=delete; // forbid move assignment

      
      virtual ~ArrayTraverse(){
        return;
      }
  };
  extern ArrayTraverse arrayTraverse_e;
}
#endif //__ARRAY_TRAVERSAL__