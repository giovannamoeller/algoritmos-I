#include <stdio.h>

int main() {
    int vet[100];
    for(int i = 1; i <= 100; i++) {
        vet[i] = i;
        printf("%d\n", vet[i]);
    }
}