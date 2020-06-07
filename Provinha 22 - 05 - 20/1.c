#include <stdio.h>

float div(n1, n2) {
   return (float)n1 / n2;
}

float soma(n1, n2) {
    return n1 + n2;
}

float sub(maior, menor) {
    return maior - menor;
}

float prod(n1, n2) {
    return (float)n1 * n2;
}

int main() {
    int op, op2 = 1;
    float n1, n2, maior, menor, resultado;
    while (op2 == 1) {
        printf("Escolha a opcao:\n\n");
        printf("1- Soma de dois numeros\n2- Diferença entre dois numeros (maior pelo menor)\n3- Produto de dois numeros\n4- Divisao entre dois numeros (o denominador nao pode ser zero)\n");
        printf("Opcao -> ");
        scanf("%d", &op);
        while (op < 1 || op > 4) {
            printf("Opcao invalida! Redigite: ");
            scanf("%d", &op);
        }
        printf("\n\nDigite o primeiro numero: ");
        scanf("%f", &n1);
        printf("Digite o segundo numero: ");
        scanf("%f", &n2);
        switch(op) {
            case 1: printf("Resultado = %.2f\n\n", soma(n1, n2));
                    break;
            case 2: {
                if (n1 > n2) {
                    maior = n1;
                    menor = n2;
                }
                else {
                    maior = n2;
                    menor = n1;
                }
                printf("Resultado = %.2f\n\n", sub(maior, menor));
                break;
            }
            case 3: printf("Resultado = %.2f\n\n", prod(n1, n2));
                    break;
            case 4: {
                while (n2 == 0) {
                        printf("O denominador nao pode ser 0. Redigite: ");
                        scanf("%f", &n2);
                    }
                printf("Resultado = %.2f\n\n", div(n1, n2));
                break;
            }
        }
        printf("Digite 1 para reprocessar ou qualquer outra tecla para sair: ");
        scanf("%d", &op2);
    }
}