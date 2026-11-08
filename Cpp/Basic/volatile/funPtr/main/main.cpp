#include <iostream>
#include "funPtr.hpp"
namespace FunPtr{
    funPtr funptr(addOne);
}
int main(int argc, char* argv[],char** env){
    FunPtr::funptr.callFunc(5);
    return EXIT_SUCCESS;
}