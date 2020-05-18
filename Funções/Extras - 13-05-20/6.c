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
    int n;
    scanf("%d", &n);
    while (n < 0) {
        printf("Numero invalido! Redigite: ");
        scanf("%d", &n);
    }
    printf("Fatorial de %d = %d\n", n, fatorial(n));
}