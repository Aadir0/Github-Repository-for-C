#include<stdio.h>

char main(void){
    int x;
    scanf("%d", &x);
    if (x<0)
    {
        printf("x is negative\n");
        return 'A';
    }
    else if (x == 0)
    {
        printf("x is 0\n");
        return 'B'; 
    }
    else if (x>0)
    {
        printf("x is positive\n");
        return 'C';
    }
}