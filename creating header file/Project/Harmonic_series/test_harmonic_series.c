#include <stdio.h>
#include "harmonic_series.h"

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Harmonic series sum: %f\n", harmonic_for(n));

    return 0;
}