#include <stdio.h>

int main() {

    int numero, i = 0, num = 0;
    scanf("%d", &numero);
    while(i < numero) {
        printf("%d ", ++num);
        printf("%d ", ++num);
        printf("%d ", ++num);
        printf("PUM\n");
        num++;
        i++;
    }
}