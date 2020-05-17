#include <stdio.h>

// passagem de parâmetros por referência
// *a e *b: ponteiros que recebem os endereços de x e y

void troca(int *a, int *b);

int main() {
    int x = 10, y = 20;
    printf("x = %d y = %d\n", x, y);
    troca(&x, &y);
    printf("x = %d y = %d\n", x, y);
}

void troca(int *a, int *b) {
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}