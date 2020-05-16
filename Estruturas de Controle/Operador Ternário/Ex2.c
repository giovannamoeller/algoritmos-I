#include <stdio.h>

int main(){

    int a = 1, b = 2, c = 3, x;
    x = a < b ? a < c ? a : c : b < c ? b : c; // x = (a < b) ? (a < c ? a : c) : (b < c ? b : c)
    printf("x = %d\n", x);
}

