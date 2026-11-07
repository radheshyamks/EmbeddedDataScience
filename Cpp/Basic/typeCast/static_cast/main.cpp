#include <iostream>
#include "static_cast.hpp"
namespace StaticCast{
    staticCast staticcast(90);
}
int main(int argc, char* argv[], char** env){
    StaticCast::staticcast.display();
    StaticCast::staticcast.ConvertToChar();
    StaticCast::staticcast.display();
    return EXIT_SUCCESS;
}