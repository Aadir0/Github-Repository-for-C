#include <stdio.h>
#include "series_sum_for.h"

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Sum of 1..n: %d\n", series_sum_for(n));

    return 0;
}