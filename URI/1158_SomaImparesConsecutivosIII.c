#include <stdio.h>

int main() {

    int n, i = 0, x, y, a = 0, soma = 0;
    scanf("%d", &n);
    while(i < n) {
        scanf("%d %d", &x, &y);
        while(a < y) {
            if (x % 2 == 0) {
                x++;
            } 
            soma += x;
            x += 2;
            a++;
        }
        printf("%d\n", soma);
        i++;
        soma = 0;
        a = 0;
    }
}