#include <stdio.h>

int main() {

    float num, frac;
    int inteiro;
    printf("Digite um numero: ");
    scanf("%f", &num);
    inteiro = num;
    frac = num - inteiro;
    printf("A parte fracionaria de %f eh %f ", num, frac);
}