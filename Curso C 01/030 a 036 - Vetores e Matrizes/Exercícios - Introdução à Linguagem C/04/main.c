#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, vetor[8], soma = 0;

    for(int i = 0; i < 8; i++){
        printf("Digite um valor\n");
        scanf("%d", &vetor[i]);
    }

    printf("Digite um valor em X e um valor em Y\n");
    scanf("%d %d", &x, &y);

    for(int i = x; i <= y; i++){
        soma += vetor[i];
    }

    printf("A soma e %d", soma);

    return 0;
}
