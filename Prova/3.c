#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * inverte(char * cadeia, char * aux) {

    int i, j, a, cont = 0;
    for(a = 0; cadeia[a] != '\0'; a++) {
        cont++;
    }
    j = cont - 1;
    for (i = 0; cadeia[i] != '\0'; i++) {
        if(cadeia[i] == ' '){
            cadeia[i] = cadeia[i+1];
        }
        aux[j] = cadeia[i];
        j--;
    }
    aux[i] = '\0';
    return aux;
}

int main() {
    fflush(stdin);
    char cadeia[50], aux[50];
    int op = -1;
    printf("Digite uma cadeia de caracteres: ");
    gets(cadeia);
    printf("\nCadeia invertida e sem espacos = %s", inverte(cadeia, aux));

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