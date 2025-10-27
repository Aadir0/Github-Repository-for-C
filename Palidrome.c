#include<stdio.h>

int main(){
    int num, q, rem = 0, reverse = 0;
    printf("Enter your number = ");
    scanf("%d", &num);

    q = num;

    while (q != 0)
    {
        rem = q%10;
        reverse = reverse * 10 + rem;
        q = q/10;
    }
    if (reverse == num)
        printf("The number is Palidrome.");
    else 
        printf("The number is not a Palidrome.");

    return 0;
}