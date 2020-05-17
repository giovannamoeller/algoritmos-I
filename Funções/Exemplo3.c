#include <stdio.h>

float soma () {
    float a, b;
    printf ("\nDigite um numero real: ");
    scanf ("%f", &a);
    printf ("\nDigite um outro numero real: ");
    scanf ("%f", &b);
    return a + b;
}

int main() {
    printf ("\nTotal: %.2f\n", soma());
}