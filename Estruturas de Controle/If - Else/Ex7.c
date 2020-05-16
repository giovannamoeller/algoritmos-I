#include <stdio.h>

int main(){

    int n1, n2, n3, media;
    scanf("%d %d %d", &n1, &n2, &n3);
    if (n3 < 0){
        media = (n1 + n2) / 2;
    }
    if (n1 > n2){
        n2 = n3;
        media = (n1 + n2) / 2;
    } else {
        n1 = n3;
        media = (n1 + n2) / 2;
    }
    printf("Media = %d\n", media);
    if (media >= 5){
        printf("Aprovado\n");
    } else if (media < 3){
        printf("Reprovado\n");
    } else if (media >= 3 && media <= 5){
        printf("Exame\n");
    }
}