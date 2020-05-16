#include <stdio.h>

int main(){

    float x;
    for (x = 10; x >= 3; x -= 0.8){
        printf("%5.1f\n", x);
    }
}