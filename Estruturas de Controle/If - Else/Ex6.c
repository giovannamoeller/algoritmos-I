#include <stdio.h>

int main(){

    int i1, i2, i3, i4, homem_v, mulher_v, homem_n, mulher_n;
    scanf("%d %d %d %d", &i1, &i2, &i3, &i4);
    if (i1 > i2){
        homem_v = i1;
        homem_n = i2;
    } else {
        homem_v = i2;
        homem_n = i1;
    }
    if (i3 > i4){
        mulher_v = i3;
        mulher_n = i4;
    } else {
        mulher_v = i4;
        mulher_n = i3;
    }
    printf("Soma = %d", homem_v + mulher_n);
    printf("Produto = %d", homem_n * mulher_v);
}