#include <stdio.h>
 
int main() {
 
    int num, horas;
    float valor;
    scanf("%d %d %f", &num, &horas, &valor);
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2f\n", horas * valor);
}