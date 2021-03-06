#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador = 0;
    float media, n, soma = 0;

    printf("Digite uma nota\n");
    scanf("%f", &n);

    while(n >= 10 && n <= 20){
        contador++;
        soma += n;

        printf("Digite uma nota\n");
        scanf("%f", &n);
    }

    media = soma / contador;

    printf("A media e %f", media);

    return 0;
}
