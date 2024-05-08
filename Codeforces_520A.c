#include <stdio.h>
#include <ctype.h>

int main()
{
    int n;
    scanf("%d", &n);
    char str[n];
    scanf("%s", str);
    if (n < 26)
    {
        printf("NO");
        return 0;
    }
    int a[26] = {0};
    for (int i = 0; i < n; i++)
    {
        char c = tolower(str[i]);
        a[c - 'a'] = 1;
    }
    int yes = 1;
    for (int i = 0; i < 26; i++)
    {
        if (a[i] != 1)
        {
            yes = 0;
            break;
        }
    }
    if (yes == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
