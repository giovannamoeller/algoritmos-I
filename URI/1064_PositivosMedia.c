#include <stdio.h>

int main(){

    int i;
    float num;
    int pos = 0; 
    float soma = 0;
    for (i = 0; i < 6; i++){
        scanf("%f", &num);
        if (num > 0){
            pos++;
            soma += num;
        }
    }
    printf("%d valores positivos\n", pos);
    printf("%.1f\n", soma / pos);
}