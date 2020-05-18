#include <stdio.h>

int main() {

    int num, i = 0, j = 2, cont = 0, op = 1;
    while(op == 1) {
        scanf("%d", &num);
        while(j <= (num - 1)) {
            if (num % j == 0) {
                cont++;
            }
            j++;
        }
        if (cont == 0) {
            printf("%d eh primo\n", num);
        }
        else {
            printf("%d nao eh primo\n", num);
        }
        cont = 0;
        j = 2;
        printf("Digite 1 para reprocessar ou qualquer outra tecla para sair: ");
        scanf("%d", &op);
    }
}