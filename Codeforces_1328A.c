#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int count = 0;
        long long a, b;
        scanf("%lld %lld", &a, &b);
        if (a % b == 0)
        {
            printf("0\n");
        }
        else
        {
            int rem = a % b;
            int res = b - rem;
            printf("%d\n", res);
        }
    }
}
