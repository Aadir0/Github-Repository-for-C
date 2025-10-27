#include <stdio.h>

int main() {
    int n, num, i, count;

    printf("Enter the range: ");
    scanf("%d", &n);

    printf("The prime numbers between 1 and %d are: ", n);

    // for (num = 2; num <= n; num++) {
    //     count = 0;
    //     for (i = 2; i <= num / 2; i++) {
    //         if (num % i == 0) {
    //             count++;
    //             break;
    //         }
    //     }
    //     if (count == 0) {
    //         printf("%d ", num);
    //     }
    // }
    // printf("\n");

    for (num = 2; num <= n; num++) /* This line is to determine the number */{
        for (i = 2; i < num; i++) /* This line is to check whether the number is prime or not since we divide num by every number less than itself and greater than 1 */{
            if (num % i == 0) /* If the number is divisible by any number other than 1 and itself then we will break it.*/ {
                break;
            }
        }
        if (i == num) {
            printf("%d, ", num);
        }
    }
    return 0;
}