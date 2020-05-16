#include <stdio.h>

int main(){

    int h, m, s, total;
    scanf("%d %d %d", &h, &m, &s);
    total = (h * 3600) + (m * 60) + s;
    printf("%d segundos", total);
}