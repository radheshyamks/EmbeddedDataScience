#include "allTypeConstructor.hpp"
#include <iostream>
#include <cstdint>

using namespace std;
namespace AllTypeConstructor{
    AllConstructorType AllConstructorType_s;
}
int main(int argc, char* argv[], char** env){
    // char*p = "Radheshyam";
    // char*t = "Kumar";
    // AllTypeConstructor::AllConstructorType obj(static_cast<char*>(p), static_cast<char*>(t));
    // parameterized constructor
    AllTypeConstructor::AllConstructorType obj("Radheshyam", "Kumar");
    // parameterized constructor
    AllTypeConstructor::AllConstructorType obj_m("Radheshyam Kumar", "Singh");
    // default constructor
    AllTypeConstructor::AllConstructorType obj_t;
    obj_t.printArray();
    // calling assignment operator
    obj=obj_m;
    obj.printArray();
    // calling a copy constructor
    AllTypeConstructor::AllConstructorType obj_k(obj_m);
    obj_k.printArray();
    // calling move constructor
    AllTypeConstructor::AllConstructorType obj_s(std::move(obj_m));
    obj_s.printArray(); 
    AllTypeConstructor::AllConstructorType_s.printArray();
    // calling move assignement operator
    obj = std::move(AllTypeConstructor::AllConstructorType_s);
    obj.printArray();
    return EXIT_SUCCESS;
}