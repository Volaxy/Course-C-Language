#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma = 0, n;

    printf("Digite um numero\n");
    scanf("%d", &n);

    for(int i = 0; i <= n; i++){
        soma += i;
    }

    printf("A soma e %d\n", soma);

    printf("Digite um numero\n");
    scanf("%d", &n);

    soma = 0;

    for(int i = 1; i <= n; i += 2){
        soma += i;
    }

    printf("A soma e %d", soma);

    return 0;
}
