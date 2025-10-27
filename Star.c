#include<stdio.h>

int main(){
    int i, j, n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) /*To make a row.*/ {
        for (j = 0; j < n; j++) /*To make a coloum.*/ {
            if (i + j >= n-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            // printf("*");
        }
        printf("\n");
    }
    return 0;
}