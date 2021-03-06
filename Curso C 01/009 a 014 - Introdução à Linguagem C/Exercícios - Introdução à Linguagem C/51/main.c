#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x, y;
    float distancia;
    printf("Digite os valores de X e de Y\n");
    scanf("%d %d", &x, &y);
    distancia = sqrt((x * x) + (y * y));
    printf("A distancia do ponto (0, 0) ate o ponto X e Y e %f", distancia);

    return 0;
}
