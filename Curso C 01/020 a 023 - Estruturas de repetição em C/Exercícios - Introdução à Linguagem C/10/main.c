#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma = 0;

    for(int i = 0; i <= 100; i += 2){
        soma += i;
    }

    printf("A soma e %d", soma);

    return 0;
}
