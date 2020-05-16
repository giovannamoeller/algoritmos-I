#include <stdio.h>

int main() {

    int x, y, maior = 0, menor = 0, i;
    scanf("%d %d", &x, &y);
    if (x >= y) {
        maior = x;
        menor = y;
    }
    else {
        maior = y;
        menor = x;
    }
    i = menor + 1;
    while (i < maior) {
        if (i % 5 == 2 || i % 5 == 3) printf("%d\n", i);
        i++;
    }
}