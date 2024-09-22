#include <stdio.h>

int main()
{
    int character;
    int count = 0;

    while((character = getchar()) != EOF)
        if (character == ' ' || character == '\n' || character == '\t')
            ++count;

    printf("%i", count);
}