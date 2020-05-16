#include <stdio.h>

int main(){

    int a = 10, b = 20, x;
    x = (b > a) ? b : a; // se b > a, então x vai armazenar 'b', se não, armazena 'a''
    printf("x = %d\n", x);
}

