#include <stdio.h>
#include <stdlib.h>

int main()
{
    float real, dolar;
    printf("Digite um valor em reais e o preco do dolar\n");
    scanf("%f %f", &real, &dolar);
    printf("O preco em dolares e %f", real / dolar);

    return 0;
}
