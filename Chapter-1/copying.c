#include <stdio.h>

int main()
{
    int a;
    a = getchar();
    //EOF = End Of File
    while(a != EOF)
    {
        putchar(a);
        a = getchar();
    }
    return 0;
}