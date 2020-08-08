#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * inverte(char * cadeia) {
    int length = strlen(cadeia);
    printf("%s", cadeia);
    int aux, i, j;
    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        printf("%c\n\n", cadeia[i]);
        if(cadeia[i] == 32){
            printf("n entro");
            cadeia[i] = cadeia[i+1];
        }
        aux = cadeia[i];
        cadeia[i] = cadeia[j];
        cadeia[j] = aux;
    }
    return cadeia;
}

int main() {
    fflush(stdin);
    char cadeia[50];
    int op = -1;
    printf("Digite uma cadeia de caracteres: ");
    gets(cadeia);
    printf("\nCadeia invertida e sem espacos = %s", inverte(cadeia));
    while(op != 1 || op != 0) {
        printf("\n\nDigite 1 para reprocessamento ou 0 para sair: ");
        scanf("%d", &op);
        if(op == 1) {
            main();
        } else if(op == 0) {
            exit(1);
        }
    }
}