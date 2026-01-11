#include <stdio.h>

int main()
{
    char str1[200], str2[200];
    int count1[256] = {0}, count2[256] = {0};
    int i;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Count frequency of each character (ASCII-based)
    for (i = 0; str1[i] != '\0'; i++)
    {
        count1[(unsigned char)str1[i]]++;
    }

    for (i = 0; str2[i] != '\0'; i++)
    {
        count2[(unsigned char)str2[i]]++;
    }

    // Compare the two frequency arrays
    for (i = 0; i < 256; i++)
    {
        if (count1[i] != count2[i])
        {
            printf("The strings are NOT anagrams.\n");
            return 0;
        }
    }

    printf("The strings ARE anagrams!\n");
    return 0;
}