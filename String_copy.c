#include <stdio.h>

int main()
{
    char source[200], destination[200];
    int i = 0;

    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);

    // Copy characters manually
    while (source[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }

    destination[i] = '\0'; // End destination string

    printf("Copied string: %s", destination);

    return 0;
}