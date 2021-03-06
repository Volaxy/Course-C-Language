#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor;
    printf("Digite o valor do produto\n");
    scanf("%f", &valor);
    printf("O valor do produto com desconto e %f", valor * 0.88);

    return 0;
}
