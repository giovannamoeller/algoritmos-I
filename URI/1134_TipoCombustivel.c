#include <stdio.h>

int main() {

    int op = 0, alcool = 0, gasolina = 0, diesel = 0;
    while(op != 4) {
        scanf("%d", &op);
        while (op < 1 || op > 4) {
            scanf("%d", &op);
        }
        switch (op) {
            case 1: alcool++;   
                    break;
            case 2: gasolina++;
                    break;
            case 3: diesel++;
                    break;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);
}