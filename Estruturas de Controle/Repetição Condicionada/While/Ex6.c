#include <stdio.h>

int main() {

    int n, op = 1, fat, i = 0;
    while (op == 1){
        scanf("%d", &n);
        if (n == 0){
            printf("0! = 1\n");
        } else if (n > 0) {  
            fat = i = n;
            while (i > 1){
                fat *= i - 1;
                i--;
            }
            printf("Fatorial de %d = %d\n", n, fat);
        } else {
            printf("Nao existe fatorial de numero negativo!\n");
        }
        printf("Digite 1 se quiser fazer o reprocessamento ou 0 para sair: ");
        scanf("%d", &op);
    }
}