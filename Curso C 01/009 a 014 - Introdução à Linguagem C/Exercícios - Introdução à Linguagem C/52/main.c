#include <stdio.h>
#include <stdlib.h>

int main()
{
    float premio, aposta1, aposta2, aposta3, total, partes;
    printf("Digite o valor do premio, e quanto cada um apostou\n");
    scanf("%f %f %f %f", &premio, &aposta1, &aposta2, &aposta3);

    total = aposta1 + aposta2 + aposta3;

    partes = premio / total;

    printf("Apostador 1 recebe %f\n", partes * aposta1);
    printf("Apostador 2 recebe %f\n", partes * aposta2);
    printf("Apostador 3 recebe %f\n", partes * aposta3);

    return 0;
}
