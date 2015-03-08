
#include "test_01.h"

#include <iostream>

#include <cstdlib>

int main(int argc, char* argv[])
{
  int Q;
  std::cin >> Q;

  int n = solution(Q);
  std::cout << "n = " << n << std::endl;

  return EXIT_SUCCESS;
}
