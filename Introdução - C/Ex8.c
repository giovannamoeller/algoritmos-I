#include <stdio.h>

int main(){

    int qnt, anos;
    float preco, total;
    scanf("%d %d %f", &qnt, &anos, &preco);
    total = ((qnt / 20) * preco) * (anos * 365);
    printf("%.2f", total);
}