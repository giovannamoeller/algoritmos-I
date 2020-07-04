#include <stdio.h>

int main() {
    int x, n[10], i;
    scanf("%d", &x);
    for (i = 0; i < 10; i++) {
        n[i] = x;
        printf("N[%d] = %d\n", i, x);
        x *= 2;
    }
}