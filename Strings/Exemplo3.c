#include <stdio.h>
#include <string.h>

int main() {
    char str[50], ch;
    strcpy(str, "Tamanho de caracteres da frase.");
    printf("%d\n\n", strlen(str)); // strlen conta o tamanho da string desprezando o \0
}