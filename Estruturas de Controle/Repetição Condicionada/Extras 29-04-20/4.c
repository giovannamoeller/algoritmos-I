#include <stdio.h>

int main() {
    int n, i = 1, j = 1, soma = 1;
    scanf("%d", &n);
    while (j < n) {    
        if (i % 2 != 0) {
            i += 2;
        }
        else {
            i++;
        }
        soma += i;
        j++;
    }
    printf("Quadrado de %d é %d\n", n, soma);
}