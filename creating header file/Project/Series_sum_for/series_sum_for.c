#include "series_sum_for.h"

int series_sum_for(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i;
    return sum;
}