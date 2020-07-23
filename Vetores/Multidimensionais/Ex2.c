#include <stdio.h>
#define l 2
#define c 3

int main() {
    double M1[l][c], M2[l][c];
    int i, j;
    printf("Matriz 1\n");
    for(i = 0; i < l; i++) {
        for(j = 0; j < c; j++) {
            scanf("%lf", &M1[i][j]);
        }
    }
    printf("Matriz 2\n");
    for(i = 0; i < l; i++) {
        for(j = 0; j < c; j++) {
            scanf("%lf", &M2[i][j]);
        }
    }
    for(i = 0; i < l; i++) {
        for(j = 0; j < c; j++) {
            printf("%.1lf  ", M1[i][j] + M2[i][j]);
        }
        printf("\n");
    }
}