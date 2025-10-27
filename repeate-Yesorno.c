#include<stdio.h>

int main(){
    char a;
    printf("Enter Y or N: ");
    scanf(" %c", &a);

    while (a == 'Y')
    {
     printf("Enter Y or N: ");
     scanf(" %c", &a);
    }
    return 0;
}