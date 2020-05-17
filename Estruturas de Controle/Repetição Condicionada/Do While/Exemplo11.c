#include <stdio.h>

int main() {

    int x = 100, cont = 0;
    while (x > 90) { 
        x--;
        if (x % 2 == 0) continue;
        printf("%d ", x);  // só printa valores ímpares!
        cont++;
    }
    printf("\n --> %d\n", cont);
}