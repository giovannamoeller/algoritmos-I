#include <stdio.h>

int main() {

    int n1, n2, quo = 0, op = 1; 
    while (op == 1){
        scanf("%d %d", &n1, &n2);
        while (n1 >= n2){
            n1 -= n2;
            quo++;
        }
        printf("Quociente: %d\n", quo);
        printf("Resto: %d\n", n1);
        printf("Digite 1 se quiser fazer o reprocessamento ou 0 para sair: ");
        scanf("%d", &op);
        quo = 0;
    }
}