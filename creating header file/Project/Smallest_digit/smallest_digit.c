#include "smallest_digit.h"

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