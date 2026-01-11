#include <stdio.h>

int main()
{
    char str1[200], str2[200];
    int i = 0;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Compare character by character
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            printf("Strings are NOT equal.\n");
            return 0;
        }
        i++;
    }

    printf("Strings are equal.\n");

    return 0;
}