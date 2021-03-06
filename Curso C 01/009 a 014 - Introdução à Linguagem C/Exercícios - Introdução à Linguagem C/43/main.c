#include <stdio.h>
#include <stdlib.h>

int main()
{
    float total;
    printf("Digite um valor\n");
    scanf("%f", &total);
    printf("Valor com desconto: %f\n", total * 0.90);
    printf("Valor em parcelas de 3x: %f\n", total / 3);
    printf("Valor a vista: %f\n", total * 0.95);
    printf("Valor com parcela: %f\n", total * 1.05);

    return 0;
}
