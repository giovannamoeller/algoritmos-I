// Aluna: Giovanna Gimenes Moeller
// Curso: Sistemas de Informação

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int op = 1, op2, op3;
    double angulo, x, valor;
    while (op == 1){
        printf("\n\nM E N U\n\n");
        printf("1. Seno\n2. Cosseno\n3. Tangente\n4. Secante\n5. Cossecante\n6. Cotangente\n7. Arco-seno\n8. Arco-cosseno\n9. Arco-tangente\n10. Sair\n\n");
        printf("Digite sua opcao: ");
        scanf("%d", &op2);
        while (op2 < 1 || op2 > 10){
            printf("Opcao invalida! Redigite: ");
            scanf("%d", &op2);
        }
        switch(op2) {
            case 7: printf("Digite o valor do seno: ");
                    scanf("%lf", &valor);
                    break;
            case 8: printf("Digite o valor do cosseno: ");
                    scanf("%lf", &valor);
                    break;
            case 9: printf("Digite o valor da tangente: ");
                    scanf("%lf", &valor);
                    break;
            case 10:
                    exit(1);
                    break;
            default: 
                    printf("Digite 1 para digitar o angulo em radiano ou 2 para digitar em grau: ");
                    scanf("%d", &op3);
                    while (op3 != 1 && op3 != 2){
                        printf("Opcao invalida! Redigite: ");
                        scanf("%d", &op3);
                    }
                    printf("Digite o angulo: ");
                    scanf("%lf", &angulo);
                    (op3 == 1) ? (x = angulo) : (x = (M_PI * angulo) / 180);
        }
        switch (op2) {
            case 1:
                printf("Seno = %.2lf\n", sin(x));
                break;
            case 2:
                printf("Cosseno = %.2lf\n", cos(x));
                break;
            case 3:
                printf("Tangente = %.2lf\n", tan(x));
                break;
            case 4:
                printf("Secante = %.2lf\n", (1 / cos(x)));
                break;
            case 5:
                printf("Cossecante = %.2lf\n", (1 / sin(x)));
                break;
            case 6:
                printf("Cotangente = %.2lf\n", (1 / tan(x)));
                break;
            case 7: 
                printf("Arco-seno = %.2lf (radianos)\n", asin(valor));
                break;
            case 8: 
                printf("Arco-cosseno = %.2lf (radianos)\n", acos(valor));
                break;
            case 9:
                printf("Arco-tangente = %.2lf (radianos)\n", atan(valor));
                break;
        }
        printf("Digite 1 para reprocessamento ou 2 para sair: ");
        scanf("%d", &op);
        while (op != 1 && op != 2){
            printf("Comando invalido! Redigite: ");
            scanf("%d", &op);
        }
        system("clear");
    }
}