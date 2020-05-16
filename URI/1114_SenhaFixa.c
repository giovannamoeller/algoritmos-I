#include <stdio.h>

int main() {

    int senha = 2002, s = 0;
    while (s != senha){
        scanf("%d", &s);
        s == senha ? printf("Acesso Permitido\n") : printf("Senha Invalida\n");
    }
}