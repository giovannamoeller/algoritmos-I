#include <stdio.h>
#include <math.h>

double calcula_Raio(double raio) {
    double volume;
    volume = (4 * M_PI * pow(raio, 3)) / 3;
    return volume;
}

int main () {
    double raio;
    printf("Digite o valor do raio: ");
    scanf("%lf", &raio);
    printf("O valor do volume é de: %.2lf cm3\n\n", calcula_Raio(raio));
}