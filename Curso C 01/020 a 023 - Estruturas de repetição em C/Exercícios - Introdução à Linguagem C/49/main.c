#include <stdio.h>
#include <stdlib.h>

int main()
{
    int meses = 0;
    float carlos, joao;

    printf("Digite o salario do carlos\n");
    scanf("%f", &carlos);

    joao = carlos / 3;

    while(joao < carlos){
        carlos *= 1.02;
        joao *= 1.05;

        meses++;
    }

    printf("O tempo sera de %d meses", meses);

    return 0;
}
