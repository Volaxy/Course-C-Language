#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x;
    printf("Digite um numero\n");
    scanf("%f", &x);

    if(x >= 0) {
        printf("A raiz quadrada do numero e %f", sqrt(x));
    }else{
        printf("Numero ao quadrado e %f", x * x);
    }

    return 0;
}
