#include <stdio.h>

int main(){

    int num; 
    float divida, juros;
    scanf("%d %f", &num, &divida);
    switch (num){
        case 1: 
            juros = 0.01;
            break;
        case 2: 
            juros = 0.02;
            break;
        case 3: 
            juros = 0.03;
            break;
        case 4: 
            juros = 0.04;
            break;
        case 5: 
            juros = 0.05;
            break;
        default:
            printf("Mes invalido\n");
    }
    printf("Juros = %.0f%%\n", juros * 100);
    printf("Valor final = %.2f\n", (1 + juros) * divida);
}