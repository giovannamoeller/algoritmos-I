#include <stdio.h>

int verificar(int num);

int main() {
    int x;
    scanf("%d", &x);
    printf("Retorno = %d\n", verificar(x));
}

int verificar(int num) {
    if (num > 0) {
        return 1;
    } else if (num == 0) {
        return 0;
    } else if (num < 0) {
        return -1;
    }
}
