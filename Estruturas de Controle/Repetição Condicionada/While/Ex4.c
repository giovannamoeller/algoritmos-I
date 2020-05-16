#include <stdio.h>
#include <math.h>

int main() {

    int num, op = 1;
    while (op == 1){
        scanf("%d", &num);
        num >= 0 ? printf("A raiz quadrada de %d eh %.1lf\n", num, sqrt(num)) : printf("Nao é possivel calcular a raiz!\n");
        printf("Digite 1 se quiser fazer o reprocessamento ou 0 para sair: ");
        scanf("%d", &op);
    }
}