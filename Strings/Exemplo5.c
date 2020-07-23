#include <stdio.h>
#include <string.h>

int main() {
    char str[50], ch;
    strcpy(str, "Procura uma letra inicial de caracteres");
    ch = 'l';
    printf("%d\n\n", -(str-strchr(str, ch)));
    // strchr retorna qual posição da string o char se encontra - retorna um ponteiro
    // para obter o valor exato, é necessário subtrair o valor da string e multiplicar por -1
}