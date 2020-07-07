#include <stdio.h>

int main() {
    int n[20], menor = 2147483647, pos;
    for(int i = 0; i < 20; i++) {
        scanf("%d", &n[i]);
        if (n[i] < menor) {
            menor = n[i];
            pos = i;
        }
    }
    printf("O menor elemento N é %d e sua posicao dentro do vetor eh %d\n", menor, pos);
}