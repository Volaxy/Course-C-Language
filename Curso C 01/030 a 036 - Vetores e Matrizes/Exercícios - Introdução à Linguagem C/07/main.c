#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10], maior = -100, posicao;

    for(int i = 0; i < 10; i++){
        printf("Digite um valor\n");
        scanf("%d", &vetor[i]);

        if(vetor[i] > maior){
            maior = vetor[i];
            posicao = i;
        }
    }

    printf("O maior valor e %d e se encontra na posicao %d", maior, posicao);

    return 0;
}
