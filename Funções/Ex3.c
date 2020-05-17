#include <stdio.h>

int soma(int a, int b, int c) {
    int maior, menor, soma = 0;
    if (b >= c) {
        maior = b;
        menor = c;
    } else {
        maior = c;
        menor = b;
    }
    for (int i = menor; i <= maior; i++) {
        if (i % a == 0) {
            soma += i;
        }
    }
    return soma;
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    while (a < 1) {
        printf("Valor de a invalido! Redigite: ");
        scanf("%d", &a);
    }
    printf("Resultado = %d\n", soma(a, b, c));
}

