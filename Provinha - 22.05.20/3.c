#include <stdio.h>

void linha(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf("%d\t", (i * i));
    }
    printf("\n");
}

int main() {
    int x, i;
    scanf("%d", &x);
    while(x <= 0 || x > 100) {
        printf("Numero invalido! Redigite: ");
        scanf("%d", &x);
    }
    for (i = 1; i <= x; i++) {
        linha(i);
    }
    for (i = (x - 1); i != 0; i--) {
        linha(i);
    }
}