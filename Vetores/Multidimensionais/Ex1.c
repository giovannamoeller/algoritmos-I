#include <stdio.h>
#define l 4
#define c 4

int main() {
    double M[l][c];
    int i, j;
    for(i = 0; i < l; i++) {
        for(j = 0; j < c; j++) {
            if(l != 2) scanf("%lf", &M[i][j]);
        }
    }
    for(i = 0; i < l; i++) {
        for(j = 0; j < c; j++) {
            if(j == 2 || i == 2) {
                printf("...     ");
            } else {
                printf("%.2lf    ", M[i][j]);
            }
        }
        printf("\n");
    }
}