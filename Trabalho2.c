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
    int linha, coluna;
    linha = pegaLinha();
    coluna = pegaColuna();
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
    }
}

void trocarDiagonal(int matriz[i][j], int linha, int coluna) {
    int a, b, aux, c = coluna - 1;
    if(linha != coluna) {
        printf("A troca de diagonal principal pela secundária só pode ser feita em matriz de ordem igual. Volte ao menu e reescreve a matriz");
    } else {
        for(a = 0; a < linha; a++) {
            for(b = 0; b < coluna; b++) {
                if(a == b) {
                    aux = matriz[a][b];
                    matriz[a][b] = matriz[a][c];
                    matriz[a][c] = aux;
                    c--;
                }
            }
        }
    }
}

void matrizSimetrica(int matriz[i][j], int linha, int coluna) {
    int a, b, cont = 0;
    if(linha != coluna) {
        printf("A matriz simétrica só pode ser calculada com matriz quadrada. Volte ao menu e digite uma outra matriz.");
    }
    else {
        for(a = 0; a < linha; a++) {
            for(b = 0; b < coluna; b++) {
                if(matriz[a][b] != matriz[b][a]) {
                    cont++;
                }
            }
        }
        if(cont != 0) {
            printf("A matriz não é simétrica\n\n");
        }
    }
}

void matrizQuadradoMagico(int matriz[i][j], int linha, int coluna) {
    int a, b = 0, soma1 = 0, soma2 = 0, cont = 0, c = coluna - 1, soma3 = 0, soma4 = 0;
    if(linha != coluna) {
        printf("O quadrado mágico só pode ser calculado com matriz quadrada. Volte ao menu e digite uma outra matriz.");
    } else {
        for(a = 0; a < linha; a++) {
            soma1 += matriz[a][b];
            for(b = 0; b < coluna; b++) {
                if(a == b) { 
                    soma3 += matriz[a][b]; // soma diagonal principal
                    soma4 += matriz[a][c]; // soma diagonal secundária
                    c--;
                }
                soma2 += matriz[a][b]; // soma de linhas
            }
            if (a < linha - 1) {
                soma2 = 0;
            }
        }
        for(b = 0; b < coluna; b++) {
            for(a = 0; a < linha; a++) {
                soma1 += matriz[a][b]; // soma de colunas
            }
            if (b < coluna - 1) {
                soma1 = 0;
            }
        }
        if(soma1 != soma2 && soma3 != soma4) cont++;
        if(cont != 0) {
            printf("A matriz não é um quadrado mágico\n\n");
        } else {
            printf("A matriz é um quadrado mágico. Soma = %d\n\n", soma4);
        }
    }
}

void matrizQuadradoLatino(int matriz[i][j], int linha, int coluna) {
    if(linha != coluna) {
        printf("O quadrado mágico só pode ser calculado com matriz quadrada. Volte ao menu e digite uma outra matriz.");
    } else {

    }
}

void menu() {
    int linha, coluna, op = 1, tecla;
    int matriz[i][j];
    printf("\t\t\t\t MENU \t\t\t\t");

    printf("\t\tSelecione uma opção abaixo: \t\t");
    printf("1. Ler elementos de uma matriz.\n\n2.Mostrar os elementos de uma matriz.
    \n\n3. Trocar elementos da linha X pela linha Y.\n\n4. Trocar elementos da coluna X pela coluna Y.
    \n\n5. Trocar elementos da diagonal principal com a diagonal secundária.
    \n\n6. Verificar se uma matriz é simétrica.
    \n\n7. Verificar se uma matriz é um quadrado mágico.
    \n\n8. Verificar se uma matriz é quadrado latino.
    \n\n9. Verificar se uma matriz é matriz de permutação.
    \n\nPressione ESC para sair.");
    tecla = getch();
    if(tecla == 27) return 0;
    while (op >= 1 && op <= 9) {
        switch(op) {
            case 1: lerMatriz()
        }
    }

}

int main() {
    menu();
    lerMatriz(matriz, linha, coluna);
    //printf("\nMostrar Matriz\n\n");
    //printf("\nTrocar Elementos da Linha X pela Linha Y\n");
    //trocarElementosLinha(matriz, linha, coluna);
    //printf("\nTrocar Elementos da Coluna X pela Coluna Y\n");
    //trocarElementosColuna(matriz, linha, coluna);
    //trocarDiagonal(matriz, linha, coluna);
    //matrizSimetrica(matriz, linha, coluna);
    //matrizQuadradoMagico(matriz, linha, coluna);
    matrizQuadradoLatino(matriz, linha, coluna);
    //mostrarMatriz(matriz, linha, coluna);
}