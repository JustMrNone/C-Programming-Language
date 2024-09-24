#include <stdio.h>
#define MAXLINE 1000
void copy(char to[], char from[]);
int getline(char s[], int lim);
int main()
{
    int len;
    int max;
    char line[MAXLINE];
    char longset[MAXLINE];

    max = 0;

    while((len = getline(line, MAXLINE)) > 0)
        if (len > max)
        {
            max = len;
            copy(longset, line);
        }
    if(max > 0)
        printf("%s", longset);
    return 0;
}

int getline(char s[], int lim)
{
    int c, i;
    for(i = 0; i < lim-1 && (c=getchar()) != EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
void copy(char to[], char from[])
{
    int i = 0;
    while((to[i] = from[i]) != '\0')
        ++i;
}
//Asymptotic notation 