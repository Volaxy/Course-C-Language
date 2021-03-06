#include <stdio.h>
#include <stdlib.h>

int main()
{
    int maior = 0, n, contador = 0;

    printf("Digite a quantidade de numeros\n");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        int numero;

        printf("Digite um numero\n");
        scanf("%d", &numero);

        if(numero > maior){
            maior = numero;
            contador++;
        }
    }

    printf("O numero de vezes que o numero maior foi lido foi %d", contador);

    return 0;
}
