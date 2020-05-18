#include <stdio.h>
#include <math.h>

int main() {
    int n, i = 1, j = 1, valor = 0, k = 1;
    scanf("%d", &n);
    while (i <= n) {
        valor = pow(i, 2);
        while (j <= n) {
            printf("%d ", valor);
            j++;
        }
        printf("\t");
        i++;
        j = i;
    }
}