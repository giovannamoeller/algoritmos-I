#include <stdio.h>
#include <math.h>

int main(){

    double den = 1, s = 0, pi;
    int i;
    for (i = 1; i <= 30; i++){
        (i % 2 == 0) ? (s -= 1/(pow(den, 3))) : (s += 1/(pow(den, 3)));
        den+=2;
    }
    pi = pow(32 * s, 1.0/3.0);
    printf("Resultado = %.2lf\n", pi);
}