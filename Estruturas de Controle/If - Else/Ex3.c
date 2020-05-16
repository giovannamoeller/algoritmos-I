#include <stdio.h>

int main(){

    int num, med;
    scanf("%d %d", &num, &med);
    if (num == 3){
        printf("Triangulo. Perimetro = %d u.m", med * 3);
    } else if (num == 4){
        printf("Quadrado. Area = %d u.m", med * med);
    }
    else if (num == 5){
        printf("Pentagono.");
    } else {
        printf("Poligono nao identificado.");
    }
}