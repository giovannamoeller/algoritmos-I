#include <stdio.h>

int main(){

    int i, n;
    int maior = 0, pos = 0;
    for (i = 1; i <= 100; i++){
        scanf("%d", &n);
        if (maior < n){
            maior = n;
            pos = i;
        }
    }
    printf("%d\n%d\n", maior, pos);
}