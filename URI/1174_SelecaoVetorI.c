#include <stdio.h>

int main() {
    double a[100];
    int i;
    for (i = 0; i < 10; i++) {
        scanf("%lf", &a[i]);
    }
    for (i = 0; i < 10; i++) {
        if (a[i] <= 100) {
            printf("A[%d] = %.2lf\n", i, a[i]);
        }
    }
}