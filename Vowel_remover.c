#include <stdio.h>

int main()
{
    char str[200], result[200];
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        // Check if ch is NOT a vowel (uppercase or lowercase)
        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
              ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'))
        {
            result[j] = ch; // Keep the character
            j++;
        }
    }

    result[j] = '\0'; // End the new string

    printf("String after removing vowels: %s\n", result);

    return 0;
}