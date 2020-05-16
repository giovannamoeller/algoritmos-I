#include <stdio.h>

int main(){

    int i, x, y;
    int pos = 0;
    scanf("%d %d", &x, &y);
    for (i = y + 1; i < x; i++){
        if (i % 2 != 0){
            pos += i;
        }
    }
    printf("%d\n", pos);
}