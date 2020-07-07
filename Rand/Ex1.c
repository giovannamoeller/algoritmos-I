#include <stdio.h>
#include <stdlib.h>

int calculaRand(int *x, int *y) {
    int valorAleatorio;
    valorAleatorio =  *x + (rand() % (*y - *x));
    printf("%d %d %d\n", *x, *y, valorAleatorio);
    return valorAleatorio;
}

int main() {
    int x, y;
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);
    printf("Numero aleatorio entre %d e %d = %d\n", x, y, (calculaRand(&x, &y)));
}
