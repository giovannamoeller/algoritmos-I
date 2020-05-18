#include <stdio.h>

int main() {
    int num = 37, den = 1;
    float resultado = 0;
    do {
        resultado += (num * (num + 1)) / den;
        num --;
        den++;
    } while(den <= 37);
    printf("%.2f\n", resultado);
}