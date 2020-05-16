#include <stdio.h>
#include <math.h>

int main(){

    int a, b, c, delta, x1, x2;
    scanf("%d %d %d", &a, &b, &c);
    delta = (b * b) - (4 * a * c);
    if (delta < 0){
        printf("Nao existem raizes reais\n");
    } else if (delta == 0){
        x1 = -b / (2 * a);
        printf("Duas raizes iguais: %d\n", x1);
    } else if (delta > 0){
        x1 = -b + sqrt(delta) / (2 * a);
        x2 = -b - sqrt(delta) / (2 * a);
        printf("Duas raizes distintas: %d %d\n", x1, x2);
    }
}