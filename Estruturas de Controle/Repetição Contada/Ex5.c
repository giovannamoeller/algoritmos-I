#include <stdio.h>

int main() {

    float x, y, soma = 0;
    for (x = 1, y = 1; y <= 50; x += 2, y++) { 
        soma += x / y;
    }
    printf("Somatorio = %.2f\n", soma);
}