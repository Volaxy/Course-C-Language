#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c, delta;
    float x1, x2;
    printf("Digite o valor de a, b e c\n");
    scanf("%d %d %d", &a, &b, &c);

    if(a == 0){
        printf("Nao e uma equacao de segundo grau");
    }else{
        delta = b * b - 4 * a * c;

        if(delta < 0){
            printf("Nao existe raiz");
        }else{
            if(delta == 0){
                printf("Raiz unica");
            }else{
                x1 = (- b + sqrt(delta)) / 2 * a;
                x2 = (- b - sqrt(delta)) / 2 * a;

                printf("Valor x1: %f", x1);
                printf("Valor x2: %f", x2);
            }
        }
    }

    return 0;
}
