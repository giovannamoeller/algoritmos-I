#include <stdio.h>  

int main(){

    double I, J, numI, numJ;
    for (I = 0; I <= 1.8; I += 0.2) {
        for (J = 1; J <= 3; J++) {
            numI = I - (int)I;
            if (numI != 0) {
                printf("I = %.1lf J = %.1lf\n", I, J, J + I);
            } else {
                printf("I = %.0lf J = %.0lf\n", I, J, J + I);
            }
        }   
    }
    printf ("I=2 J=3\n");    
    printf ("I=2 J=4\n");    
    printf ("I=2 J=5\n");
}