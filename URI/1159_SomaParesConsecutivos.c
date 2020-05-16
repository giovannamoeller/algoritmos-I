#include <stdio.h>

int main() {

    int n, a = 0, soma = 0;
    do {
        scanf("%d", &n);
        if (n == 0) break;
        while (a < 5) {
            if (n % 2 != 0) {
                n++;
            }
            soma += n;
            n += 2;
            a++;
        }
        printf("%d\n", soma);
        soma = 0;
        a = 0;
    } while (n != 0);
}