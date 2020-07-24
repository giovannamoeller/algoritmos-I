#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void classificar() {
    for(int i = 48; i <= 57; i++) {
        printf("%c  ", i);
    }
    for(int i = 65; i <= 90; i++) {
        printf("%c  ", i);
    }
    for(int i = 97; i <= 122; i++) {
        printf("%c  ", i);
    }
}

int main() {
    classificar();
}