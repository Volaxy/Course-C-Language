#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km;
    printf("Digite uma velocidade em km/h\n");
    scanf("%f", &km);
    printf("A velocidade em m/s e %f", km / 3.6);
    return 0;
}
