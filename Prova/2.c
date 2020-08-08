#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade = 0, cont = 0;
    float resultado = 0, soma = 0; 
    int maior, menor = 1000, homemNovo;
    char sexo[2];
    while(idade != 999) {
        scanf("%d", &idade);
        if(idade != 999) {
            scanf("%s", &sexo[0]);
            if(idade < menor) {
                printf("%s\n\n", &sexo);
                if(sexo[0] == 'm' || sexo[0] == 'M'){
                    homemNovo = idade;
                }
                menor = idade;
            }
            soma+=idade;
            cont++;
        }
    }

    resultado = (float)soma/cont;


    printf("A idade media eh de %.0f anos\n\n", resultado);
    printf("A menor idade eh de %d anos\n\n", menor);
    printf("O homem mais novo possui %d anos\n\n", homemNovo);
}