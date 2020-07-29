// Aluna: Giovanna Gimenes Moeller
// Curso: Sistemas de Informação

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>
#define i 20
#define j 20
#define max 100
#define esc 27
#define baixo 80
#define cima 72
#define enter 13
#define f1 59

int a;
short posX = 5, posY = 3;

void moveXY(int x, int y, char t[10])
{
	HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD position = {x,y};
	SetConsoleCursorPosition(hStdout, position);
	printf("%s", t);	
}

void ajuda() {
	system("cls");
	int tecla;
	moveXY(10, 2, "AJUDA");
	moveXY(2, 5, "Utilize as setas (para cima e para baixo) do teclado para navegar entre o menu");
	moveXY(2, 9, "Utilize as funções desejadas, mas sempre lembrando de primeiro escrever a matriz para não causar problemas");
	moveXY(15, 17, "Pressione qualquer tecla para voltar ao menu");
	tecla = getch();
}

int pegaLinha() {
    int linha;
    moveXY(10, 5, "Digite o tamanho total de linhas da matriz: ");
    scanf("%d", &linha);
    return linha;
}

int pegaColuna() {
    int coluna;
    moveXY(10, 10, "Digite o tamanho total de colunas da matriz: ");
    scanf("%d", &coluna);
    return coluna;
}

void lerMatriz (int matriz[i][j], int linha, int coluna) {
   	moveXY(20, 5, "Digite os valores da matriz:\n\n");
    int a, b;
    for (a = 0; a < linha; a++) {
        for(b = 0; b < coluna; b++) {
        	printf ("\n\tElemento[%d][%d] = ", a, b);
            scanf("%d", &matriz[a][b]);
            printf("\n");
        }
    }
}

void mostrarMatriz (int matriz[i][j], int linha, int coluna) {
	int a, b, c;
	printf("\n\n\n\t\t");
    for(a = 0; a < linha; a++) {
        for(b = 0; b < coluna; b++) {
            printf("%d\t", matriz[a][b]);
        }
        printf("\n\n\t\t");
    }
	moveXY(5, 15, "Pressione qualquer tecla para voltar ao menu");
	c = getch();
}

void trocarElementosLinha (int matriz[i][j], int linha, int coluna) {
    int x, y, aux, a, b, c;
    printf("\n\n\tDigite a linha X: ");
    scanf("%d", &x);
    printf("\n\n\tDigite a linha Y: ");
    scanf("%d", &y);
    for(a = 0; a < linha; a++) {
        for(b = 0; b < coluna; b++) {
            if(x == a) {
                aux = matriz[a][b];
                matriz[a][b] = matriz[y][b];
                matriz[y][b] = aux;
            }
        }
    }
    moveXY(5, 15, "Pressione qualquer tecla para voltar ao menu");
	c = getch();
}

void trocarElementosColuna (int matriz[i][j], int linha, int coluna) {
    int x, y, aux, a, b, c;
    printf("\n\n\tDigite a coluna X: ");
    scanf("%d", &x);
    printf("\n\n\tDigite a coluna Y: ");
    scanf("%d", &y);
    for(a = 0; a < linha; a++) {
        for(b = 0; b < coluna; b++) {
            if(x == b) {
                aux = matriz[a][b];
                matriz[a][b] = matriz[a][y];
                matriz[a][y] = aux;
            }
        }
    }
    moveXY(5, 15, "Pressione qualquer tecla para voltar ao menu");
	c = getch();
}

void trocarDiagonal(int matriz[i][j], int linha, int coluna) {
    int a, b, aux, c = coluna - 1, t;
    if(linha != coluna) {
        printf("\n\n\tA troca de diagonal principal pela secundária só pode ser feita em matriz de ordem igual. Volte ao menu e reescreve a matriz");
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
        mostrarMatriz(matriz, linha, coluna);
    }
    moveXY(5, 15, "Pressione qualquer tecla para voltar ao menu");
	t = getch();
}

void matrizSimetrica(int matriz[i][j], int linha, int coluna) {
    int a, b, cont = 0, c;
    if(linha != coluna) {
        printf("\n\n\tA matriz simétrica só pode ser calculada com matriz quadrada. Volte ao menu e digite uma outra matriz.");
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
            printf("\n\n\tA matriz não é simétrica\n\n");
        } else {
        	printf("\n\n\tA matriz é simétrica\n\n");	
		}
    }
    moveXY(5, 15, "Pressione qualquer tecla para voltar ao menu");
	c = getch();
}

void matrizQuadradoMagico(int matriz[i][j], int linha, int coluna) {
    int a, b = 0, soma1 = 0, soma2 = 0, cont = 0, c = coluna - 1, soma3 = 0, soma4 = 0, t;
    if(linha != coluna) {
        printf("\n\n\tO quadrado mágico só pode ser calculado com matriz quadrada. Volte ao menu e digite uma outra matriz.");
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
            printf("\n\n\n\tA matriz não é um quadrado mágico\n\n");
        } else {
            printf("\n\n\n\tA matriz é um quadrado mágico. Soma = %d\n\n", soma4);
        }
    }
    moveXY(5, 15, "Pressione qualquer tecla para voltar ao menu");
	t = getch();
}

void matrizQuadradoLatino(int matriz[i][j], int linha, int coluna) {
	int a, b, c, x, y, n, cont = 0, soma = 0, soma2 = 0;
    if(linha != coluna) {
        printf("\n\n\tO quadrado latino não pode ser calculado com matriz quadrada. Volte ao menu e digite uma outra matriz.");
    } else {
    	n = linha;
    	for(a = 1; a <= n; a++) {
    		soma += a;
		}
		for(a = 0; a < linha; a++) {
			for(b = 0; b < coluna; b++) {
				soma2 += matriz[a][b];
			}
			if (a < linha - 1) soma2 = 0;
		}
		printf("%d %d", soma, soma2);
		if(soma == soma2) {
            printf("\n\n\n\tA matriz é um quadrado latino\n\n");
        } else {
            printf("\n\n\n\tA matriz não é um quadrado latino.");
        } 
    }
    moveXY(5, 15, "Pressione qualquer tecla para voltar ao menu");
	c = getch();
}

void matrizPermutacao(int matriz[i][j], int linha, int coluna) {
	int c;
	if(linha != coluna) {
        printf("\n\n\n\tA matriz de permutação só pode ser calculada em matriz de ordem N. Volte ao menu e digite uma outra matriz.");
    } else {
		int verdade = 1, a, b;
  		int soma_coluna[max], soma;

		for(a = 0; a < linha; a++)
			soma_coluna[i] = 0;
	
		for(a = 0; a < linha && verdade == 1; a++){
			soma = 0;
		    for(b = 0; b < coluna && verdade == 1; b++){
		      if(matriz[a][b] != 1 && matriz[a][b] != 0)
					verdade = 0;
		      else{
				soma_coluna[b] += matriz[a][b];
				soma += matriz[a][b];
		      }
		    }
		    if(soma != 1)
		      verdade = 0;
		}
		for(a = 0; a < linha && verdade == 1; a++)
	    	if(soma_coluna[a] != 1)
	      		verdade = 0;
		
		if(verdade) printf("\n\n\n\tA matriz é de permutação");
	    else printf("\n\n\n\tA matriz não é de permutação");
    }
    moveXY(5, 15, "Pressione qualquer tecla para voltar ao menu");
	c = getch();
}

void menu() {
	system("cls");
	moveXY(32,1, "--- MENU ---");	
	moveXY(8,3,"Ler elementos de uma matriz");
	moveXY(8,5,"Mostrar os elementos de uma matriz");
	moveXY(8,7,"Trocar elementos da linha X pela linha Y");
	moveXY(8,9,"Trocar elementos da coluna X pela coluna Y");
	moveXY(8,11,"Trocar elementos da diagonal principal com a diagonal secundária");
	moveXY(8,13,"Verificar se a matriz é simétrica");
	moveXY(8,15,"Verificar se uma matriz é um quadrado mágico");
	moveXY(8,17,"Verificar se uma matriz é um quadrado latino");
	moveXY(8,19,"Verificar se uma matriz é uma matriz de permutação");
	moveXY(8,21,"Alterar quantidade de linhas e colunas");
	moveXY(15,23,"Pressione ESC para sair || F1 para tela de ajuda");
}

void menu2(int *linha, int *coluna) {
	*linha = pegaLinha();
    *coluna = pegaColuna();
}

int main() {
	system("color 5F");
	setlocale(LC_ALL, "");
    int matriz[i][j], linha = 0, coluna = 0;
    menu2(&linha, &coluna);
    system("cls");
	moveXY(5, 5, "->");
	do
	{		
		menu();
		moveXY(posX, posY, "->");
		a = getch();
		switch(a)
		{
			case cima:
				if (posY > 3)
				{
					moveXY(5, posY, "  ");
					posY -= 2;
	                moveXY(5, posY, "->");				
		     	}
			break;
			
			case baixo:
				if (posY < 21)
				{
					moveXY(5, posY, "  ");
					posY += 2;
	                moveXY(5, posY, "->");				
		     	}
			break;
			
			case enter:  // enter
				if (posY == 3)    
				{
					system("cls");
					moveXY(15, 2, "-- Ler elementos de uma matriz --");
	               	lerMatriz(matriz, linha, coluna);
	               	system("cls");
		     	}
		     	
				if (posY == 5) 
				{
					system("cls");
					moveXY(15,1, "-- Mostrar elementos de uma matriz --");
	               	mostrarMatriz(matriz, linha, coluna);
	               	system("cls");
		     	}
		     	
		     	if (posY == 7)
		     	{
		     		system("cls");
					moveXY(15,1, "-- Trocar elementos da linha X pela linha Y --");
	               	trocarElementosLinha(matriz, linha, coluna);
	               	system("cls");
				}
				
				if (posY == 9)
		     	{
		     		system("cls");
					moveXY(15,1, "-- Trocar elementos da coluna X pela coluna Y --");
	               	trocarElementosColuna(matriz, linha, coluna);
	               	system("cls");
				}
				
				if (posY == 11)
		     	{
		     		system("cls");
					moveXY(5,1, "-- Trocar elementos da diagonal principal com a diagonal secundária --");
	               	trocarDiagonal(matriz, linha, coluna);
	               	system("cls");
				}
				
				if (posY == 13)
		     	{
		     		system("cls");
					moveXY(15,1, "-- Verificar se a matriz é simétrica --");
	               	matrizSimetrica(matriz, linha, coluna);
	               	system("cls");
				}
				
				if (posY == 15)
		     	{
		     		system("cls");
					moveXY(15,1, "-- Verificar se a matriz é um quadrado mágico --");
	               	matrizQuadradoMagico(matriz, linha, coluna);
	               	system("cls");
				}
				
				if (posY == 17)
		     	{
		     		system("cls");
					moveXY(15,1, "-- Verificar se a matriz é um quadrado latino --");
	               	matrizQuadradoLatino(matriz, linha, coluna);
	               	system("cls");
				}
				
				if (posY == 19)
		     	{	
		     		system("cls");
					moveXY(15,1, "-- Verificar se uma matriz é uma matriz de permutação --");
	               	matrizPermutacao(matriz, linha, coluna);
	               	system("cls");
				}
				
				if (posY == 21)
		     	{	
		     		system("cls");
					menu2(&linha, &coluna);
	               	system("cls");
				}
			break;
			case esc: 
				system("cls");
				printf("Programa encerrado.");
				exit(EXIT_SUCCESS);
				break;
			case f1:
				system("cls");
				ajuda();
	    }
    }while(1);
	return 0;
}
