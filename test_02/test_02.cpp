
#include "test_02.h"

#include <limits>

#include <cmath>

//#define DEBUG
#ifdef DEBUG
#include <iostream>
#endif

int distance(int a, int b)
{
    return a > b ? a - b : b - a;
}

int solution(std::vector<int>& A)
{
    int min_d = std::numeric_limits<int>::max();

    const int n = A.size();
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            const int d = distance(A[i], A[j]);
#ifdef DEBUG
            std::cout << "distance(" << A[i] << ", " << A[j] << ") = " << d << " vs. min = " << min_d << std::endl;
#endif
            if (d < min_d)
            {
                min_d = d;
            }
        }
    }

    return min_d;
}
