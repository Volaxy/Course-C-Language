#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inteiros[10], impares[10], contador = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite um valor\n");
        scanf("%d", &inteiros[i]);

        while(inteiros[i] < 0 || inteiros[i] > 50){
            printf("Valor incorreto, digite de novo\n");
            scanf("%d", &inteiros[i]);
        }
    }

    for(int i = 0; i < 10; i++){
        if(inteiros[i] % 2 != 0){
            impares[contador] = inteiros[i];
            contador++;
        }
    }

    printf("Elementos do primeiro vetor:\n");

    for(int i = 0; i < 10; i++){
        printf("%d\n", inteiros[i]);
    }

    printf("\nElementos do segundo vetor:\n");

    for(int i = 0; i <= contador; i++){
        printf("%d\n", impares[i]);
    }

    return 0;
}
