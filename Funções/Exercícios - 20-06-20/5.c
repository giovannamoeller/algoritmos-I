#include <stdio.h>

void calcula(int v, int p) {
    if (v % p == 0) {
        for (int i = 0; i < p; i++) {
            printf("%d\n", v / p);
        }
    } else {
        int divisao = v % p;
        for (int i = 0; i < divisao; i++) {
            printf("%d\n", (v / p) + 1);
        }
        for (int j = 0; j < (p - divisao); j++) {
            printf("%d\n", (v / p));
        }
    }
}

int main(){
    int v, p;
    scanf("%d %d", &v, &p);
    calcula(v, p);
}