#include <stdio.h>

int main() {

    int x, cont = 0, soma = 0;
    do {
        scanf("%d", &x);
        if (x < 0) break;
        cont++;
        soma += x;
    } while (x >= 0);
    printf("Total de valores lidos = %d\n", cont);
    printf("Soma dos valores lidos = %d\n", soma);
    printf("Media dos valores lidos = %.2f\n", (float)soma/cont);
}