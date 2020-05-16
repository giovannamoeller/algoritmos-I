#include <stdio.h>

int main(){

    int i, j, k, s;
    s = 7;
    for (k = 1; k <= 9; k += 2){
        for (i = k, j = s; i <= k, j >= s - 2; i = i, j--){
            printf("I=%d J=%d\n", i, j);
        }
        s += 2;
    }
}