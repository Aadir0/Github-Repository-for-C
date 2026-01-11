#include <stdio.h>

int main()
{
    char str[200];
    int freq[256] = {0};
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count frequency (ignoring case)
    for (i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if (ch == '\n')
        {
            continue;
        }
        // Convert uppercase to lowercase manually
        if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch + ('a' - 'A');
        }
        freq[(unsigned char)ch]++; // Count the character
    }
    // Display frequencies (only for characters that appear)
    printf("\nCharacter frequencies (ignoring case):\n");

    for (i = 0; i < 256; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c=%d\n", i, freq[i]);
        }
    }

    return 0;
}
