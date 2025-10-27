#include<stdio.h>

int main(){
    int i, n, sum = 0;
    printf("Enter a the number you find the sum till: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;

        /* Uncomment this block to see one straight answer for the sum */
        if (i == n)
        {
            printf("The sum of first %d natural numbers is: %d\n", n, sum);
            break;
        }

        /* Uncomment this line to see the sum at each step */
        // printf("The sum of first %d natural numbers is: %d\n", i, sum); 
        
    }
    return 0;
}