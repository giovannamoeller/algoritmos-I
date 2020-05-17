#include <stdio.h>

int main() {

    int x;
    for (x = 0; x < 10; x++) {
        if (x % 2) { // x % 2 == 1
            continue; // força a próxima interação com o loop, não vai printar
        }
        printf("%d ", x);
    }
}