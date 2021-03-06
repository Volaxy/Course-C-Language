#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x;
    printf("Digite um numero\n");
    scanf("%f", &x);

    if(x >= 0) {
        printf("Raiz quadrada %f\n", sqrt(x));
        printf("Numero ao quadrado %f", x * x);
    }

    return 0;
}
