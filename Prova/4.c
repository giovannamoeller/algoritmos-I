#include <stdio.h>

#define max_val 3.4e38;
#define min_val 3.4e-38;

int main() {
    float vetor[100], menor, maior, soma, media;
    int total_length = 100, menor_media = 0, maior_media = 0;
    menor = max_val;
    maior = min_val;
    for(int i = 0; i < total_length; i++) {
        scanf("%f", &vetor[i]);    
        soma += vetor[i];
        if(vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    media = soma/total_length;
    for(int i = 0; i < total_length; i++) {
        if(vetor[i] > media) {
            maior_media++;
        } else if(vetor[i] < media) {
            menor_media++;
        }
    }
    printf("A media eh de %.2f\n\n", media);
    printf("O menor valor eh %.2f\n\n", menor);
    printf("O maior valor eh %.2f\n\n", maior);
    printf("Quantidade de numeros maiores que a media = %d\n\n", maior_media);
    printf("Quantidade de numeros menores que a media = %d\n\n", menor_media);
}