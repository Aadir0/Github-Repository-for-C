#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    if (x < 0) {
        printf("x is negative!\n");
        return 1;  // Error code 1: x was negative
    }
    else if (x == 0) {
        printf("x is 0!\n");
        return 2;  // Error code 2: x was zero
    }
    else {
        printf("x is positive!\n");
        return 0;  // Success
    }
}