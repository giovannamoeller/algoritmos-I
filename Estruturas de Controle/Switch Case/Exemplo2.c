#include <stdio.h>

int main(){

    float n1, n2;
    char op;
    scanf("%c %f %f", &op, &n1, &n2);
    switch (op){
        case '+': printf("Soma = %.1f\n", n1 + n2);
                break;
        case '-': printf("Subtracao = %.1f\n", n1 - n2);
                break;
        case '*': printf("Multiplicacao = %.1f\n", n1 * n2);
                break;
        case '/': if (n2 != 0){
                    printf("Divisao = %.1f\n", n1 / n2);
                }
                else{
                    printf("Erro! Divisao por zero.\n");
                }
                break;
        default: printf("Char invalido!\n");
    }
}