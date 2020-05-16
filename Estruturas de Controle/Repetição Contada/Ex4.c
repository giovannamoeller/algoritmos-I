#include <stdio.h>

int main() {

    int l1, l2, i, soma = 0;
    scanf("%d %d", &l1, &l2); // l1 = limite inferior; l2 = limite superior
    for (i = l1 + 1; i < l2; i++) { // intervalo aberto
        if (i % 2 == 0){
            printf("%d\n", i);
            soma += i;
        }
    }
    printf("Somatorio = %d\n", soma);
}