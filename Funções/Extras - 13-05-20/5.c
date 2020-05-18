#include <stdio.h>

int carac (char x) {
    //int a = x - '0'; // converte char para int
    if (x >= '0' && x <= '9') return 1;
    return 0;
}

int main() {
    char c;
    printf("Digite um caractere: ");
    scanf("%c", &c);
    printf("%d\n", carac(c));
}



