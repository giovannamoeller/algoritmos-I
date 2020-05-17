#include <stdio.h>

// variáveis locais (recomendado)

void linha(int x);

int main() {
    int tamanho;
    printf("Digite o tamanho: ");
    scanf("%d", &tamanho);
    linha(tamanho);
}

void linha(int x) {
    int i;
    for(i = 0; i <= x; i++)
    printf("%c", 95); // A variavel i na funcao linha nao é reconhecida pela função main (é local da função)
}