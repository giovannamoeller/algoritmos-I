#include <stdio.h>
 
int main() {
 
    int km;
    float gasolina;
    scanf("%d %f", &km, &gasolina);
    printf("%.3f km/l\n", km / gasolina);
}