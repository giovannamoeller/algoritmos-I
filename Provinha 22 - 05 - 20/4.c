#include <stdio.h>

int main() {
    int valores, aux, maior, maior2;
    printf("Entre com o primeiro numero: ");
    scanf("%d", &valores);
    maior = valores;
    maior2 = valores;
    printf("Entre com os outros numeros: ");
    for (int i = 1; i < 10; i++) {
        scanf("%d", &valores);
        if (valores > maior) {
            maior = valores;
        }
        else if (valores > maior2) {
            maior2 = valores;
        }
    }
    printf("Maior = %d e segundo maior = %d\n\n", maior, maior2);
}

