#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[6];

    for(int i = 0; i < 6; i++){
        printf("Digite um valor para o vetor na posicao %d\n", i + 1);
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < 6; i++){
        printf("%d\n", vetor[i]);
    }

    return 0;
}
