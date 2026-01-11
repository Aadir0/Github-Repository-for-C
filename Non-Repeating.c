#include <stdio.h>

int main()
{
    char str[300];
    int freq[256] = {0}; // Frequency array for all ASCII characters
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // 1. Count frequency of each character
    for (i = 0; str[i] != '\0'; i++)
    {
        unsigned char ch = str[i];
        freq[ch]++;
    }

    // 2. Find the first character with frequency = 1
    for (i = 0; str[i] != '\0'; i++)
    {
        unsigned char ch = str[i];
        if (freq[ch] == 1 && ch != '\n')
        {
            printf("First non-repeating character: %c\n", ch);
            return 0;
        }
    }

    printf("No non-repeating character found.\n");

    return 0;
}