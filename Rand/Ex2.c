#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int calculaRand(int *x, int *y) {
    int valorAleatorio;
    valorAleatorio =  *x + (rand() % (*y - *x));
    return valorAleatorio;
}

int main() {
    int x, y;
    srand(time(NULL));
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);
    for (int i = 0; i < 3; i++) {
        printf("%d\n", (calculaRand(&x, &y)));
    }
}
