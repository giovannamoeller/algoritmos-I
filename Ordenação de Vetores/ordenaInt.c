int main(){
	int i, j, aux, n, v[] = { 6, 5, 3, 2, 8, 1, 9, 4, 10, 7};
	n = 10;
	printf ("Vetor:\n");
	for (i = 0; i < n; i++)
	  printf ("%2d ",v[i]);
	printf ("\n\n");
	// ordenacao
	for (i = 0; i < n-1; i++)
	  for (j = i+1; j < n; j++)
	    if (v[i]>v[j]){
	    	aux = v[i];
	    	v[i] = v[j];
	    	v[j] = aux;
		}
	printf ("Vetor ordenado:\n");
	for (i = 0; i < n; i++)
	  printf ("%2d ",v[i]);
	printf ("\n\n");
}
