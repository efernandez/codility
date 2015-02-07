
#include "equi.h"

//#define DEBUG
#ifdef DEBUG
#include <numeric>

#include <iostream>
#endif

int solution(std::vector<int>& A)
{
    const int n = A.size();
    if (n == 0) return -1;

    std::vector<long long> C(n);
    // Note that with partial_sum there's overflow!!!
    // because the accumulation variable uses the input type.
    // (see http://en.cppreference.com/w/cpp/algorithm/partial_sum)
    // std::partial_sum(A.begin(), A.end(), C.begin());
    C[0] = A[0];
    for (int i = 1; i < n; ++i)
    {
        C[i] = C[i-1] + A[i];
    }

    long long s = C[n-1] - A[0];

    if (s == 0) return 0;

    for (int i = 1; i < n; ++i)
    {
        s -= A[i];

#ifdef DEBUG
        std::cout << "C[" << i-1 << "] = " << C[i-1] << " vs. s = " << s << std::endl;
#endif

        if (C[i-1] == s) return i;
    }

    return -1;
}
