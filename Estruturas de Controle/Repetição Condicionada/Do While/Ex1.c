#include <stdio.h>

int main() {

    int x;
    do {
        scanf("%d", &x);
        if (x < 1 || x > 4) {
            printf("Numero invalido!\n");
        } else {
            printf("%d\n", x);
        }
    } while (x < 1 || x > 4);
}