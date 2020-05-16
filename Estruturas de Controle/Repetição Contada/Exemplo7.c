#include <stdio.h>

int main(){

    int x, y;
    for (x = 0, y = 0; x + y < 20; ++x, ++y){
        printf("%d %d = %d\n", x, y, x + y);
    }
}