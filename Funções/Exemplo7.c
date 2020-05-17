#include <stdio.h>

int LeIntPositivo();

void LeRealPositivo(float *x);

int main() {
    int a;
    float num;
    a = LeIntPositivo();
    LeRealPositivo(&num);
    printf("\nInteiro = %d\nReal = %4.2f\n", a, num);
}

int LeIntPositivo () {
    int n;
    do {
        printf("\nDigite um inteiro positivo: ");
        scanf("%d", &n);
    } while (n <= 0);
    return n;
}

void LeRealPositivo (float *x) {
    do {
        printf("\nDigite um numero real positivo: ");
        scanf("%f", x); // não tem &
    } while (*x <= 0);
}