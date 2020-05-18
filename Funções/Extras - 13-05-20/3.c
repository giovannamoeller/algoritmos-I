#include <stdio.h>

float cubo (float x) {
    return x * x * x;
}

int main() {
    float n;
    printf("Digite um numero: ");
    scanf("%f", &n);
    printf("Cubo de %.2f = %.2f\n", n, cubo(n));
}



