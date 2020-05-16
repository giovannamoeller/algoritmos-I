#include <stdio.h>

int main(){

    int i, op = 1, n, s = 0;
    while (op == 1) {
        scanf("%d", &n);
        for (i = 1; i < n; i++){
            if (n % i == 0) {
                s += i;
            }
        }
        if (s == n) printf("%d eh perfeito\n", n);
        printf("Digite 1 para o reprocessamento ou qualquer outra tecla para encerrar.\n");
        scanf("%d", &op);  
        s = 0;
    }
}