#include <stdio.h>
#include <stdlib.h>

int main() {
    char vet[100][5];
    int i;
    for (i = 0; i < 5; i++){
        printf("\nDigite a frase: ");
        scanf("%s", &vet[i]);
        fflush(stdin); // limpa buffer do teclado
    }
    for (i = 0; i < 5; i++){
        puts(vet[i]);
    }
}