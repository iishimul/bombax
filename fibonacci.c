#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    double ar[n + 1];
    ar[0] = 1;
    ar[1] = 1;
    for (int i = 2; i <= n; ++i)
    {
        ar[i] = ar[i - 1] + ar[i - 2];
    }
    printf("0 ");
    for (int j = 0; j < n-1; ++j)
    {
        printf("%.lf ", ar[j]);
    }
}