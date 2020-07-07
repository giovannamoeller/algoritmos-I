#include <stdio.h>

int main() {
    int i;
    printf("Gerando 5 números aleatórios com rand\n");
    for(i = 1; i <= 5; i++)
    printf("%d\n", rand());
}