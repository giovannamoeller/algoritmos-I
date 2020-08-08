#include <stdio.h>
#include <stdlib.h>

double funcao() {

    int i, j = 1;
    double resultado = 0;

    for(int i = 1; i <= 39; i+=2) {
        resultado += (double)i / j;
        j *= 2;
    }

    return resultado;
}

int main() {
    double resul;
    int op = -1;
    resul = funcao();
    printf("\n\nO resultado eh %.3f\n\n", resul);
    while(op != 1 || op != 0) {
        printf("Digite 1 se quiser o reprocessamento ou 0 para sair: ");
        scanf("%d", &op);
        if(op == 1) {
            resul = funcao();
            printf("\n\nO resultado eh %.3lf\n\n", resul);
        } else if (op == 0) {
            exit(1);
        }
    }
}