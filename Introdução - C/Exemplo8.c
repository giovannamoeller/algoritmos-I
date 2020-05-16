#include <stdio.h>

int main () {

    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("\nO numero eh %d", num);
    printf("\nO endereco eh %x", &num);
}