#include <stdio.h>

int main(){

    int i = 0, j = 0, n, x, y, maior, menor, soma = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        scanf("%d %d", &x, &y);
        if (x > y){
            maior = x;
            menor = y;
        } else {
            maior = y;
            menor = x;
        }
        for (j = menor + 1; j < maior; j++){
            if (j % 2 != 0){
                soma += j;
            }
        }
        printf("%d\n", soma);
        soma = 0;
    }
}