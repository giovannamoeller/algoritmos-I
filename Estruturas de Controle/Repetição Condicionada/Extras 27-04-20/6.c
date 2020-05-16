#include <stdio.h>

int main() {

    int n1, n2, s = 0;
    printf("Digite os dois inteiros positivos: ");
    scanf("%d %d" , &n1, &n2);
    while(n1 != 0) {
        if (n1 % 2 != 0) s += n2;
        n1 /= 2;
        n2 *= 2;
    }
    printf("Resultado = %d\n", s);
}
