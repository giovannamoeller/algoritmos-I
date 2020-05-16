#include <stdio.h>

int main(){

    float valor;
    scanf("%f", &valor);
    if (valor <= 2000){
        printf("Isento\n");
    }
    else if (valor <= 3000){
        printf("R$ %.2f\n", (valor - 2000) * 0.08);
    }
    else if (valor <= 4500){
        printf("R$ %.2f\n", 1000.0 * 0.08 + (valor - 3000) * 0.18);
    }
    else{
        printf("R$ %.2f\n", 1000.0 * 0.08 + 1500 * 0.18 + (valor - 4500) * 0.28);
    }
}