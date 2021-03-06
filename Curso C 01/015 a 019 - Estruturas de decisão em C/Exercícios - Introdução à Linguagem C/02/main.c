#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x;
    printf("Digite um numero\n");
    scanf("%d", &x);

    if(x >= 0) {
        printf("A raiz quadrada do numero e %f", sqrt(x));
    }else{
        printf("Numero invalido");
    }

    return 0;
}
