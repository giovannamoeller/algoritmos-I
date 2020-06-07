#include <stdio.h>

int main() {
    float soma = 0, n = 0;
    int cont = 0;
    while (n != -99) {
        scanf("%f", &n);
        if (n != -99) {
            cont++;
            soma += n;
        }
    }
    printf("Soma dos valores = %.2f\n", soma);
    printf("Media dos valores = %.2f\n", (float)soma/cont);
}