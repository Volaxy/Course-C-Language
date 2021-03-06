#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c;
    printf("Digite uma temperatura em graus celsius\n");
    scanf("%f", &c);
    printf("A temperatura em fahrennheit e %f", c * (9 / 5) + 32);

    return 0;
}
