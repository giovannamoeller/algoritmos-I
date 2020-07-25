#include <stdio.h>
#include <string.h>
#define tam 20
//----------------------------------------------------------
void troca (char a[], char b[]){
	char aux[15];
	strcpy (aux,a);
	strcpy (a,b);
	strcpy (b,aux);
}
//----------------------------------------------------------
void ordenacao (int n, char v[tam][20]){
	int i, j;
    for (i = 0; i < n-1; i++)
       for (j = i+1; j < n; j++)
	     if (stricmp (v[i],v[j]) > 0)
		   troca (v[i],v[j]);
}
//----------------------------------------------------------
void leNomes (int n, char vet[tam][20]){
	int i;
	for (i = 0; i < n; i++){
      printf ("%do. nome: ",i+1);
      gets(vet[i]); // scanf ("%s",&vet[i]);  
    }
}
//----------------------------------------------------------
void mostraNomes (int n, char vet[tam][20]){
	int i;
	for (i = 0; i < n; i++)
	  printf ("%s\n",vet[i]);
	printf ("\n");
}
//----------------------------------------------------------
int main(){
	char vetor[tam][20];
	int n;
	// leitura da quantidade de nomes
	do{
		printf ("Quantos nomes (max %d)? ",tam);
		scanf ("%d",&n);
	} while (n < 1 || n > tam);
	// Leitura dos nomes
	fflush (stdin);
	leNomes (n,vetor);
	mostraNomes (n,vetor);
	ordenacao (n,vetor);
	mostraNomes (n,vetor);
}
