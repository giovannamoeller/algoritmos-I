#include <stdio.h>

int main() {

    int n, num, i = 0, j = 2, cont = 0;
    scanf("%d", &n);
    while(i < n) {
        scanf("%d", &num);
        while(j <= (num - 1)) {
            if (num % j == 0) {
                cont++;
            }
            j++;
        }
        if (cont == 0) {
            printf("%d eh primo\n", num);
        }
        else {
            printf("%d nao eh primo\n", num);
        }
        cont = 0;
        j = 2;
        i++;
    }
}