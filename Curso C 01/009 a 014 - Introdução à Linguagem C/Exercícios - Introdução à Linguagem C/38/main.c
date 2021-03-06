#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario;
    printf("Digite o valor do salario\n");
    scanf("%f", &salario);
    printf("O valor do salario com aumento e %f", salario * 1.25);

    return 0;
}
