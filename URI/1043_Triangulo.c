#include <stdio.h>
#include <math.h>

int main(){

    float a, b, c, perimetro, area;
    scanf("%f %f %f", &a, &b, &c);
    if (fabs(b - c) < a && (b + c) > a){
        perimetro = a + b + c;
        printf("Perimetro = %.1f\n", perimetro);
    }
    else{
        area = ((b + a) * c) / 2;
        printf("Area = %.1f\n", area);
    }
}