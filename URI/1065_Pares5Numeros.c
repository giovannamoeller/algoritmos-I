#include <stdio.h>

int main(){

    int i, num;
    int pos = 0;
    for (i = 0; i < 5; i++){
        scanf("%d", &num);
        if (num % 2 == 0){
            pos++;
        }
    }
    printf("%d valores pares\n", pos);
}