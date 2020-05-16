#include <stdio.h>
 
int main() {
 
    int tempo, velocidade;
    int km = 12;
    double distancia, resultado;
    scanf("%d %d", &tempo, &velocidade);
    distancia = tempo * velocidade;
    resultado = distancia / km;
    printf("%.3lf\n", resultado);
}