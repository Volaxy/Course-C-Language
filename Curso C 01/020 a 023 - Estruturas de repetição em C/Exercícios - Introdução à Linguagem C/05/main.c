#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma = 0, n;

    for(int i = 0; i < 10; i++){
        printf("Digite um numero\n");
        scanf("%d", &n);

        soma += n;
    }

    printf("A soma e %d", soma);

    return 0;
}
