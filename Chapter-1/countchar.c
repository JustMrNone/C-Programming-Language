#include <stdio.h>


int main()
{
    long count = 0;

    while(getchar() != EOF)
        ++count;

    printf("%ld\n", count);
        
    
}

/*While Without curly braces: Only the first statement after the while loop is executed repeatedly.
while With curly braces: All the statements enclosed in {} are executed as a block during each iteration.
It's good practice to use curly braces, even when the body has only one statement, to avoid errors when modifying the loop later.*/