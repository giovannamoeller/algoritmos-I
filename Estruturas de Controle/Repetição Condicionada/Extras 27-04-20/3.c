#include <stdio.h>

int main(){

    double num = 100, den = 2, s = 199, fat;
    int i, j = 1;
    for (i = 1; i <= 12; i++){
        fat = j = den;
        while (j > 1) {
            fat *= j - 1;
            j--;
        }
        s += num / fat;
        num--;
        den++;
    }
    printf("Resultado = %lf\n", s);
}