#include <stdio.h>

int main(){

    int h1, h2, m1, m2, t1, t2, t_hora, t_min, t;
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
    t1 = h1*60 + m1;
    t2 = h2*60 + m2;
    if (t1 >= t2){
        tempo = (60 * 24 - t1) + t2;
    }
    else{
        t = t2 - t1;
    }
    t_hora = t/60;
    t_min = t%60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", t_hora, t_min);
}