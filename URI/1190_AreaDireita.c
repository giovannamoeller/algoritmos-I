#include <stdio.h>

int main() {
    char O[2];
    int i, j, x, y, p = 11, r = 4;
    double s = 0, M[12][12];
    scanf("%s", &O);
    for(i = 0; i < 12; i++) {
        for(j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }
    for(x = 1; x <= 10; x++) {
        if(x <= 5) {
            for(y = p; y <= 11; y++) {
                s+= M[x][y];
            }
            p--;
        } else if (x >= 6) {
            for(y = r; y <= 11; y++) {
                s+= M[x][y];
            }
            r++;
        }
    }
    if(O[0] == 'S') {
        printf("%.1lf\n", s);
    } else if(O[0] == 'M') {
        printf("%.1lf\n", s / 30.0);
    }
}