#include <stdio.h>
#include <math.h>

int main(){

    int cod, qtd;
    float total = 0;
    scanf("%d %d", &cod, &qtd);
    if (cod == 1){
        total += qtd * 4;
    }
    else if (cod == 2){
        total += qtd * 4.5;
    }
    else if (cod == 3){
        total += qtd * 5;
    }
    else if (cod == 4){
        total += qtd * 2;
    }
    else if (cod == 5){
        total += qtd * 1.5;
    }
    printf("Total: R$ %.2f\n", total);
}