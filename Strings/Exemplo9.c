#include <stdio.h>
#include <string.h>
int main() {
    char nome[30];
    printf("\nDigite seu nome: ");
    gets(nome);
    printf("\nSeu nome: %s\n", nome); // ou puts(nome)
}