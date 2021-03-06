#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario;
    printf("Digite o salario do funcionario\n");
    scanf("%f", &salario);
    printf("Valor do salario: %f", (salario * 1.05) * 0.93);

    return 0;
}
