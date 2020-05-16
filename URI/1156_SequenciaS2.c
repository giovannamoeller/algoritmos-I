#include <stdio.h>

int main() {

    double x = 3, y = 2, soma = 1;
    do {
        soma += x / y;
        x += 2;
        y *= 2;
    } while (x <= 39);
    printf("%.2f\n", soma);
}