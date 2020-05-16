#include <stdio.h>
 
int main() {
 
    float y_vel_min = 0.5;
    int dist, tempo;
    scanf("%d", &dist);
    tempo = dist / y_vel_min;
    printf("%d minutos\n", tempo);
}