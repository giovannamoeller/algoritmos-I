#include <stdio.h>

int main() {

    int n, i = 0;
    float x, y;
    scanf("%d", &n);
    while (n > i){
        scanf("%f %f", &x, &y);
        n--;
        y == 0 ? printf("divisao impossivel\n") : printf("%.1f\n", x / y);
    }
}