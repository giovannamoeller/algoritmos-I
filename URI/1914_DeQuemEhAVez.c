#include <stdio.h>
#include <string.h>

int main(){
     int numCasos, num, num2;
     char jogador[101], jogador2[101], i, escolha[6], result;

     scanf("%d" , &numCasos);      

     while(numCasos--){
         scanf("%s", jogador); scanf("%s", escolha);
         scanf("%s", jogador2); scanf("%s", escolha);
         scanf("%d %d" , &num, &num2);
         if(num % 2 == 0 && num2 % 2 == 0) result = 'P';
         else if(num % 2 != 0 && num2 % 2 != 0) result = 'P';
         else result = 'I';
         if(escolha[0] == 'P' && result == 'P') printf("%s\n", jogador2);
         else if(escolha[0] == 'I' && result == 'I') printf("%s\n", jogador2);
         else printf("%s\n", jogador); 
     }
}