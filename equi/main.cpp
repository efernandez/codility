
#include "equi.h"

#include <iostream>
#include <algorithm>
#include <iterator>

int main(int argc, char* argv[])
{
  std::vector<int> v;

  int x;
  while (std::cin >> x)
  {
    v.push_back(x);
  }
  std::cout << "v = ";
  std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));
  std::cout << std::endl;

  int p = solution(v);
  std::cout << "p = " << p << std::endl;

  return EXIT_SUCCESS;
}
