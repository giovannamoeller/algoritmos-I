#include <stdio.h>
#include <string.h>

int main() {
    char str[10];
    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);
    itoa (num, str, 2); // base binária
    printf ("Valor binário: %s", str);
    itoa (num, str, 10); // base decimal
    printf("Valor decimal: %s", str);
    itoa (num, str, 16); // base hexadecimal
    printf("Valor hexadecimal: %s", str);
}