#include <stdio.h>
#include "smallest_digit.h"

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Smallest digit: %d\n", smallest_digit_for(n));

    return 0;
}