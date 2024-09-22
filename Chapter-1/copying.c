#include <stdio.h>

int main()
{
    char a;
    a = getchar();
    while(a != EOF)
    {
        putchar(a);
        a = getchar();
    }
    return 0;
}