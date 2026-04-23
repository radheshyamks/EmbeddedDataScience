#include "allTypeConstructor.hpp"
#include <iostream>
#include <cstdint>

using namespace std;
namespace AllTypeConstructor{
    // AllConstructorType AllConstructorType_s;
}
int main(int argc, char* argv[], char** env){
    // char*p = "Radheshyam";
    // char*t = "Kumar";
    // AllTypeConstructor::AllConstructorType obj(static_cast<char*>(p), static_cast<char*>(t));
    AllTypeConstructor::AllConstructorType obj("Radheshyam", "Kumar");
    obj.printArray();
    return EXIT_SUCCESS;
}