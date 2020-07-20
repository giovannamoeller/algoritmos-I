#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int i, movimentos = 0, repeticoes = 0, aux = 0;
    char palavra[50];
    scanf("%d", &repeticoes);
    while(repeticoes--){
        scanf("%s", palavra);
        scanf("%d", &movimentos);
        for (i = 0; i < 50; i++){
            if (palavra[i] == '\0')
                break;
            if ((palavra[i] - movimentos) < 65)
                aux = (palavra[i] - movimentos) + 26;
            else
                aux = palavra[i] - movimentos;
        printf("%c", aux);
        }
        printf("\n");
    }
}