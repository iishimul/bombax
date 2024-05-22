# include <stdio.h>
int main()
{
    int p, s, nr = 0;
    scanf("%d %d", &p, &s);
    int ar[p];
    for (int i = 0; i < p; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i = 0; i < p; i++)
    {
        if (ar[i] > 0 && ar[i] >= ar[s - 1])
        {
            nr += 1;
        }
    }
    printf("%d\n", nr);
    return 0;
}
