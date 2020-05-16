#include <stdio.h>
 
int main() {
 
    char nome[50];
    double salario, num;
    scanf("%s %lf %lf", &nome, &salario, &num);
    salario = salario + (num * 0.15);
    printf("TOTAL = R$ %.2lf\n", salario);
}