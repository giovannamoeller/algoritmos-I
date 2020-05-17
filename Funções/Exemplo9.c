#include <stdio.h>

// variáveis globais - não recomendado

void func1(), func2();

int cont; // global

int main() {
    cont = 100;
    func1();
}

void func1() {
    int temp;
    temp = cont;
    func2();
    printf("\ntemp = %d", temp);
    printf("\ncont = %d", cont);
}

void func2() {
    int cont;
    for (cont = 1; cont <= 10; cont++) {
        printf(".");
    }
}