
#include "test_01.h"

#include <cmath>

//#define DEBUG
#ifdef DEBUG
#include <iostream>
#endif

int solution(int Q)
{
    const int max_possible_nm = std::floor(std::sqrt(Q));
    int i, j;
    for (i = 0; i <= max_possible_nm; ++i)
    {
        const long long n2 = i * i;
        for (j = 0; j <= max_possible_nm; ++j)
        {
            const long long m2 = j * j;
#ifdef DEBUG
            std::cout << i << "^2 + " << j << "^2 = " << m2 << " + " << n2 << " = " << Q << std::endl;
#endif
            if (n2 + m2 == Q)
            {
                return (i == j) ? ((i == 0) ? 1 : 4) : 8;
            }
        }
    }

    return 0;
}
