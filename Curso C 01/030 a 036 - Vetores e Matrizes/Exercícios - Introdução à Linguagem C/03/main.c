#include <stdio.h>
#include <stdlib.h>

int main()
{
    float reais[10], quadrado[10];

    for(int i = 0; i < 10; i++){
        printf("Digite um valor\n");
        scanf("%f", &reais[i]);

        quadrado[i] = reais[i] * reais[i];
    }

    for(int i = 0; i < 10; i++){
        printf("Valor do 1 vetor: %f\n", reais[i]);
        printf("Valor do 2 vetor: %f\n==========================\n", quadrado[i]);
    }

    return 0;
}
