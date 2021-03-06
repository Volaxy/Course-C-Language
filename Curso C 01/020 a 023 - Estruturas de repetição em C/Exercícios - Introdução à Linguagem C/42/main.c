#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n;

    do{
        printf("Digite um valor\n");
        scanf("%f", &n);

        printf("Quadrado: %f\n", n * n);
        printf("Cubo: %f\n", n * n * n);
        printf("Raiz: %f\n", sqrt(n));
    }while(n > 0);

    return 0;
}
