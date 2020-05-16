#include <stdio.h>

int main() {

    int num;
    scanf("%d", &num);
    while (num < 1 || num > 4){
        printf("Numero invalido\nDigite novamente: ");
        scanf("%d", &num);
    }
}