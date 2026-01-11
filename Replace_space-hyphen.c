#include <stdio.h>

int main()
{
    char str[300];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Replace spaces
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            str[i] = '-';
        }
        i++;
    }

    printf("Modified string: %s", str);

    return 0;
}