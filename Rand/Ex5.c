#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int calculaRand(int *x, int *y) {
    return rand() % (*y - *x) + *x;
}

int main() {
    int x, y;
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        printf("%d\n", (calculaRand(&x, &y)));
    }
}
