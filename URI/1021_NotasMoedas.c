#include <stdio.h>
#include <math.h>

int main(){

    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, inteiro_int;
    double o, p, q, r, s, t, u, v, x, z, valor, inteiro, flutuante;
    scanf("%lf", &valor);
    flutuante = modf(valor, &inteiro);
    inteiro_int = (int)inteiro;

    a = inteiro_int / 100; b = inteiro_int % 100;
    c = b / 50; d = b % 50;
    e = d / 20; f = d % 20;
    g = f / 10; h = f % 10;
    i = h / 5; j = h % 5;
    k = j / 2; l = j % 2;
    m = l / 1; n = l % 1;

    o = (flutuante * 100) / 50; p = (int) (flutuante * 100) % (int) 50;
    q = p / 25; r = (int) p % (int) 25;
    s = r / 10; t = (int) r % (int) 10;
    u = t / 5; v = (int) t % 5;
    x = v / 1; z = (int) v % (int) 1;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", a);
    printf("%d nota(s) de R$ 50.00\n", c);
    printf("%d nota(s) de R$ 20.00\n", e);
    printf("%d nota(s) de R$ 10.00\n", g);
    printf("%d nota(s) de R$ 5.00\n", i);
    printf("%d nota(s) de R$ 2.00\n", k); 
    
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", (int)m);
    printf("%d moeda(s) de R$ 0.50\n", (int)o);
    printf("%d moeda(s) de R$ 0.25\n", (int)q);
    printf("%d moeda(s) de R$ 0.10\n", (int)s);
    printf("%d moeda(s) de R$ 0.05\n", (int)u);
    printf("%d moeda(s) de R$ 0.01\n", (int)x);

}

