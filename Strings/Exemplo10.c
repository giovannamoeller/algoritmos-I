#include <stdio.h>
#include <string.h>

int main() {
    char str[10];
    int num;
    printf ("Digite uma string(numero): ");
    gets(str);
    num = atoi(str) + 10;
    printf("Numero fornecido acrescido de 10 unidades: %d", num);
    // atoi - converte string em número inteiro
}