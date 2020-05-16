#include <stdio.h>

int main() {

    int linha, coluna;
    for (linha = 1; linha <= 5; linha++) {
        for (coluna = 1; coluna < 15; coluna++){
            printf("+");
        }
        printf ("\n");
    }
}