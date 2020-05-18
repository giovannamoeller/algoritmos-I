#include <stdio.h>

int f2 (int a, int b, int c) {
    if (a > b && b > c)
        return a;
    if (a < b && b < c)
        return a;
    return (a + b + c) / 2; // else
}

int main() {
    printf("%d\n", f2(10, 8, -1));
    printf("%d\n", f2(1, 4, 5));
    printf("%d\n", f2(1, 4, 5));
    printf("%d\n", f2(4 * f2(10, 5, -1), 6 * f2(1, 3, 5) -1, 2 - f2(100, 1, 3))); // f2(40, 0, -50) = 40
}



