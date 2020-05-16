#include <stdio.h>

int main() {

    float n = 0, media = 0, i = 0;
    while (i < 2){
        scanf("%f", &n);
        while (n < 0 || n > 10){
            printf("nota invalida\n");
            scanf("%f", &n);
        }
        i++;
        media += n;
    }
    printf("media = %.2f\n", media / 2);
}