#include <stdio.h>

int main () {
    
    int dia, mes, ano;
    printf("Digite uma data: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    printf("\nData: %d/%d/%d", dia, mes, ano);
}