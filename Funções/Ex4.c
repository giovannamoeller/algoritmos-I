#include <stdio.h>

float media(float n1, float n2, float n3, char x) {
    float media;
    if (x == 'A') {
        media = (n1 + n2 + n3) / 3;
    } else if (x == 'P') {
        media = ((1 * n1) + (2 * n2) + (3 * n3)) / 6;
    } else {
        printf("Caractere invalido!\n");
    }
    return media;
}

int main() {
    float a, b, c;
    char x;
    scanf("%f %f %f %c", &a, &b, &c, &x);
    printf("Media = %.2f\n", media(a, b, c, x));
}

