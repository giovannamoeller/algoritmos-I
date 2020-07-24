#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ocorrencias(char string[50], char c) {
    int cont = 0;
    for(int i = 0; i <= strlen(string); i++) {
        if(string[i] == c) cont++;
    }
    printf("O numero de ocorrencias eh de %d\n\n", cont);
}

int main() {
    char string[50], c;
    printf("Digite uma string: ");
    gets(string);
    printf("\nDigite um caractere: ");
    scanf("%c", &c);
    ocorrencias(string, c);
}