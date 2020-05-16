#include <stdio.h>

int main(){

    int x, y;
    scanf("%d %d", &x, &y);
    (x > y) ? printf("%d eh maior que %d\n", x, y) : 
    (x == y) ? printf("%d eh igual a %d\n", x, y) : printf("%d eh menor que %d\n", x, y);
}

