#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n[10], media, soma = 0, desvio = 0;

    for(int i = 0; i < 10; i++){
        n[i] = rand() % 100;

        soma += n[i];
    }

    media = soma / 10;

    soma = 0;

    for(int i = 0; i < 10; i++){
        desvio += sqrt((1 / (i - 1)) + (n[i] - media) * (n[i] - media));
    }

    printf("O desvio padrao e %f", desvio);

    return 0;
}
