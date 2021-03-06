#include <stdio.h>
#include <stdlib.h>

int main()
{
    int maior = 0, menor = 0, n;

    for(int i = 0; i < 10; i++){
        printf("Digite um numero\n");
        scanf("%d", &n);

        if(n > maior){
            maior = n;
        }

        if(n < menor){
            menor = n;
        }
    }

    printf("O maior numero e menor sao %d e %d", maior, menor);

    return 0;
}
