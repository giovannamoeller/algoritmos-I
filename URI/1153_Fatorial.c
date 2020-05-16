#include <stdio.h>

int main() {

    int n, op = 1, fat, i = 0;
    scanf("%d", &n);
    fat = i = n;
    while (i > 1){
        fat *= i - 1;
        i--;
    }
    printf("%d\n", fat);
}