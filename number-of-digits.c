#include<stdio.h>

int main(){
    int a = 123456, count = 0;
    
    while (a != 0)
    {
        a = a/10;
        count++;
    }
    printf("The number of integers in the number is %d", count);
    
    return 0;
}