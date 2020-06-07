#include <stdio.h>

int main() {
    int n, i, j, k = 1, cont = 1;
    printf("Digite um valor inteiro: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 1; j <= k; j++) {
            printf("%d ", cont);
            cont++;
        }
        k++;
        printf("\n");
    }
}




