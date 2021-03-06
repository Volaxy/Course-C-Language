#include <stdio.h>
#include <stdlib.h>

int main()
{
    float antigo;
    printf("Digite o preco do produto\n");
    scanf("%f", &antigo);

    if(antigo < 50){
        printf("Novo preco: %f", antigo * 1.05);
    }else{
        if(antigo >= 50 && antigo < 100){
            printf("Novo preco: %f", antigo * 1.1);
        }else{
            printf("Novo preco: %f", antigo * 1.15);
        }
    }

    return 0;
}
