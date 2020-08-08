#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define l 3
#define c 2

void verificaRepeticao(int matriz[l][c], int linha, int coluna) {
    int repetido = 0, teste, i, j, k, w;

    for(k = 0; k < l; k++) {
        for(w = 0; w < c; w++) {
            teste = matriz[k][w];
            for(i = 0; i < linha; i++) {
        
                for(j = 0; j < coluna; j++) {
                    if(matriz[i][j] == teste) {
                        repetido++;
                    }
                }
            }
        }
    }

    if(repetido > l * c) {
        printf("\nValores repetem\n");
    } else {
        printf("\nValores nao repetem\n");
    }
}

int main() {
    srand(time(NULL));
    int matriz[l][c];
    int i, j;
    for(i = 0; i < l; i++) {
        for(j = 0; j < c; j++) {
            matriz[i][j] = rand()%10;
            printf("%d ", matriz[i][j]);
        }
        printf("\t\n");
    }
    verificaRepeticao(matriz, l, c);
}