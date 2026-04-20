/*
  File Name: main.cpp
*/
#include <iostream>
#include <cstdint>
#include "traversal.hpp"
using namespace std;
// namespace array{
//   ArrayTraverse arrayTraverse_e;
// }
int main(int argc, char* argv[], char** env){
  uint32_t key=1;
  array::arrayTraverse_e.Array_Traversal(key);
  return EXIT_SUCCESS;
}