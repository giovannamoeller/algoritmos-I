#include <stdio.h>

int main(){

    int i, num;
    scanf("%d", &num);
    for (i = num; i < num + 12; i++){
        if (i % 2 != 0){
            printf("%d\n", i);
        }
    }
}