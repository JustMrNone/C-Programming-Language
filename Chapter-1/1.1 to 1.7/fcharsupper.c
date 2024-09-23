#include <stdio.h>
#define ALPHABET_SIZE 26
#define DIGIT_SIZE 10

int main()
{
    char al[ALPHABET_SIZE];
    for(int i = 0; i < ALPHABET_SIZE; i++)
        al[i] = i + 'a';

    int countl[ALPHABET_SIZE];
    for(int i = 0; i < ALPHABET_SIZE; i++)
        countl[i] = 0;

    char au[ALPHABET_SIZE];
    for(int i = 0; i < ALPHABET_SIZE; i++)
        au[i] = i + 'A';

    int count[ALPHABET_SIZE];
    for(int i = 0; i < ALPHABET_SIZE; i++)
        count[i] = 0;

    int nums[DIGIT_SIZE];
    for(int i = 0; i < DIGIT_SIZE; i++)
        nums[i] = i;

    int countn[DIGIT_SIZE];
    for(int i = 0; i < DIGIT_SIZE; i++)
        countn[i] = 0;

    int c;

    while((c = getchar()) != EOF)
    {
        if (c == EOF && ferror(stdin))
        {
            perror("Input error");
            return 1;
        }
        if(c >= 'A' && c <= 'Z')
        {
            count[c - 'A']++;
        }
        else if(c >= 'a' && c <= 'z')
        {
            countl[c - 'a']++;
        }
        else if(c >= '0' && c <= '9')
        {
            countn[c - '0']++;
        }
    }

    printf("Uppers\tLowers\n");
    for(int j = 0; j < ALPHABET_SIZE; j++)
        printf("%c: %d\t%c: %d\n", au[j], count[j], al[j], countl[j]);

    printf("Digits\n");
    for(int j = 0; j < DIGIT_SIZE; j++)
        printf("%d: %d\n", j, countn[j]);

}