#include <stdio.h>

int main(){

    int i = 0, j = 0;
    for (i = 1; i <= 9; i += 2){
        for (j = 7; j >= 5; j--){
            printf("I=%d J=%d\n", i, j);
        }
    }
}