
#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);       // input number of rows
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

