#include <stdio.h>

int main()
{
    char str[300];
    int i = 0, words = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Skip initial spaces
    while (str[i] == ' ')
    {
        i++;
    }

    // Count transitions from space → non-space
    while (str[i] != '\0')
    {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0' && str[i + 1] != '\n')
        {
            words++;
        }
        i++;
    }

    // If string is not empty, add 1 word
    if (i > 0 && str[0] != '\n' && str[0] != '\0')
    {
        words++;
    }

    printf("Total number of words: %d\n", words);

    return 0;
}