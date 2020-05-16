#include <stdio.h>

int main(){

    int a;
    scanf("%d", &a);
    a >= 0 ? a++ : a--;
    printf("Novo valor: %d\n", a);
}