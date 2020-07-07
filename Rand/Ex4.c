#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int x, i1, i2, aleatorio, cont = 0;
    srand(time(NULL));
    printf("Digite o intervalo: ");
    scanf("%d %d", &i1, &i2);
    printf("Digite o valor que voce acha que sera sorteado: ");
    scanf("%d", &x);
   do {
        aleatorio = i1 + (rand() % (i2 - i1));
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
