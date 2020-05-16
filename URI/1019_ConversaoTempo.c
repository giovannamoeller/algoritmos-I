#include <stdio.h>
 
int main() {
 
    int seg, h, h1, m, s;
    scanf("%d", &seg);
    h = seg / 3600;
    h1 = seg % 3600;
    m = h1 / 60;
    s = h1 % 60;
    printf("%d:%d:%d\n",h,m,s);
}