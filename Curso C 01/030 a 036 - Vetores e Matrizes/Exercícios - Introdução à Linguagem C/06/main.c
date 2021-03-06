#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10], maior = 0, menor = 10000;

    for(int i = 0; i < 10; i++){
        printf("Digite um valor\n");
        scanf("%d", &vetor[i]);

        if(vetor[i] > maior){
            maior = vetor[i];
        }else{
            if(vetor[i] < menor){
                menor = vetor[i];
            }
        }
    }

    printf("O maior valor e %d\n", maior);
    printf("O menor valor e %d\n", menor);

    return 0;
}
