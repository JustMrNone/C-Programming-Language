#include <stdio.h>
#define MAX 1000
#define MAXLEN 80

int main(void)
{
    int character; 
    int count = 0; 
    char line[MAX];

    printf("enter an string longer than 80 and press enter: \n");
    for(int i = 0; i < MAX && (character = getchar()) != EOF ; i++)
    {
        line[i] = character;
        count++;

        if(character == '\n')
        {
            if(count - 1 > MAXLEN)
            {
                line[count - 1] = '\0';
                printf("%s", line);
            }
            else
            {
                printf("the goal of this program is to output strings that are longer than 80\n");
            }
            // Reset for the next line
            count = 0;
            i = -1; // Reset the index for the next line
            printf("Enter a string longer than 80 characters and press enter:\n");
        }       
    }

    return 0;
}