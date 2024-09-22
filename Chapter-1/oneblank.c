#include <stdio.h>

int main()
{
    int character;
    int space = 0;
    while((character = getchar()) != EOF)
        if(character == ' ')
        {
            if(!space)
            {
                putchar(character);
                space = 1;
            }
        }
        else
        {
            putchar(character);
            space = 0;
        }

    return 0;
                
        
}