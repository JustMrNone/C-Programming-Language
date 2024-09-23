#include <stdio.h>
#define IN 1
#define OUT 2
int main()
{
    int character, nline, nword, nchar, state;
    state = OUT;
    nline = nword = nchar = 1;
    while((character = getchar()) != EOF)
    {
        ++nchar;
        if(character = '\n')
            ++nline;
        if(character == ' ' || character == '\n' || character == '\t')
            state = OUT;
        else if(state == OUT)
        {
            state = IN;
            ++nword;
        }
        printf("%d %d %d \n", nline, nword, nchar);
    }
        
}