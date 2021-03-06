#include <stdio.h>
#include <stdlib.h>

int main()
{
    float k;
    printf("Digite uma temperatura em graus kelvin\n");
    scanf("%f", &k);
    printf("A temperatura em celsius e %f", k - 273.15);

    return 0;
}
