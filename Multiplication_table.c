#include<stdio.h>

int main(){
    int i = 1, j;
    printf("Enter the number you want to find multiplication of: ");
    scanf("%d", &j);
        for (; i <= 10; i++)
        {
            printf("%d x %d = %d\n", j, i, j * i);
        }
    return 0;
}