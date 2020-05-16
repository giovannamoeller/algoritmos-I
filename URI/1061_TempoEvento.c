#include <stdio.h>

int main(){

    int dia1, hora1, min1, seg1, dia2, hora2, min2, seg2, h, m, s, dia;
    scanf("Dia %d", &dia1);
    scanf("%d : %d : %d\n", &hora1, &min1, &seg1);
    scanf("Dia %d", &dia2);
    scanf("%d : %d : %d", &hora2, &min2, &seg2);
    s = seg2 - seg1;
    m = min2 - min1;
    h = hora2 - hora1;
    dia = dia2 - dia1;
    if (s < 0){
        s += 60;
        m --;
    }
    if (m < 0){
        m += 60;
        h --;
    }
    if (h < 0){
        h += 24;
        dia--;
    }
    printf("%d dia(s)\n", dia);
    printf("%d hora(s)\n", h);
    printf("%d minuto(s)\n", m);
    printf("%d segundo(s)\n", s);
}