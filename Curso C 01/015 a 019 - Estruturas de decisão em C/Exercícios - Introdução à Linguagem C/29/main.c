#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, soma, resposta, acertou = 0;

    for(int i = 0; i < 5; i++){
        x = rand() % 100;
        y = rand() % 100;
        soma = x + y;

        printf("Qual a soma entre %d e %d\n", x, y);
        scanf("%d", &resposta);

        if(resposta == soma){
            acertou++;
        }

        printf("A resposta correta era %d\n", soma);

        }

    printf("Voce acertou %d", acertou);

    return 0;
}
