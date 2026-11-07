#include <iostream>
#include "const_cast.hpp"
namespace ConstCast{
    constCast constcast(10);
}
int main(int argc, char* argv[], char** env){
    ConstCast::constcast.display();
    ConstCast::constcast.modifyValue(30);
    ConstCast::constcast.display();
    return EXIT_SUCCESS;
}