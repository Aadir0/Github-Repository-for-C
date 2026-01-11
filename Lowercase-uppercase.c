#include <stdio.h>

int main()
{
    char str[200];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        // Convert lowercase → uppercase
        if (ch >= 'a' && ch <= 'z')
        {
            str[i] = ch - ('a' - 'A'); // or str[i] = ch - 32;
        }
        // Convert uppercase → lowercase
        else if (ch >= 'A' && ch <= 'Z')
        {
            str[i] = ch + ('a' - 'A'); // or str[i] = ch + 32;
        }
    }

    printf("Converted string: %s", str);

    return 0;
}
