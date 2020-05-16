#include <stdio.h>

int main(){

    float salario, total, final, perc;
    scanf("%f", &salario);
    if (salario >= 0 && salario <= 400){
        perc = 15;
        final = 0.15 * salario;
        total = 1.15 * salario;
    }
    else if (salario > 400 && salario <= 800){
        perc = 12;
        final = 0.12 * salario;
        total = 1.12 * salario;
    }
    else if (salario > 800 && salario <= 1200){
        perc = 10;
        final = 0.10 * salario;
        total = 1.10 * salario;
    }
    else if (salario > 1200 && salario <= 2000){
        perc = 7;
        final = 0.07 * salario;
        total = 1.07 * salario;
    }
    else if (salario > 2000){
        perc = 4;
        final = 0.04 * salario;
        total = 1.04 * salario;
    }
    printf("Novo salario: %.2f\n", total);
    printf("Reajuste ganho: %.2f\n", final);
    printf("Em percentual: %.0f %%\n", perc);
}