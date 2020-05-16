#include <stdio.h>

int main(){

    int i, n;
    float x1, x2, x3;
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        scanf("%f %f %f", &x1, &x2, &x3);
        printf("%.1f\n", ((2 * x1) + (3 * x2) + (5 * x3)) / 10);
    }
}