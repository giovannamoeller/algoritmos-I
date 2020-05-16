// if else

#include <stdio.h>

int main(){

    int a, b;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);
    if (b != 0){
        printf("\nDivisao = %.1f", (float)a / b);
    }
    else{
        printf("\nErro! Divisao por zero");
    }
}