#include <stdio.h>
#include <stdlib.h>

int main()
{
    int parada, n1 = 0, n2 = 1, aux;

    printf("Digite um numero\n");
    scanf("%d", &parada);

    while(aux <= parada){
        aux = n1 + n2;
        printf("%d ", aux);
        n1 = n2;
        n2 = aux;
    }

    return 0;
}
