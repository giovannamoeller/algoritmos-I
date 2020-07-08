#include <stdio.h>

int main() {
    int par[5], impar[5], j, i, tamPar = 0, tamImpar = 0, x;
    for (i = 0; i < 15; i++) {
        scanf("%d", &x);
        if (x % 2 == 0) {
            par[tamPar] = x;
            tamPar++;
            if (tamPar == 5) {
                for (j = 0; j < 5; j++) {
                    printf("par[%d] = %d\n", j, par[j]);
                }
                tamPar = 0;
            }
        } else {
            impar[tamImpar] = x;
            tamImpar++;
            if (tamImpar == 5) {
                for (j = 0; j < 5; j++) {
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
                tamImpar = 0;
            }
        }
    }
    for (j = 0; j < tamImpar; j++) {
        printf("impar[%d] = %d\n", j, impar[j]);
    }
    for (j = 0; j < tamPar; j++) {
        printf("par[%d] = %d\n", j, par[j]);
    }
}