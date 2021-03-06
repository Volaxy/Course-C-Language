#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = rand() % 1000, resposta;

    do{
        int tentativas = 0;
        printf("======================\n");
        printf("Chute um numero\n");
        scanf("%d", &resposta);

        if(resposta < n){
            printf("Chute um numero maior\n");
            tentativas++;
        }else{
            if(resposta > n){
                printf("Chute um numero menor\n");
                tentativas++;
            }else{
                printf("Voce acertou\n");
                tentativas++;
                printf("Tentativas: %d", tentativas);
            }
        }
    }while(resposta != n);

    return 0;
}
