#include <stdio.h>

int fatorial(int n) {
    int fat, i = 0;
    if (n == 0) return 1;
    fat = i = n;
    while (i > 1){
        fat *= i - 1;
        i--;
    }
    return fat;
}

int main() {
    int n, k, binomio, op = 1;
    while (op == 1) {
        printf("Digite o valor de n: ");
        scanf("%d", &n);
        printf("Digite o valor de k: ");
        scanf("%d", &k);
        while (n < 0) {
            printf("n invalido! Redigite: ");
            scanf("%d", &n);
        }
        while (k < 0) {
            printf("k invalido! Redigite: ");
            scanf("%d", &n);
        }
        binomio = fatorial(n) / (fatorial(k) * fatorial(n - k));
        printf("%d\n", binomio);
        printf("Digite 1 para o reprocessamento ou qualquer outra tecla para sair: ");
        scanf("%d", &op);
    }
    
}