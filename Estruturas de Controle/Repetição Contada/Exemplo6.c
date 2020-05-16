#include <stdio.h>

int main(){

    int x;
    printf("\t Numero quadrado\n");
    for (x = 1; x <= 10; x++){
        printf("\t %6d %9d\n", x, x * x);
    }
}