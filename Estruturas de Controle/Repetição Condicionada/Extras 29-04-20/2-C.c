#include <stdio.h>

int main() {
    int num = 1, den = 10000;
    double resultado1 = 0, resultado2 = 0;
    do {
        if (den % 2 == 0) {
            resultado1 -= (double) num / den;
        }
        else {
            resultado2 += (double) num / den;
        }
        den--;
    } while(den >= 1);
    printf("%.2lf %.2lf\n", resultado1, resultado2);
}