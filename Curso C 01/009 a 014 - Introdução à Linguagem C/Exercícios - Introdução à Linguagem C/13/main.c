#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km;
    printf("Digite um valor em km\n");
    scanf("%f", &km);
    printf("O valor em milhas e %f", km / 1.61);

    return 0;
}
