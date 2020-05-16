#include <stdio.h>

int main() {

    int a, n, i, soma = 0;
    scanf("%d %d", &a, &n);
    while (n <= 0) {
        scanf("%d", &n);
    }
    for (i = 1; i <= n; i++) {
        soma += a;
        a++;
    }
    printf("%d\n", soma);
}