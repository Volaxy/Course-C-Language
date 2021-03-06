#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10], x;

    for(int i = 0; i < 10; i++){
        printf("Digite um valor\n");
        scanf("%d", &vetor[i]);
    }

    printf("Digite um numero X\n");
    scanf("%d", &x);

    for(int i = 0; i < 10; i++){
        if(x % vetor[i] == 0){
            printf("%d\n", vetor[i]);
        }
    }

    return 0;
}
