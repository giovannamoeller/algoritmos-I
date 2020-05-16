#include <stdio.h>

#define true 1
#define false 0

int main(){

    int a, i, ini = 1;
    scanf("%d", &a);
    for(i = 0; i < a; i++){
        ini += (i * 2); 
    }
    for(i = 0; i < a; i++){
        printf("%d\n", ini);
        ini += 2;
    }    
    return 0;
}