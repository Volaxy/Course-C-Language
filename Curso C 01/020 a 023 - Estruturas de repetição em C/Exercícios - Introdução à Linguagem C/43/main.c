#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, soma = 0, i = 0;
    float media;

    do{
        printf("Digite sua idade\n");
        scanf("%d", &idade);

        if(idade > 0){
            soma += idade;
            i++;
        }
    }while(idade > 0);

    media = soma / i;

    printf("A idade media  e %f", media);

    return 0;
}
