#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[6];

    for(int i = 0; i < 6; i++){
        printf("Digite um valor\n");
        scanf("%d", &vetor[i]);
    }

    for(int i = 5; i >= 0; i--){
        printf("%d\n", vetor[i]);
    }

    return 0;
}
