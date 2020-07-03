#include <stdio.h>

int main() {
    int n, cont1 = 0, cont2 = 0;
    printf("Insira a quantidade de alunos: ");
    scanf("%d", &n);
    int alunos[n];
    for (int i = 0; i < n; i++) {
        printf("Insira a nota do aluno %d: ", i + 1);
        scanf("%d", &alunos[i]);
        cont1 += alunos[i];
        if (alunos[i] > 5) {
            cont2++;
        }
    }
    printf("Media dos alunos = %.2f\n", (float)cont1/n);
    if(cont2 == 0) {
        printf("Nao ha nenhum aluno com nota acima de 5\n");
    } else {
        printf("%d alunos tiraram nota maior que 5\n", cont2);
    }
}