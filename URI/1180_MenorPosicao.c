#include <stdio.h>

int main()
{
    int i, n, p, men;
    scanf("%d", &n);
    int x[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }
    men = x[0];
    for(i = 1; i < n; i++)
    {
        if(men > x[i])
        {
            men = x[i];
            p = i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n", men, p);
}