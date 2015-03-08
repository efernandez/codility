
#include "test_03.h"

#include <cmath>

//#define DEBUG
#ifdef DEBUG
#include <iostream>
#endif

bool is_prime(int x)
{
    if (x % 2 == 0)
    {
        return false;
    }

    const double max_possible_divisor = std::sqrt(x);
    for (int i = 3; i <= max_possible_divisor; i += 2)
    {
        if (x % i == 0)
        {
#ifdef DEBUG
            std::cout << x << " is divisible by " << i << std::endl;
#endif
            return false;
        }
    }

    return true;
}

int solution(int A, int B)
{
    unsigned int count = 0;

    for (int i = A; i <= B; ++i)
    {
        if (is_prime(i))
        {
            ++count;
        }
    }

    return count;
}

