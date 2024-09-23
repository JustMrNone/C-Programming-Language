#include <stdio.h>
int power(int base, int num);
int main()
{
    for(int i = 0; i < 10; i++)
    {
        printf("%d %d %d\n", i, power(2,i), power(-3,i));
    }
    return 0;
}

int power(int base, int num)
{
    int p = 1;
    for(int i = 0; i <= num; ++i)
        p = p * base;
    
    return p;
}