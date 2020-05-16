#include <stdio.h>
 
int main() {
 
    double raio, volume;
    double pi = 3.14159;
    scanf("%lf", &raio);
    volume = (4.0 / 3) * pi * (raio * raio * raio);
    printf("VOLUME = %.3lf\n", volume);
}