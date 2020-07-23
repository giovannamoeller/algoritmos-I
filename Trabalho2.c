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
    printf("\nDigite os valores da matriz: \n");
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

void trocarElementosLinha (int matriz[i][j], int linha, int coluna) {
    int x, y, aux;
    printf("Digite a linha X: ");
    scanf("%d", &x);
    printf("Digite a linha Y: ");
    scanf("%d", &y);
    for(int a = 0; a < linha; a++) {
        for(int b = 0; b < coluna; b++) {
            if(x == a) {
                aux = matriz[a][b];
                matriz[a][b] = matriz[y][b];
                matriz[y][b] = aux;
            }
        }
        printf("\n");
    }
}

void trocarElementosColuna (int matriz[i][j], int linha, int coluna) {
    int x, y, aux;
    printf("Digite a coluna X: ");
    scanf("%d", &x);
    printf("Digite a coluna Y: ");
    scanf("%d", &y);
    for(int a = 0; a < linha; a++) {
        for(int b = 0; b < coluna; b++) {
            if(x == b) {
                aux = matriz[a][b];
                matriz[a][b] = matriz[a][y];
                matriz[a][y] = aux;
            }
        }
        printf("\n");
    }
}

int main() {
    int linha, coluna;
    int matriz[i][j];
    printf("Ler Matriz\n\n");
    linha = pegaLinha();
    coluna = pegaColuna();
    lerMatriz(matriz, linha, coluna);
    printf("\nMostrar Matriz\n\n");
    printf("\nTrocar Elementos da Linha X pela Linha Y\n");
    trocarElementosLinha(matriz, linha, coluna);
    printf("\nTrocar Elementos da Coluna X pela Coluna Y\n");
    trocarElementosColuna(matriz, linha, coluna);
    mostrarMatriz(matriz, linha, coluna);
}