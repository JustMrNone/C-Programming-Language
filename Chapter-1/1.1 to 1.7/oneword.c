//character == ' ' || character == '\n' || character == '\t'
#include <stdio.h>

int main()
{
    int character;
    while((character = getchar()) != EOF)
        if(character == ' ' || character == '\n' || character == '\t')
            putchar('\n');
        else
            putchar(character);
        
}