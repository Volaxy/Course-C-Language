#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valores[5], menor = 100, maior = -100, media = 0;

    for(int i = 0; i < 5; i++){
        printf("Digite um valor\n");
        scanf("%d", &valores[i]);

        if(valores[i] > maior){
            maior = valores[i];
        }

        if(valores[i] < menor){
            menor = valores[i];
        }

        media += valores[i];
    }

    media = media / 5;

    printf("O menor valor lido foi %d\n", menor);
    printf("O maior valor lido foi %d\n", maior);
    printf("O media dos valores foi %d\n", media);

    return 0;
}
