// srand() = valores não irão se repetir

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int rolaDado() {
    return rand() % 6 + 1;
}

int main() {
    int i;
    srand(time(NULL));
    for (i = 1; i <= 10; i++)
        printf ("%d\n",rolaDado());
}