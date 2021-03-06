#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma = 0, n;
    float media;

    for(int i = 0; i < 10; i++){
        printf("Digite um numero\n");
        scanf("%d", &n);

        soma += n;
    }

    media = soma / 10;

    printf("A media e %f", media);

    return 0;
}
