#include <stdio.h>
#include <string.h>

// Fim de uma cadeia - \0 (por isso que precisa ter um índice a mais no vetor)
// ex: palavra 'cadeia' - char palavra[7]

int main() {
    // strcpy - copia o conteúdo de uma string em outra
    // str2 tem que ter, no máximo, o mesmo tamanho de str1
    char str1[40], str2[40];
    strcpy(str2, "Algoritmos I");
    strcpy(str1, str2); // str1 vai ter o mesmo valor de str2
    printf("%s", str1);
    printf("\n%s", str2);
}