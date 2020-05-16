#include <stdio.h>

int main(){

    float x, y, min;
    scanf("%f %f", &x, &y);
    min = (x < y) ? x : y; // if (x < y) min = x; else min = y
    printf("Menor valor: %.2f\n", min);
}