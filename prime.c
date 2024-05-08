# include <stdio.h>
# include <math.h>
int main() {
    int n;
    scanf("%d", &n);
    int bool = 1;
    if (n <= 1)
    {
        bool = 0;
    }
    else {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                bool = 0;
                break;
            }
        }
    }
    if (bool == 1)
    {
        printf("Prime\n");
    }
    else
    {
        printf("Not Prime\n");
    }
    return 0;
}