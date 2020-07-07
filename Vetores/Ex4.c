#include <stdio.h>

int main() {
    int n1[10], n2[10], n3[10];
    printf("Digite os valores do vetor 1: ");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &n1[i]);
    }
    printf("Digite os valores do vetor 2: ");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &n2[i]);
    }
    printf("Resultado:\n");
    for(int i = 0; i < 10; i++) {
        n3[i] = n1[i] * n2[i];
        printf("%d\n", n3[i]);
    }
}