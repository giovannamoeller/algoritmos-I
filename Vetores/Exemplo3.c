// Passagem de vetores como parâmetros para funções

#include <stdio.h>

// Rotina auxiliar - troca
void troca (int *a, int *b) {
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}
// Impressao do vetor
void mostraVetor (int tam, int v[]) {
    int i;
    for (i = 0; i < tam; i++)
    printf ("%d ", v[i]);
    printf ("\n");
}
// Busca em um vetor nao ordenado
int busca (int tam, int v[], int elem) {
    int i;
    for (i = 0; i < tam; i++)
    if (v[i] == elem) return 1;
    return 0;
}
// Busca em um vetor ordenado
int buscaOrd (int tam, int v[], int elem) {
    int i;
    for (i = 0; i < tam && v[i] <= elem; i++)
    if (v[i] == elem) return 1;
    return 0;
}
// Ordena vetor
int ordenaVetor (int tam, int v[]) {
    int i, j;
    for (i = 0; i < tam - 1; i++)
    for (j = i + 1; j < tam; j++)
    if (v[i] > v[j]) troca(&v[i], &v[j]);
}
// Programa principal
int main() {
    int i, j;
    int vetor[10] = {3, 5, 4, 6, 1, 2, 0, 8, 9, 7};
    printf ("%d \n\n", busca(10, vetor, 13));
    mostraVetor(10, vetor);
    ordenaVetor(10, vetor);
    mostraVetor(10, vetor);
    printf ("%d \n\n", buscaOrd(10, vetor, 3));
    printf ("\n\n");
}