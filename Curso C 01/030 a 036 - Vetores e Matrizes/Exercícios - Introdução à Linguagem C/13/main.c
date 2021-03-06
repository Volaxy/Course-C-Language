#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valores[5], menor = 100, maior = -100, posicaomenor, posicaomaior;

    for(int i = 0; i < 5; i++){
        printf("Digite um valor\n");
        scanf("%d", &valores[i]);

        if(valores[i] > maior){
            maior = valores[i];
            posicaomaior = i;
        }

        if(valores[i] < menor){
            menor = valores[i];
            posicaomenor = i;
        }
    }

    printf("O menor valor lido foi %d e se encontra na posicao %d\n", menor, posicaomenor);
    printf("O maior valor lido foi %d e se encontra na posicao %d\n", maior, posicaomaior);

    return 0;
}
