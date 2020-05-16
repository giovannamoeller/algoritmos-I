#include <stdio.h>

int main(){

    int a, b, c, maior, menor, meio, soma;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c){
        maior = a;
        if (b > c){
            meio = b;
            menor = c;
        } else {
            meio = c;
            menor = b;
        }
    }
    else if (b > a && b > c){
        maior = b;
        if (a > c){
            meio = b;
            menor = c;
        } else {
            meio = c;
            menor = a;
        }
    }
    else if (c > a && c > b){
        maior = c;
        if (a > b){
            meio = a;
            menor = b;
        } else {
            meio = b;
            menor = a;
        }
    }
    soma = maior + meio;
    printf("%d\n", soma);
}