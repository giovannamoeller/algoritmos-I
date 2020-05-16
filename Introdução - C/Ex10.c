#include <stdio.h>

int main(){

    float custo, final; 
    scanf("%f", &custo);
    final = custo + (0.45 * custo) + (0.5 * custo);
    printf("%.2f", final);
}