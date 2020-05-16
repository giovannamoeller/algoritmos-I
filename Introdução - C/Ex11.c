#include <stdio.h>
#include <math.h>

int main(){

    float x1, x2, y1, y2, dist;
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    dist = sqrt(pow((x1 + y1), 2) + pow((x2 + y2), 2));
    printf("%.2f U.M", dist);
}