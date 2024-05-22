#include <stdio.h>
#include <string.h>

int main() {
    char username[1024];
    scanf("%s", username);
    int count = 0;
    int n = strlen(username);
    for (int i = 0; i < n; i++) {
        int isDistinct = 1;
        for (int j = 0; j < i; j++) {
            if (username[i] == username[j]) {
                isDistinct = 0;
                break;
            }
        }
        if (isDistinct) {
            count++;
        }
    }
    if (count%2 == 0) {
        printf("CHAT WITH HER!\n");
    }
    else {
        printf("IGNORE HIM!\n");
    }
}
