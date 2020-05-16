#include <stdio.h>

int main(){

    int n, ni, i, cont = 0;
    while (n != 0) {
        cont++;
        scanf("%d", &n);
        for (i = 1; i <= n; i++) {
            scanf("%d", &ni);
            if (ni == i) {
                printf("Teste %d\n%d\n\n", cont, ni);
                break;
            }
        }
    }
}