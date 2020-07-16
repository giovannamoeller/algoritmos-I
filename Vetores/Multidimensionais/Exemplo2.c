#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j;
    int matriz[10][10];
    // Preenchimento da matriz
    for (i = 0; i < 10; i++)
        for (j = 0; j < 10; j++)
            matriz[i][j] = i*j;
    // Impressao da matriz
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++)
            printf ("%3d ",matriz[i][j]);
        printf ("\n");
    }
}