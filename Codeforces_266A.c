#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    char rbg[n];
    scanf("%s", rbg);
    int count = 0;
    for (int i = 0; i < n-1; i++) {
        if (rbg[i] == rbg[i+1]) {
            count++;
        }
    }
    printf("%d\n", count);
}
