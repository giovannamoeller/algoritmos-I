#include <stdio.h>
#define MAX 15

int main() {
    int i = 8;
    float valor[MAX]; // declaração de vetor
    valor[1] = 6.645;
    valor[MAX - 1] = 3.867;
    valor[i] = 7.645;
    valor[rand() % MAX] = 2.768;
    valor[sqrt(MAX)] = 2.705; // NÃO é válido!
}