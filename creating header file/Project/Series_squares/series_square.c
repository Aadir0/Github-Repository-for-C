#include "series_square.h"

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