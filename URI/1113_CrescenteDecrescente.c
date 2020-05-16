#include <stdio.h>

int main() {

    int m = 1, n = 0;
    while (m != n){
        scanf("%d %d", &m, &n);
        if (m == n) break;
        m > n ? printf("Decrescente\n") : printf("Crescente\n");
    }
}