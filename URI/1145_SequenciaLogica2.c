#include <stdio.h>

int main() {

    int x, y, i = 0, j = 0, num = 1;
    scanf("%d %d", &x, &y);
    while (i < y) {
        while (j < x && num <= y) {
            if (j == (x - 1)){
                printf("%d\n", num);
            } else {
                printf("%d ", num);
            }
            num++;
            j++;
        }
        i+=3;
        j = 0;
    }
}