#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horas;
    float salario;
    printf("Digite o valor de reais/hora e o numero de horas trabalhadas\n");
    scanf("%f %d", &salario, &horas);
    printf("O valor a ser pago ao funcionario e %f", salario * horas * 1.1);

    return 0;
}
