#include <stdio.h>
#include <math.h>

int arredonda(double x) {
    float parte_inteira, parte_decimal;
    parte_inteira = floor(x);
    parte_decimal = x - parte_inteira;
    if (parte_decimal >= 0.5) {
        return parte_inteira + 1;
    } else {
        return parte_inteira;
    }
}

int main () {
    double x;
    printf("Digite um numero: ");
    scanf("%lf", &x);
    arredonda(x);
    printf("%.2lf arredondado é %.0d\n\n", x, arredonda(x));
}