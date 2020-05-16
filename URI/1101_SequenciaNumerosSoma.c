#include <stdio.h>

int main() {

    int m = 1, n = 1, maior = 0, menor = 0, soma = 0;
    while (m > 0 && n > 0){
        scanf("%d %d", &m, &n);
        if (m <= 0 || n <= 0) break;
        if (m > n) {
            maior = m;
            menor = n;
        } else if (n > m) {
            maior = n;
            menor = m;
        }
        while (maior >= menor){
            printf("%d ", menor);
            soma += menor;
            menor++;
        }
        printf("Sum=%d\n", soma);
        soma = 0;
    }
}