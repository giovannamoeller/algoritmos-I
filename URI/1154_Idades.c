#include <stdio.h>

int main() {

    int idade, soma = 0, cont = 0;
    do {
        scanf("%d", &idade);
        if (idade < 0) {
            break;
        }
        cont++;
        soma += idade;
    } while (idade >= 0);
    printf("%.2f\n", (float)soma/cont);
}