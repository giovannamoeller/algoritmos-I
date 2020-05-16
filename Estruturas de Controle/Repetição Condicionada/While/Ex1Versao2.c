#include <stdio.h>

int main() {

    int num = 0;
    while (num < 1 || num > 4){
        scanf("%d", &num);
        if (num < 1 || num > 4){
            printf("Numero invalido\nDigite novamente: ");
        }
    }
}