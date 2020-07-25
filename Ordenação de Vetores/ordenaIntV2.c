void troca (int *a, int *b){
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}
//----------------------------------------------------------
void ordenacao (int n, int v[]){
	int i, j;
    for (i = 0; i < n-1; i++)
       for (j = i+1; j < n; j++)
	     if (v[i]>v[j])
		   troca (&v[i],&v[j]);
}
//----------------------------------------------------------
void imprimeVetor (int n, int vet[]){
	int i;
	for (i = 0; i < n; i++)
	  printf ("%2d ",vet[i]);
	printf ("\n\n");
}
//----------------------------------------------------------
int main(){
	int i, j, aux, n, v[] = { 6, 58, 31, 2, 18, 19, 9, 24, 910, 77};
	n = 10;
	printf ("Vetor:\n");
	imprimeVetor (n,v);
	ordenacao (n,v);
	printf ("Vetor ordenado:\n");
	imprimeVetor (n,v);
}
