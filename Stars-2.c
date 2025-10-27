#include<stdio.h>

int main(){
    int i, j, n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) /*To make a row.*/ {
        for (j = 0; j < 2*n; j++) /*To make a coloum.*/ {
            if (j >= n -1 - i && j <= n - 1 + i)
            {
                printf("*");
            }
            // else if (i+j <= n)
            // {
            //     printf("*");
            // }
            // else if (i == j == n/2)
            // {
            //     printf("*");
            // }
            else 
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}