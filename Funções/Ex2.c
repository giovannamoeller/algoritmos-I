#include <stdio.h>

int soma(int x, int y) {
    int maior, menor, soma = 0;
    if (x >= y) {
        maior = x;
        menor = y;
    } else {
        maior = y;
        menor = x;
    }
    for (int i = menor + 1; i < maior; i++) {
        soma += i;
    }
    return soma;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("Soma = %d\n", soma(x, y));
}

