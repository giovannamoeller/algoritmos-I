#include <stdio.h>

int calculaTempo(int h1, int m1, int h2, int m2, int *h, int *m) {
    *m = m2 - m1;
    *h = h2 - h1;
    if (*m < 0){
        *m += 60;
        *h -= 1;
    }
    if (*h < 0){
        *h += 24;
    }
    if (*m == 0 && *h == 0) {
        *h = 24;
    }
}

int main(){

    int hora1, min1, hora2, min2, h, m;
    scanf("%d %d", &hora1, &min1);
    scanf("%d %d", &hora2, &min2);
    calculaTempo(hora1, min1, hora2, min2, &h, &m);
    printf("Duracao = %d horas e %d minutos\n\n", h, m);
}