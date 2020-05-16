#include <stdio.h>

int main(){

    int cod, qnt;
    scanf("%d %d", &cod, &qnt);
    switch (cod){
        case 100: 
            printf("Valor final = R$ %.2f\n", (float)qnt * 1.7);
            break;
        case 101:
            printf("Valor final = R$ %.2f\n", (float)qnt * 2.3);
            break;
        case 102:
            printf("Valor final = R$ %.2f\n", (float)qnt * 2.6);
            break;
        case 103: 
            printf("Valor final = R$ %.2f\n", (float)qnt * 2.4);
            break;
        case 104:
            printf("Valor final = R$ %.2f\n", (float)qnt * 2.5);
            break;
        case 105: 
            printf("Valor final = R$ %.2f\n", (float)qnt * 1.0);
            break;
        default:
            printf("Codigo invalido\n");
    }
}