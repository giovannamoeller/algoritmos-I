#include <stdio.h>

float media(float n1, float n2, float n3, float p1, float p2, float p3) {
    float media;
    media = ((p1 * n1) + (p2 * n2) + (p3 * n3)) / (p1 + p2 + p3);
    return media;
}

int main() {
    float a, b, c, x, y, z;
    scanf("%f %f %f %f %f %f", &a, &b, &c, &x, &y, &z);
    printf("Media = %.2f\n", media(a, b, c, x, y, z));
}

