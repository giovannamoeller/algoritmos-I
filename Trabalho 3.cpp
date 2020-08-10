// Aluna: Giovanna Gimenes Moeller
// Curso: Sistemas de Informação
// Jogo da Velha
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>

#define esc 27
#define baixo 80
#define cima 72
#define esquerda 75
#define direita 77
#define enter 13


int posX = 10, posY = 6;

void moveXY(int x, int y)
{
	HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD position = {x,y};
	SetConsoleCursorPosition(hStdout, position);	
}

void tabuleiro(char casas[3][3]) {
	system("cls");
	printf("\n\n\tJOGO DA VELHA\n\n");
	printf("\n\n");
	printf("\t  %c |  %c |  %c \n", casas[0][0], casas[0][1], casas[0][2]);
	printf("\t---------------\n");
	printf("\t  %c |  %c |  %c \n", casas[1][0], casas[1][1], casas[1][2]);
	printf("\t---------------\n");
	printf("\t  %c |  %c |  %c \n", casas[2][0], casas[2][1], casas[2][2]);
}

int resultado(char casas[3][3], int cont_jogadas) {
	if(casas[0][0] == 'X' && casas[0][1] == 'X' && casas[0][2] == 'X') cont_jogadas = 11; 
	if(casas[1][0] == 'X' && casas[1][1] == 'X' && casas[1][2] == 'X') cont_jogadas = 11;
	if(casas[2][0] == 'X' && casas[2][1] == 'X' && casas[2][2] == 'X') cont_jogadas = 11;
	if(casas[0][0] == 'X' && casas[1][0] == 'X' && casas[2][0] == 'X') cont_jogadas = 11;
	if(casas[0][1] == 'X' && casas[1][1] == 'X' && casas[2][1] == 'X') cont_jogadas = 11;
	if(casas[0][2] == 'X' && casas[1][2] == 'X' && casas[2][2] == 'X') cont_jogadas = 11;
	if(casas[0][0] == 'X' && casas[1][1] == 'X' && casas[2][2] == 'X') cont_jogadas = 11;
	if(casas[0][2] == 'X' && casas[1][1] == 'X' && casas[2][0] == 'X') cont_jogadas = 11;
				
	if(casas[0][0] == 'O' && casas[0][1] == 'O' && casas[0][2] == 'O') cont_jogadas = 12; 
	if(casas[1][0] == 'O' && casas[1][1] == 'O' && casas[1][2] == 'O') cont_jogadas = 12;
	if(casas[2][0] == 'O' && casas[2][1] == 'O' && casas[2][2] == 'O') cont_jogadas = 12;
	if(casas[0][0] == 'O' && casas[1][0] == 'O' && casas[2][0] == 'O') cont_jogadas = 12;
	if(casas[0][1] == 'O' && casas[1][1] == 'O' && casas[2][1] == 'O') cont_jogadas = 12;
	if(casas[0][2] == 'O' && casas[1][2] == 'O' && casas[2][2] == 'O') cont_jogadas = 12;
	if(casas[0][0] == 'O' && casas[1][1] == 'O' && casas[2][2] == 'O') cont_jogadas = 12;
	if(casas[0][2] == 'O' && casas[1][1] == 'O' && casas[2][0] == 'O') cont_jogadas = 12;
	
	return cont_jogadas;
}

int main() {
	system("color 5F");
	char casas[3][3];
	char res;
	int cont_jogadas, l, c, vez = 0, i, j, resul, t;
	do {
		cont_jogadas = 1;
		for(i = 0; i <= 2; i++) {
			for(j = 0; j <= 2; j++) {
				casas[i][j] = ' ';
			}
		}
		do {
			tabuleiro(casas);
			if(vez %2 == 0) {
				printf("\n\n\tJogador X");
			} else {
				printf("\n\n\tJogador O");
			}
			
			printf("\n\n\tUtilize as setas para mover o cursor. Pressione enter para marcar a casinha.");
			moveXY(posX, posY);
			t = getch();
			while(t != enter) {
				t = getch();
				if(t == direita) {
					if(posX != 20) {
						posX += 5;
						moveXY(posX, posY);
					}
				} 
				if(t == esquerda) {
					if(posX != 10) {
						posX -= 5;
						moveXY(posX, posY);
					}
				}
				if(t == baixo) {
					if(posY != 10) {
						posY += 2;
						moveXY(posX, posY);
					}
				}
				if(t == cima) {
					if(posY != 6) {
						posY -= 2;
						moveXY(posX, posY);
					}
				}
			}
			if(posX == 10 && posY == 6) {
				l = 1;
				c = 1;
			}
			if(posX == 15 && posY == 6) {
				l = 1;
				c = 2;
			}
			if(posX == 20 && posY == 6) {
				l = 1;
				c = 3;
			}
			if(posX == 10 && posY == 8){
				l = 2;
				c = 1;
			}
			if(posX == 10 && posY == 10) {
				l = 3;
				c = 1;
			}
			if(posX == 15 && posY == 8) {
				l = 2;
				c = 2;
			}
			if(posX == 15 && posY == 10) {
				l = 3;
				c = 2;
			}
			if(posX == 20 && posY == 8) {
				l = 2;
				c = 3;
			}
			if(posX == 20 && posY == 10) {
				l = 3;
				c = 3;
			}
			if(l < 1 || c < 1 || l > 3 || c > 3) {
				l = 0; // jogada inválida
				c = 0;
				} else if(casas[l-1][c-1] != ' '){
					l = 0;
					c = 0;
			}
			// jogada válida
			if(vez % 2 == 0) {
				casas[l-1][c-1] = 'X';
			} else {
				casas[l-1][c-1] = 'O';
			}
			vez++;
			cont_jogadas++;
			cont_jogadas = resultado(casas, cont_jogadas);	
		} while(cont_jogadas <= 9);
		tabuleiro(casas);
		if(cont_jogadas == 10) printf("\n\n\tJogo Empatado");
		else if (cont_jogadas == 11) printf("\n\n\tX Venceu!");
		else if (cont_jogadas == 12) printf("\n\n\tO Venceu!");
		printf("\n\n\tDeseja jogar novamente? [S-N]: \n");
		scanf("%s", &res);
	} while(res == 's' || res == 'S');
}
