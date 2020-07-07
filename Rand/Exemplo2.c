#include <stdio.h>

int main() {
    int i;
    for(i = 1; i <= 10; i++) {
        if (rand() % 2) printf("Cara\n");
        else printf("Coroa\n");
    }
}

/*
x = rand() % 10; // número ‘x’ recebe um valor entre 0 e 9
x = 1+(rand() % 10); // número ‘x’ recebe um valor entre 1 e 10
x = (rand() % 101)/100.; // ‘x’ recebe um valor entre 0.00 e 1.00
*/