#include <stdio.h>

int main() {
    int num = 1, den = 1;
    double resultado = 0;
    do {
        if (den % 2 == 0) {
            resultado -= (double) num / den;
        }
        else {
            resultado += (double) num / den;
        }
        den++-;
    } while(den <= 10000);
    printf("%.2lf\n", resultado);
}