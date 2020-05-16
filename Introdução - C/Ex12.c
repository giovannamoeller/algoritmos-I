#include <stdio.h>
#include <math.h>

int main(){

    float volume, raio;
    float pi = 3.14;
    scanf("%f", &raio);
    volume = (4 * pi * (pow(raio, 3))) / 3;
    printf("%.2f m3", volume);
}