#include <stdio.h>
#include "series_square.h"

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Sum of squares: %d\n", series_squares_while(n));

    return 0;
}