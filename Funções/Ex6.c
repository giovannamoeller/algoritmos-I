#include <stdio.h>

int verifica(int valores[], int n) {
    int maior = valores[0], menor = valores [0], i;
    for (i = 0; i < n; i++) {  
        if (valores[i] > maior) {
            maior = valores[i];
        }
        else if (valores[i] < menor) {
            menor = valores[i];
        }
    }
    printf("Maior valor = %d\n", maior);
    printf("Menor valor = %d\n", menor);
}

int main() {
    int valores[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &valores[i]);
    }
    verifica(valores, 5);
    
}

