#include <stdio.h>

int verifica (int x) {
    if (x == 0) return -1;
    if (x % 2 == 0) return 0;
    return 1;
}

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("%d\n", verifica(n));
}



