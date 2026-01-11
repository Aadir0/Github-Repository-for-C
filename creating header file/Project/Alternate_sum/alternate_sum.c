#include "alternate_sum.h"

int alternate_sum_for(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            sum -= i;
        else
            sum += i;
    }
    return sum;
}