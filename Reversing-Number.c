#include<stdio.h>

int main(){
    int num, rem = 0, reverse = 0;
    printf("Enter your number = ");
    /* scanf("%d ", &num); The problem was I was leaving space just after the %d which makes compiler think that we have to type some extra words in their like alt, tab etc.*/
    scanf("%d", &num);

    while (num != 0)
    {
        rem = num%10;
        reverse = reverse * 10 + rem;
        num = num/10;
    }
    
    printf("reverse Number = %d", reverse);

    return 0;
}