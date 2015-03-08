
#include "test_03.h"

#include <iostream>

#include <cstdlib>

int main(int argc, char* argv[])
{
  int A, B;

  std::cin >> A >> B;

  int n = solution(A, B);
  std::cout << "n = " << n << std::endl;

  return EXIT_SUCCESS;
}
