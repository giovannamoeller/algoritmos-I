#include <stdio.h>

int main() {

    int i;
    for (i = 1; i < 200; i++) {
        if (i % 4 == 0){
            printf("%d eh divisivel por 4\n", i);
        }
    }
}