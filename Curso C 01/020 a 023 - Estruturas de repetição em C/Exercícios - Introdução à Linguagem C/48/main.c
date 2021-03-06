#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1 = 0, n2 = 1, aux, soma = 0;

    printf("0 1 ");

    while(soma < 4000000){
        if((n1 + n2) % 2 == 0){
            soma += n1 + n2;
        }

        aux = n1 + n2;

        printf("%d ", aux);

        n1 = n2;
        n2 = aux;
    }

    printf("\nA soma dos pares e %d", soma);

    return 0;
}
