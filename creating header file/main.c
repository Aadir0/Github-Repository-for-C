#include <stdio.h>
#include "header.h"

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Smallest digit: %d\n", smallest_digit(n));
    printf("Sum of 1..n: %d\n", sum_series(n));
    printf("Sum of squares: %d\n", sum_squares(n));
    printf("Harmonic series sum: %.4f\n", harmonic_series(n));
    printf("Alternating sum: %d\n", alternating_sum(n));

    return 0;
}