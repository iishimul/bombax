#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        arr[i] = 0;
    }
    int a, lev;
    scanf("%d", &a);
    while (a--)
    {
        scanf("%d", &lev);
        arr[lev] = 1;
    }
    scanf("%d", &a);
    while (a--)
    {
        scanf("%d", &lev);
        arr[lev] = 1;
    }
    int can = 1;
    for (int i = 1; i < n + 1; i++)
    {
        if (arr[i] == 0)
        {
            can = 0;
            break;
        }
        else
        {
            continue;
        }
    }
    if (can == 1)
    {
        printf("I become the guy.\n");
    }
    else
    {
        printf("Oh, my keyboard!");
    }
    return 0;
}
