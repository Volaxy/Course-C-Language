#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dias;
    printf("Digite os dias trabalhados\n");
    scanf("%d", &dias);
    printf("O preco que deve ser pago ao encanador e %f", dias * 30 * 0.92);

    return 0;
}
