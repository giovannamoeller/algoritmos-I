#include <stdio.h>

int main(){

    int num;
    scanf("%d", &num);
    switch (num){
        case 1: printf("Domingo\n");
                break;
        case 2: printf("Segunda\n");
                break;
        case 3: printf("Terca\n");
                break;
        case 4: printf("Quarta\n");
                break;
        case 5: printf("Quinta\n");
                break;
        case 6: printf("Sexta\n");
                break;
        case 7: printf("Sabado\n");
                break;
        default: printf("Valor invalido!\n");
    }
}