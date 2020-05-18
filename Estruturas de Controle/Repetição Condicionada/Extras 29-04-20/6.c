#include <stdio.h>

int main() {

    int n1, n2, i = 0, j = 2, cont = 0, op = 1;
    while(op == 1) {
        scanf("%d %d", &n1, &n2);
        while(n1 <= n2) {
            while(n1 > j) {
                if (n1 % j == 0) {
                    cont++;
                }
                j++;
            }

            if (cont == 0) {
                printf("%d   ", n1);
            }
            n1++;
            cont = 0;
            j = 2;
        }
        printf("\nDigite 1 para reprocessar ou qualquer outra tecla para sair: ");
        scanf("%d", &op);
    }
}