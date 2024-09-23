#include <stdio.h>

int main()
{
    int character;
    
    while((character = getchar()) != EOF)
        if(character == '\t')
            printf("\\t");
        else if(character == '\b')
            printf("\\b");
        else if(character == '\\')
            printf("\\\\");
        else
            putchar(character);
        
    return 0;
            
}