#include <stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    while (t != 0)
    {
        int d = 1;
        scanf("%d",&n);
        for (int i = 1; i <= n; i++)
        {
            d *= i;
        }
        printf("%d\n", d);
    t = t - 1;
    }
}