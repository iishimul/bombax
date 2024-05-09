#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char s[100];
    gets(s);
    int len = 0;
    while (s[len] != '\0')
    {
        len++;
    }
    int yes = 1;
    for (int i = 0; i < len; i++)
    {
        if (tolower(s[i]) == tolower(s[len -1 - i]))
        {
            yes = 1;
        }
        else
        {
            yes = 0;
            break;
        }
    }
    if (yes == 1)
    {
        printf("%s is a palindrome", s);
    }
    else
    {
        printf("%s is not a palindrome", s);
    }
}
