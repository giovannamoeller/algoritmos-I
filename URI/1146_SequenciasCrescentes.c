#include <stdio.h>

int main() {

    int x, num = 1;
    do {
        scanf("%d", &x);
        while (num <= x) {
            if (num == x) {
                printf("%d\n", num);
            } else {
                printf("%d ", num);
            }
            num++;
        }
        num = 1;
    } while(x != 0);
}