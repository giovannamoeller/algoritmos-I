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
    float total;
    total = soma(); // função sendo armazenada em uma variável
    printf ("\nSoma: %.2f\n",total);
}