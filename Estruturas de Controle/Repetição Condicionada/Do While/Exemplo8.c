#include <stdio.h>

int main() {

    int x;
    while (1) { // while x > 0 é o correto!
        scanf("%d", &x);
        if (x <= 0) break; // não usar o break dessa forma!
    }
}