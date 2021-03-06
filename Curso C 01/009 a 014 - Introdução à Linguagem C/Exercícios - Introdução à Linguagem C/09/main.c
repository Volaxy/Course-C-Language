#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c;
    printf("Digite uma temperatura em graus celsius\n");
    scanf("%f", &c);
    printf("A temperatura em celsius e %f", c + 273.15);

    return 0;
}
