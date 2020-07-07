#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int x, aleatorio = 0, cont = 0;
    srand(time(NULL));
    printf("Digite o valor que voce acha que sera sorteado: ");
    scanf("%d", &x);
    do {
        aleatorio = 1 + (rand() % 10);
        cont++;
        if (aleatorio > x) {
            printf("O numero sorteado é maior que o jogador tentou!\n");
        } else if (aleatorio < x) {
            printf("O numero sorteado é menor que o jogador tentou!\n");
        } else {
            cont--;
        }
    } while(aleatorio != x);
    printf("Voce acertou!! Tentativas: %d\n", cont);
}
