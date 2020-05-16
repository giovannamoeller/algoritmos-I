#include <stdio.h>

int main() {

    float n = 0, media = 0, i = 0;
    int op = 1;
    while (op == 1) {
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
        op = 0;
        while (op != 1 && op != 2){
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &op);
        }
        i = 0;
        media = 0;
    }
}