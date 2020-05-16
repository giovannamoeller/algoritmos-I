#include <stdio.h>

int main(){

    int i, n, qnt = 0, c = 0, r = 0, s = 0;
    char tipo;
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        scanf("%d %c", &qnt, &tipo);
        if (tipo == 'C'){
            c += qnt;
        }
        else if (tipo == 'R'){
            r += qnt;
        }
        else if (tipo == 'S'){
            s += qnt;
        }
    }
    printf("Total: %d cobaias\n", c + r + s);
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);
    printf("Percentual de coelhos: %.2f %%\n", (float)(c)/(c + s + r) * 100);
    printf("Percentual de ratos: %.2f %%\n", (float)(r)/(c + s + r) * 100);
    printf("Percentual de sapos: %.2f %%\n", (float)(s)/(c + s + r) * 100);
}