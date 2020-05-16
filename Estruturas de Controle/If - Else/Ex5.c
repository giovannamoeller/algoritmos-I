#include <stdio.h>

int main(){

    int a1, a2, a3;
    scanf("%d %d %d", &a1, &a2, &a3);
    if (a1 == 90 || a2 == 90 || a3 == 90){
        printf("Triangulo retangulo");
    }else if (a1 > 90 || a2 > 90 || a3 > 90){
        printf("Triangulo obtusangulo");
    }else if (a1 < 90 && a2 < 90 && a3 < 90){
        printf("Triangulo acutangulo");
    }
}