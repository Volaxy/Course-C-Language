#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b;
    printf("Digite o valor de 2 catetos\n");
    scanf("%d %d", &a, &b);
    printf("O valor da hipotenusa e %f", sqrt(a * a + b * b));

    return 0;
}
