#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, numeros = 1, contador = 1;

    printf("Digite um numero\n");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= contador; j++){
            printf("%d ", numeros);
            numeros++;
        }
        contador++;

        printf("\n");
    }

    return 0;
}
