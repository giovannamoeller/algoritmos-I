#include <stdio.h>

int main(){

    int num;
    scanf("%d", &num);
    switch (num){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("Dias = 31\n");
            break;
        case 4: case 6: case 9: case 11:
            printf("Dias = 30\n");
            break;
        case 2:
            printf("Dias = 28\n");
            break;
        default:
            printf("Numero invalido\n");
    }
}