#include <stdio.h>

int main() {
	int n, j, z, i, acum, conjunto = 1;
	scanf("%d", &n);
	while(n != 0){
		acum = 0;
		printf("Teste %d\n", conjunto);
		conjunto++;
		for(i = 0; i < n; i++){
			scanf("%d %d", &j, &z);
			acum += j - z;
			printf("%d\n", acum);
		}
		printf("\n");
		scanf("%d", &n);
	}
	return 0;
}