#include<stdio.h>
#include<string.h>

char parser(char *str)
{
    char *startTag = strchr(str, '<');
    char *endTag = strchr(str, '>');

    while (startTag && endTag && startTag < endTag)
    {
        memmove(startTag, endTag + 1, strlen(endTag + 1) + 1);
        startTag = strchr(str, '<');
        endTag = strchr(str, '>');
    }
    return *str;
}

int main()
{
    char String[] = "<h1> Hello World! </h1>";

    parser(String);

    printf("Parsed HTML content: %s\n", String);

    return 0;
}