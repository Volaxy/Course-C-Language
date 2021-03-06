#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10], pares = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite um valor\n");
        scanf("%d", &vetor[i]);

        if(vetor[i] % 2 == 0){
            pares++;
        }
    }

    printf("O vetor tem %d pares", pares);

    return 0;
}
