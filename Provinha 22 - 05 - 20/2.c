#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, soma = 0, x;
    printf("Digite um numero: ");
    scanf("%d", &n1);
    if (n1 < 0) {
        printf("Numero invalido!\n");
        exit(1);
    }
    while (n1 > 0) {
        x = n1 % 10;
        n1 /= 10;
        soma += x;
    }
    printf("Soma = %d\n\n", soma);
}