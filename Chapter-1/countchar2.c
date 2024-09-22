#include <stdio.h>

int main()
{
    double count;

    for(count = 0; getchar() != EOF; ++count)
        ;
    printf("%.0f\n", count);
}

/*The body of this for loop is empty, because all of the work is done in the
test and increment parts. But the grammatical rules of C require that a for
statement have a body. The isolated semicolon, called a null statement , is there
to satisfy that requirement.*/