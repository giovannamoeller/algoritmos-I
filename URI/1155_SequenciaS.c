#include <stdio.h>

int main() {

    int x = 1;
    double soma = 0;
    do {
        soma += 1.0 / (double)x;
        x++;
    } while (x <= 100);
    printf("%.2f\n", soma);
}