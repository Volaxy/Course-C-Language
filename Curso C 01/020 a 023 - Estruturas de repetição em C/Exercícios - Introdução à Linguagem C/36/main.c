#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma = 0, soma2 = 0;

    for(int i = 1; i <= 100; i++){
        soma += i * i;
    }

    for(int i = 1; i <= 100; i++){
        soma2 += i;
    }

    soma2 *= soma2;

    printf("A diferenca entre os 2 e %d", soma2 - soma);

    return 0;
}
