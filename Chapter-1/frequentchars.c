#include <stdio.h>
#include <ctype.h>

int main()
{
    char a[26];
    for(int i = 0; i < 26; i++)
        a[i] = i + 'A';

    int count[26];
    for(int i = 0; i < 26; i++)
        count[i] = 0;
    int c;
    while((c = getchar()) != EOF)
    {
        c = toupper(c);
        if(c >= 'A' && c <= 'Z')
        {
            int index = c - 'A';
            count[index]++;
        }
    }
    for(int j = 0; j < 26; j++)
        printf("%c: %d\n", a[j], count[j]);

}