#include <stdio.h>

int main() {

    int n, num, soma = 0, i = 0, j = 1;
    scanf("%d", &n);
    while(i < n) {
        scanf("%d", &num);
        while(j <= (num - 1)) {
            if (num % j == 0) {
                soma += j;
            }
            j++;
        }
        if (soma == num) {
            printf("%d eh perfeito\n", num);
        }
        else {
            printf("%d nao eh perfeito\n", num);
        }
        soma = 0;
        j = 1;
        i++;
    }
}