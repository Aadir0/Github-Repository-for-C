#include "header.h"

int smallest_digit_for(int n)
{
    int small = 9;
    for (; n > 0; n /= 10)
    {
        int d = n % 10;
        if (d < small)
            small = d;
    }
    return small;
}

int series_sum_for(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i;
    return sum;
}

int series_squares_while(int n)
{
    int sum = 0;
    int i = 1;
    while (i <= n)
    {
        sum += i * i;
        i++;
    }
    return sum;
}

float harmonic_for(int n)
{
    float sum = 0.0;
    for (int i = 1; i <= n; i++)
        sum += 1.0f / i;
    return sum;
}

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