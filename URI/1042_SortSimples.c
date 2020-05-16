#include <stdio.h>

int main(){

    int a, b, c, menor, meio, maior;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c){
        maior = a;
        if (b > c){
            meio = b;
            menor = c;
        }
        else{
            meio = c;
            menor = b;
        }   
    }
    if (b > a && b > c){
        maior = b;
        if (a > c){
            meio = a;
            menor = c;
        }
        else{
            meio = c;
            menor = a;
        }
    }
    if (c > a && c > b){
        maior = c;
        if (a > b){
            meio = a;
            menor = b;
        }
        else{
            menor = a;
            meio = b;
        }
    }
    
    printf("%d\n", menor);
    printf("%d\n", meio);
    printf("%d\n\n", maior);
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
}