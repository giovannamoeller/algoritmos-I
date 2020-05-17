#include <stdio.h>

// passagem de parâmetros por valor

float soma (float x, float y) {
    return x + y;
}

int main() {
    float a, b;
    printf ("\nDigite um numero real: ");
    scanf ("%f", &a);
    printf ("\nDigite um outro numero real: ");
    scanf ("%f", &b);
    printf ("\n%.2f + %.2f = %.2f", a, b, soma(a, b));
}
