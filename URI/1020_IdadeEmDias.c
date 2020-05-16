#include <stdio.h>

int main(){

    int idade, ano, a, mes, dia;
    scanf("%d", &idade);
    ano = idade / 365;
    a = idade % 365;
    mes = a / 30;
    dia = a % 30;
    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dia);
}