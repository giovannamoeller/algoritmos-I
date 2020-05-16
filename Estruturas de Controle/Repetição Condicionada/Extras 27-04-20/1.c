#include <stdio.h>

int main(){

    double num = 480, den = 10, soma = 0;
    int i;
    for (i = 1; i <= 15; i++){
        (i % 2 == 0) ? (soma -= num/den) : (soma += num/den);
        den++;
        num-=5;
    }
    printf("Resultado = %lf\n", soma);
}