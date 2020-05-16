#include <stdio.h>

int main() {

    int num, maior, menor;
    scanf("%d", &num);
    menor = maior = num;
    while (num > 0){
        if (num > maior){
            maior = num;
        }
        else if (num < menor){
            menor = num;
        }
        scanf("%d", &num);
    }
    printf("Maior valor = %d\n", maior);
    printf("Menor valor = %d\n", menor);
}