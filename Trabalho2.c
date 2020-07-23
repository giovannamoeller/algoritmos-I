// Aluna: Giovanna Gimenes Moeller
// Curso: Sistemas de Informação

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define i 20
#define j 20

int pegaLinha() {
    int linha;
    printf("Digite o tamanho total de linhas: ");
    scanf("%d", &linha);
    return linha;
}

int pegaColuna() {
    int coluna;
    printf("Digite o tamanho total de colunas: ");
    scanf("%d", &coluna);
    return coluna;
}

void lerMatriz (int matriz[i][j], int linha, int coluna) {
    int a, b;
    for (a = 0; a < linha; a++) {
        for(b = 0; b < coluna; b++) {
            scanf("%d", &matriz[a][b]);
        }
    }
}

void mostrarMatriz (int matriz[i][j], int linha, int coluna) {
    for(int a = 0; a < linha; a++) {
        for(int b = 0; b < coluna; b++) {
            printf("%d ", matriz[a][b]);
        }
        printf("\n");
    }
}

int main() {
    int linha, coluna;
    printf("Ler Matriz\n\n");
    linha = pegaLinha();
    coluna = pegaColuna();
    int matriz[i][j];
    lerMatriz(matriz, linha, coluna);
    printf("Mostrar Matriz\n\n");
    mostrarMatriz(matriz, linha, coluna);
}