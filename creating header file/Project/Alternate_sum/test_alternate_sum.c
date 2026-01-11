#include <stdio.h>
#include "alternate_sum.h"

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Alternating sum: %d\n", alternate_sum_for(n));

    return 0;
}