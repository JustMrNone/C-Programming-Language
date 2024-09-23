#include <stdio.h>

int main()
{
    int lendig[100];  // Array to store word length counts

    // Initialize the array to zero
    for (int i = 0; i < 100; i++)
        lendig[i] = 0;
    
    int c;
    int count = 0;  // To track the current word length

    // Read input character by character
    while ((c = getchar()) != EOF)
    {
        // Check if the character is a word boundary (space, newline, tab)
        if (c == ' ')
        {
            if (count > 0)  // Only if we've seen a word
            {
                lendig[count]++;  // Increment the count for the word length
                count = 0;        // Reset count for the next word
            }
        }
        else
        {
            count++;  // Increase word length for non-whitespace characters
        }
    }

    // Handle the last word if the input doesn't end with a space
    if (count > 0)
        lendig[count]++;

    // Output the histogram data for word lengths from 1 to 9
    printf("Word Lengths:\n");
    for (int i = 1; i < 10; i++)
        printf("%i:\t%i\n", i, lendig[i]);

    return 0;
}
