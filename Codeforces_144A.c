#include <stdio.h>
#include <ctype.h>

int main()
{
    int n;
    scanf("%d", &n);
    int sold[n];
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &sold[i]);
    }
    int max = 0;
    int min = 101;
    for (int i = 0; i < n; ++i)
    {
        if (sold[i] <= min)
        {
            min = sold[i];
        }
        if (sold[i] >= max)
        {
            max = sold[i];
        }
    }
    int max_pos = 0, min_pos = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (sold[i] == max)
        {
            max_pos = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; --i)
    {
        if (sold[i] == min)
        {
            min_pos = i;
            break;
        }
    }
    int ans = max_pos + (n - 1 - min_pos);
    if (max_pos > min_pos)
    {
        ans--;
    }

    printf("%d\n", ans);
    return 0;
}
