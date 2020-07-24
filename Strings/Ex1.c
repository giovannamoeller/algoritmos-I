#include <stdio.h>
#include <string.h>

int main() {
    char frase[100];
    int cont = 0;
    printf("Digite uma frase: ");
    gets(frase);
    for(int i = 0; i < strlen(frase); i++) {
        if(frase[i] == 'a' || frase[i] == 'e' ||
            frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' ||
            frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || 
            frase[i] == 'O' || frase[i] == 'U') {
                cont++;
            }
    }
    printf("Total de vogais: %d\n", cont);
    
}