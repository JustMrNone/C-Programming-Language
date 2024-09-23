#include <stdio.h>

int main()
{
    int c, i, nwhite, nother;
    int digs[10];
    nwhite = nother = 0;
    for(int i = 0; i < 10; ++i)
        digs[i] = 0;
    while((c = getchar()) != EOF)
        if(c >= '0' && c <= '9')
            ++digs[c - '0'];
        else if(c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else 
            ++nother;
    printf("digits: ");
    for(int i = 0; i < 10; ++i)
        printf(" %d", digs[i]);
    printf(", white space = %d, other = %d\n", nwhite, nother);
    return 0;
}