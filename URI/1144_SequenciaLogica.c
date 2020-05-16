#include <stdio.h>
#include <math.h>

int main() {

    int numero, i = 0;
    double num = 1;
    scanf("%d", &numero);
    while(i < numero) {
        printf("%.0lf ", pow(num, 1.0));
        printf("%.0lf ", pow(num, 2.0));
        printf("%.0lf\n", pow(num, 3.0));

        printf("%.0lf ", pow(num, 1.0));
        printf("%.0lf ", pow(num, 2.0) + 1);
        printf("%.0lf\n", pow(num, 3.0) + 1);
        num++;
        i++;
    }
}