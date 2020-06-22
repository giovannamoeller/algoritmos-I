#include <stdio.h>

int inverte(int v) {
    int aux, inverso = 0;
    while(x > 0) {
        aux = x % 10;
        inverso = inverso * 10 + aux;
        x /= 10;
    }
    return inverso;
}

int main(){
    int x;
    scanf("%d", &x);
    printf("Numero %d invertido = %d\n", x, inverte(x));
}