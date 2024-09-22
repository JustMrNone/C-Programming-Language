#include <stdio.h> 

int main()
{
    float cel, fahr;
    int lower = 0, upper = 300, step = 20;
    fahr = lower;
    printf(" Fahr\t Cel\t \n ");
    while(fahr <= upper)
    {
        cel = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f\t%6.1f\n", fahr, cel);
        fahr = fahr + step;
    }
}