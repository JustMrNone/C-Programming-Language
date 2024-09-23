#include <stdio.h>

int main()
{
    float cel, far, lower = 0, upper = 300, step = 10;

    far = lower;

    while(far <= upper)
    {
        //C = (5/9)(F-32)
        cel = 5 * (far - 32) / 9;
        printf("%3d %6d\n", far, cel);
        far += step;
    }

    // single line

    /*
    Multi
    Line
    */



}