#include <stdio.h> 

int main()
{
    int c;
    while((c = getchar()) != EOF)
    {
        //Verify that the expression getchar ( ) 1 = EOF is 0 or 1.
        printf("expression getchar() ! = EOF is %i\n", (c = getchar()) != EOF);
        //Write a program to print the value of EOF.
        printf("EOF value is %i\n", EOF);
        break;
    }
    printf("Program is terminated.");
    return 0;
}