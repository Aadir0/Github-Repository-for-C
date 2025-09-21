#include<stdio.h>

int main(){
    int a,b;
    char z;
    printf("Enter your two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter your operator: ");
    scanf(" %c", &z);

    if (z == '*')
    {
    printf("Your Value is %d\n", a*b);
}
else if (z == '+')
{
    printf("Your value is %d\n", a+b);
}
else if (z == '-')
{
   printf("Your value is %d\n", a-b);
}
else if (z == '/')
{
    printf("Your value is %d\n", a/b);
}
else {
    printf("Invalid operator!\n");
}
    return 0;
}