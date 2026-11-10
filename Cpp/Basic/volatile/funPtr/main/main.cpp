#include <iostream>
#include "funPtr.hpp"
#include "types.hpp"
namespace FunPtr{
    funPtr funptr(addOne);
}
int main(int argc, char* argv[],char** env){
    FunPtr::funptr.callFunc(5);
    FunPtr::funcPtr_t fptr = FunPtr::funptr.getFuncPtr();
    uint32_t retVal = fptr(10);
    uint32_t result[OPTFUNC_SIZE];
    std::cout<<"Result from function pointer: "<<retVal<<std::endl;
    for(uint8_t i=0; i< OPTFUNC_SIZE; i++){
       FunPtr::funcPtr_t opt_fptr = FunPtr::funptr.OptFuncPtr(i==0);
       result[i] = opt_fptr(i*10);
    }
    for(uint8_t i=0; i< OPTFUNC_SIZE; i++){
        std::cout<<"Result from OptFuncPtr: "<<result[i]<<std::endl;
    }
    uint16_t size = FunPtr::funptr.getSizeof();
    std::cout<<"size of FuncType: "<<size<<std::endl;
    return EXIT_SUCCESS;
}