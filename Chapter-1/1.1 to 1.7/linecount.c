#include <stdio.h>

int main()
{
    int count;
    
    while ((count = getchar()) != EOF)
        if (count == '\n')
            ++count;

        printf("%d", count);
}