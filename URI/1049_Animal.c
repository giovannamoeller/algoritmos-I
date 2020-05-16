#include <stdio.h>
#include <string.h>

int main(){

    char p1[40], p2[40], p3[40];
    scanf("%s %s %s", p1, p2, p3);
    if (strcmp(p1, "vertebrado") == 0){ // é igual a zero pois o strcmp compara as diferenças
        if (strcmp(p2, "ave") == 0){
            if (strcmp(p3, "carnivoro") == 0){
                printf("aguia\n");
            }
            else if (strcmp(p3, "onivoro") == 0){
                printf("pomba\n");
            }
        }
        else if (strcmp(p2, "mamifero") == 0){
            if (strcmp(p3, "onivoro") == 0){
                printf("homem\n");
            }
            else if (strcmp(p3, "herbivoro") == 0){
                printf("vaca\n");
            }
        }
    }
    else if (strcmp(p1, "invertebrado") == 0){
        if (strcmp(p2, "inseto") == 0){
            if (strcmp(p3, "hematofago") == 0){
                printf("pulga\n");
            }
            else if (strcmp(p3, "herbivoro") == 0){
                printf("lagarta\n");
            }
        }
        else if (strcmp(p2, "anelideo") == 0){
            if (strcmp(p3, "hematofago") == 0){
                printf("sanguessuga\n");
            }
            else if (strcmp(p3, "onivoro") == 0){
                printf("minhoca\n");
            }
        }
    }
}