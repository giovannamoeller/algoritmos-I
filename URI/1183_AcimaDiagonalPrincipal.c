#include <stdio.h>

int main() {
    int i, j, x, y, p = 1, C;
    double M[12][12], soma;
    char O[2];
    scanf("%s", &O); // operação a ser executada
    for (i = 0; i <= 11; i++) {
        for (j = 0; j <= 11; j++){
            scanf("%lf", &M[i][j]);
        }
    }
    for(x = 0; x <= 11; x++) {
        for (y = p; y <= 11; y++) {
            soma+= M[x][y];
        }
        p++;
    }
    if(O[0] == 'S') {
        printf("%.1lf\n", soma);
    } else if (O[0] == 'M') {
        printf("%.1lf\n", soma/66.0);
    }
}