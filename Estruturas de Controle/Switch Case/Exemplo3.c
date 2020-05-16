#include <stdio.h>

int main(){

    int op, valor;
    scanf("%d", &op); // 1 - converter para hexadecimal ou 2 - converter para decimal
    switch (op){
        case 1: 
            scanf("%d", &valor);
            printf("%d em hexadecimal = %x\n", valor, valor);
            break;
        case 2: 
            scanf("%x", &valor);
            printf("%x em decimal = %d\n", valor, valor);
            break;
        default: printf("Opcao invalida.\n");
    }
}