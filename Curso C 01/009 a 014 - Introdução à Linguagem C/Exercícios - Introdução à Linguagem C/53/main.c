#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c, l, p, total;
    printf("Digite o comprimento, largura, e o preco\n");
    scanf("%f %f %f", &c, &l, &p);

    total = c * l * p;
    printf("O preco total e %f", total);

    return 0;
}
