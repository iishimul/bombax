#include <stdio.h>
#include <string.h>

int main() {
    int steps[5] = {1, 2, 3, 4, 5};
    int num;
    scanf("%d", &num);
    int count = 0;
    for (int i = 4; i >= 0; i--) {
        while (num >= steps[i]){
            num -= steps[i];
            count++;
        }
    }
    printf("%d\n", count);
}
