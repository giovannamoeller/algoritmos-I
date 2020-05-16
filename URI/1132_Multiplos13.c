#include <stdio.h>

int main() {

    int x, y, soma = 0, maior = 0, menor = 0, i;
    scanf("%d %d", &x, &y);
    if (x >= y) {
        maior = x;
        menor = y;
    }
    else {
        maior = y;
        menor = x;
    }
    i = menor;
    while (i <= maior) {
        if (i % 13 != 0) soma += i;
        i++;
    }
    printf("%d\n", soma);
}