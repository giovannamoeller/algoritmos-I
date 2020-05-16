#include <stdio.h>

int main() {

    int num = 0, soma = 0, i = 0;
    float media = 0;
    while (num >= 0){
        scanf("%d", &num);
        if (num < 0) break;
        i++;
        soma += num;
    }
    media = (float)soma / i;
    printf("Soma = %d\n", soma);
    printf("Media = %.1f\n", media);
    printf("Total de valores lidos = %d\n", i);
}