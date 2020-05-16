#include <stdio.h>
#include <math.h>

int main(){

    int h1, h2, tempo;
    scanf("%d %d", &h1, &h2);
    if (h1 >= h2){
        tempo = (24 - h1) + h2;
    }
    else {
        tempo = h2 - h1;
    }
    printf("O JOGO DUROU %d HORA(S)\n", tempo);
}