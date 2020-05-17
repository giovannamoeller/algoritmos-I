#include <stdio.h>

int main() {

    int x;
    for (x = 0; x < 100; x++) {
        if (x == 20) break; // para completamente o loop
        printf("%d ", x); // 0 até 19
    }
}