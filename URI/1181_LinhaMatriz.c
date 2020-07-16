#include <stdio.h>

int main() {
    int i, j, L;
    double M[12][12], soma;
    char T[2];
    scanf("%d", &L); // linha a ser executada
    scanf("%s", &T); // operação a ser executada
    for (i = 0; i <= 11; i++) {
        for (j = 0; j <= 11; j++){
            scanf("%lf", &M[i][j]);
            if(i == L) {
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