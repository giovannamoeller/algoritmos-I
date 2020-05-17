#include <stdio.h>

void mensagem (void) {
    printf("\nSou uma funcao!\n");
}

void mensagem1 () {
    printf("\nSou uma outra funcao!\n");
}

void tracos() {
    int i;
    printf ("\n");
    for (i = 1; i <= 40; i++) {
        printf ("-");
    }
    printf ("\n");
}

int main() {
    mensagem(); // função void não retorna nada!
    tracos();
    mensagem1();
}