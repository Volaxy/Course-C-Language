#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ms;
    printf("Digite uma velocidade em m/s\n");
    scanf("%f", &ms);
    printf("A velocidade em km/h e %f", ms * 3.6);
    return 0;
}
