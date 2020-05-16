#include <stdio.h>

int main() {

    int gol_i = 0, gol_gre = 0, in = 0, gr = 0, total = 0, empate = 0;
    int op = 1;
    while (op == 1) {
        total++;
        scanf("%d %d", &gol_i, &gol_gre);
        if (gol_i > gol_gre) in++;
        else if (gol_i == gol_gre) empate++;
        else gr++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &op);
    }
    printf("%d grenais\n", total);
    printf("Inter:%d\n", in);
    printf("Gremio:%d\n", gr);
    printf("Empates:%d\n", empate);
    if (in > gr) printf("Inter venceu mais\n");
    else if (in == gr) printf("Nao houve vencedor\n");
    else printf("Gremio venceu mais\n");
}