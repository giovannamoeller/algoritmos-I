#include <stdio.h>

int main(){

    int a, b, aux;
    scanf("%d %d", &a, &b); // 5 4
    aux = a; // aux = 5
    a = b; // a = 4
    b = aux; // b = 5
    printf("%d %d", a, b);
}