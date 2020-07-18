#include <stdio.h>

int main() {
    char O[2];
    int i, j, x, y, q = 1, p = 10;
    double s = 0, M[12][12];
    scanf("%s", &O);
    for(i = 0; i < 12; i++) {
        for(j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }
    for(x = 0; x <= 4; x++) {
        for(y = q; y <= p; y++) {
            s+= M[x][y];
        }
        p--;
        q++;
    }
    if(O[0] == 'S') {
        printf("%.1lf\n", s);
    } else if(O[0] == 'M') {
        printf("%.1lf\n", s / 30.0);
    }
}