#include <stdio.h>

int main() {
    int i, j, C;
    double M[12][12], soma;
    char T[2];
    scanf("%d", &C); // coluna a ser executada
    scanf("%s", &T); // operação a ser executada
    for (i = 0; i <= 11; i++) {
        for (j = 0; j <= 11; j++){
            scanf("%lf", &M[i][j]);
            if(j == C) {
                soma+= M[i][j];
            }
        }
    }
    if(T[0] == 'S') {
        printf("%.1lf\n", soma);
    } else if (T[0] == 'M') {
        printf("%.1lf\n", soma/12.0);
    }
}