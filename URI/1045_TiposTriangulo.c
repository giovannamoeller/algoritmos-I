#include <stdio.h>
#include <math.h>

int main(){

    double a, b, c, maior, menor, meio;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a == b && b == c){
        maior = a;
        meio = b;
        menor = c;
    }
    if (a >= b && a >= c){
        maior = a;
        if (b >= c){
            meio = b;
            menor = c;
        }
        else{
            meio = c;
            menor = b;
        }
    }
    if (b >= a && b >= c){
        maior = b;
        if (a >= c){
            meio = a;
            menor = c;
        }
        else{
            meio = c;
            menor = a;
        }
    }
    if (c >= a && c >= b){
        maior = c;
        if (a >= b){
            meio = a;
            menor = b;
        }
        else{
            meio = b;
            menor = a;
        }
    }
    a = maior;
    b = meio;
    c = menor;
    if (a >= (b + c))
        printf("NAO FORMA TRIANGULO\n");   
    else if (pow(a, 2) == (pow(b, 2) + pow(c, 2)))
        printf("TRIANGULO RETANGULO\n");
    else if (pow(a, 2) > (pow(b, 2) + pow(c, 2)))
        printf("TRIANGULO OBTUSANGULO\n");
    else if (pow(a, 2) < (pow(b, 2) + pow(c, 2)))
        printf("TRIANGULO ACUTANGULO\n");
    if (a == b && b == c && a == c)
        printf("TRIANGULO EQUILATERO\n");
    if ((a == b && b != c) || (a == c && b != a) || (b == c && a != c))
        printf("TRIANGULO ISOSCELES\n");
}