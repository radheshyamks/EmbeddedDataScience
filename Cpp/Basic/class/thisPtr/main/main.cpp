#include <iostream>
#include "this_hdr.hpp"
int main(int argc, char* argv[], char** env) {
    ThisPtr::cThisPtr obj;
    // size_t len = obj.getSize();
    obj.printThis();
    obj.call_thisPtr(obj.getSize());
    return EXIT_SUCCESS;
}