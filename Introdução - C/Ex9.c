#include <stdio.h>

int main(){

    float c, f; 
    scanf("%f", &c);
    f = ((9 * c) + 160) / 5; // C = 5F - 160 / 9 -> 9C = 5F - 160 -> -5F = -9C - 160 -> F = 9C + 160 / 5
    printf("%.2f", f);
}